"""Dump the .data segment at two title-frame snapshots, then diff to find
monotonic per-frame counters. Any 4-byte word whose delta = N (N==gap) is
a candidate demo cursor. From the addresses we then look up ARM code that
writes them and RE the title-demo tick.

Layout per soh3d/CLAUDE.md: put scratch in scratch/, not /tmp.
"""
import os, sys, struct, subprocess
sys.path.insert(0, '<SOH3D_REPO>/tools')
from harness_ctl import spawn

SCRATCH = "<SOH3D_REPO>/scratch/gamestate_re"
os.makedirs(SCRATCH, exist_ok=True)
DUMP_A = f"{SCRATCH}/data_title_A.bin"
DUMP_B = f"{SCRATCH}/data_title_B.bin"
# The RW-private .data VA range per prior title_gamestate.md work
BASE = 0x004F9000
SIZE = 0x0CF000
GAP  = 300   # frames between snapshots

with spawn() as h:
    print("boot ok", flush=True)
    print("run 400:", h.send("run 400"), flush=True)
    print("dumprange A:", h.send(f"dumprange 0x{BASE:x} 0x{SIZE:x} {DUMP_A}"), flush=True)
    print(f"run {GAP}:", h.send(f"run {GAP}"), flush=True)
    print("dumprange B:", h.send(f"dumprange 0x{BASE:x} 0x{SIZE:x} {DUMP_B}"), flush=True)

a = open(DUMP_A, "rb").read()
b = open(DUMP_B, "rb").read()
assert len(a) == len(b) == SIZE

# Find words whose delta == GAP or a small multiple; also words that
# increment monotonically (b > a) by any positive amount ≤ 4*GAP (to
# catch counters ticked at 4Hz etc).
cands = []
for off in range(0, SIZE, 4):
    va = BASE + off
    va32a = struct.unpack_from('<I', a, off)[0]
    vb32 = struct.unpack_from('<I', b, off)[0]
    # Filter out zeros and large pointer-like values that changed
    if va32a == vb32:
        continue
    d = vb32 - va32a
    if d <= 0 or d > 4*GAP:
        continue
    # Prefer exact multiples of GAP/frame ratio
    if d in (GAP, GAP*2, GAP*4, GAP//2, GAP//4, GAP//5, GAP//10):
        cands.append((va, va32a, vb32, d, "exact"))
    elif 60 <= d <= GAP:
        cands.append((va, va32a, vb32, d, "sub60Hz"))

cands.sort(key=lambda c: (0 if c[4]=="exact" else 1, c[0]))
print(f"\n{len(cands)} monotonic candidates (delta in [1..{4*GAP}]):", flush=True)
for va, a_v, b_v, d, tag in cands[:80]:
    print(f"  {va:08x}: {a_v:08x} → {b_v:08x}  Δ={d}  {tag}", flush=True)
