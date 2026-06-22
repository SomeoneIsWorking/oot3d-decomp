# OoT3D → N64 divergence map (the OoT3D-on-PC port's mismatch index)

Goal (user directive 2026-06-22): **commit to porting OoT3D to PC** via the hybrid path — extend
SoH3D (the running Shipwright/N64-OoT engine + OoT3D assets) by absorbing OoT3D's deltas. To do that
top-down instead of bug-by-bug, we build **broad ownership of the OoT3D binary** and a systematic
**divergence map**: for each OoT3D function, its N64 twin and whether Grezzo changed it. The
divergences (+ the genuine 3DS-only additions) ARE the port payload.

See `docs/player_port.md` for the deep per-behavior player notes; this file is the **breadth index**.

## Why this works (the accelerator)
OoT3D is Grezzo's 3DS port of the SAME C codebase as the fully-decompiled N64 OoT. So nearly every
OoT3D function has an N64 twin in `Shipwright/soh/src` that we can align + diff. We do NOT decompile
blind ARM — the N64 decomp is the Rosetta stone.

## Emergent finding (drives the strategy)
Every player bug chased to ground so far — **#86 run-off-edge, #79 climb-teleport, #6/#85/#9 carry,
walk-stop, idle** — the OoT3D logic is **byte-exact to N64**. The reported Link bugs are **SoH3D
INTEGRATION bugs** (SoH3D feeding faithful logic wrong inputs / not replicating 3DS-relied-on state),
NOT Grezzo behavior changes. Genuine Grezzo *additions* are narrow and cluster on a **3DS-only field
family** (`+0x4c37`, `+0x174e`, `+0x29b8` bits, `+0x4c32` behaviorType2) driving idle/aim/region
variants. ⇒ The port is mostly *integration correctness* + a small set of 3DS feature flags, not a
wholesale rewrite — which is exactly why extending SoH3D beats a full re-decomp.

## Port scope buckets (every OoT3D system lands in one)
- **(a) reuse N64 decomp as-is** — faithful logic SoH3D already runs (most of the engine + gameplay).
- **(b) port the OoT3D delta** — Grezzo logic changes (the DIVERGENT funcs below). The known cluster:
  the engine-wide **3DS region/zone field family** (PlayState `+0x4c30`/`+0x4c32`/`+0x4c33`/`+0x4c35`/
  `+0x4c37`) gating spawn/collision/camera/draw/idle, + the morphTable pointer→0x34-stride relayout.
- **(c) reimplement 3DS-only** — no N64 twin; built fresh in SoH3D:
  - **3DS LIGHTING** (user goal, 2026-06-22): replicate OoT3D's PICA200 **per-fragment lighting**
    (Fresnel/specular/diffuse via fragment-lighting LUTs + per-material light env, per-room ambient)
    in SoH3D's GL path. Renderer reimplementation, NOT a logic port — no N64 twin. Strategy: capture
    the live PICA200 lighting state from the Azahar oracle to drive it; rides the same PICA surface as
    the 3×4-matrix and region-field findings. Tracked here as a parallel graphics-fidelity workstream
    separate from the gameplay-logic port.
  - 3DS UI (dual-screen item/menu, touch), gyro aiming, Sheikah Stone hint movies, Boss Challenge,
    Master Quest integration, the remade textures/models (already loaded as assets in SoH3D).

## Coverage (live count)
- OoT3D code.bin: **~8,265 functions** total (4.5 MB, whole game statically linked).
- Decompiled to `build/decomp/<addr>.c` (gitignored): **318** (as of ring-1 sweep, 2026-06-22).
- Inventory: `build/decomp/functions.csv` (8,265 rows: addr,name,size).

## The systematic ownership pipeline (call-graph BFS from anchors)
1. **Seed** = the ~30 confirmed OoT3D→N64 anchors in `docs/player_port.md`.
2. **Expand ring**: every `FUN_xxxxxx` referenced by an already-decompiled function is the next ring of
   callees (player-subsystem funcs whose twins are findable by adjacency). Extract:
   `grep -rhoE 'FUN_[0-9a-f]{6,8}' build/decomp/*.c | sort -u`, subtract already-decompiled.
3. **Decompile the ring** in ONE Ghidra run (Ghidra is single-lock — never run two in parallel):
   `OOT3D_REPO=$PWD DECOMP_TARGETS=scratch/sweep/<ring>_targets.txt /opt/ghidra_11.0.3_PUBLIC/support/analyzeHeadless build/ghidra oot3d -process code.bin -noanalysis -scriptPath tools/ghidra_scripts -postScript DecompDump.py`
4. **Align in parallel** (read-only, no Ghidra): partition the ring into batches; one agent per batch
   produces a compact `addr | N64 twin | FAITHFUL/DIVERGENT/UNMATCHED | note` table
   (`scratch/sweep/SWEEP_CONTRACT.md` is the agent contract). Deep notes only for DIVERGENT funcs.
5. **Fold** confirmed twins/offsets into `docs/player_port.md`'s anchor tables; record DIVERGENT funcs
   below. Then GOTO 2 with the newly-decompiled funcs as the next seed (the ring grows the frontier).

This loop is the unit of "gaining ownership." It is multi-agent-orchestration-shaped; it can be run by
hand in waves (current) or automated end-to-end with a Workflow over the whole binary.

## Ring-1 sweep (2026-06-22) — 220 funcs, the player-helper call-graph frontier
Partitioned into 5 batches (scratch/sweep/batch0[0-4]); per-batch divergence maps in
`scratch/sweep/divmap_batch0[0-4].md`. Consolidated results: _(populated as batches report below)_.

### DIVERGENT functions found (the port payload)
_(to be filled from the batch divmaps)_

### New confirmed anchors (fold into player_port.md)
_(to be filled)_
