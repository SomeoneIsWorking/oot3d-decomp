#!/usr/bin/env python3
"""oracle_textbox.py — OoT3D textbox detection + dismiss primitive for the oracle pipeline.

## Background (RE findings, 2026-06-23)

OoT3D replaced N64's embedded `MessageContext` struct (at `play+0x020D8`, `msgMode u8` at
+0xE304) with a fully reworked C++ message engine.  The N64 offsets are GONE — `play+0x020D8`
is all-zero in OoT3D.  The 3DS message state lives in vtable-dispatched C++ objects on the
game heap (boot-variable addresses), accessed via `gPlayState.msgArea@play+0x4C30` and a
dispatch chain from the `MoLive` root object at `0x55a1a8 → 0x08000110`.

Key code anchor: `Play_Main` (0x45238C) calls `0x2e4514` which reads `[play+0x4C30+0x7D7]`
(u8 message count), and calls the per-message update dispatcher in the z_message range
(`0x2e0f90`: reads `[r4+0x11D]` as the message-object state byte).  The C++ objects holding
this state have boot-variable heap addresses.

### Candidates investigated (all unreliable for static polling)
- `play+0x02ddc` byte 0, `play+0x02e08` byte 0: appear to track textbox state but OSCILLATE
  at 30 Hz (frame-even/odd toggle), not useful as a stable "textbox visible" flag.
- `0x0055a158`, `0x0055a21c`: static BSS bytes modified near textbox events, but both
  OSCILLATE at 30 Hz or are gating flags unrelated to textbox-visible state.
- `0x0054ac88`: changed between textbox-up and dismissed windows in multi-snapshot scan, but
  transitions before B-press (auto-advance timer) and reverts — tracks text scroll state, not
  whether the box is on screen.
- `play+0x4c30+0x7D7` (= `play+0x5407`): the Play_Main message count field; always 0 in the
  current oracle save context (File 1 past the intro — no in-game textboxes during batch warp).

### Practical conclusion for the current oracle
The oracle uses a File-1 in-game save that has ALREADY completed the introductory textbox
sequences (Saria's greeting, etc.).  When warping with `link_ctl.warp(entrance)` on this save,
**no textboxes appear** on entry to any of the 18 batch-capture scenes.  The `textboxes` field
in `batch_capture.py` was based on an older observation (initial New Game run) and is vestigial
for repeat oracle sessions.

If the oracle save is ever reset or a fresh New Game is used, Saria's intro textbox WILL appear
on the first entry to Kokiri Forest (entrance 0xEE).  In that case:
- Warp to 0xEE fires Saria's textbox (4 boxes) which PAUSES actor updates.
- The textboxes auto-advance over ~3-4 seconds if no B press; B dismisses immediately.

## Primitive (exported)

`is_textbox_active(rpc, ps=None, samples=4, sample_gap=0.08)`:
    Best-effort RAM poll.  Reads `play+0x02ddc` byte 0 across `samples` reads separated by
    `sample_gap` seconds.  Returns True if the majority of samples are 0 (textbox-active value).
    NOTE: this is a heuristic — the byte oscillates; majority-vote across 4+ reads at 30-Hz
    gaps filters it.  Not 100% reliable but correct in the steady-state (sustained textbox).

`wait_no_textbox(rpc, ps=None, max_wait=15.0, press_interval=0.7, button="b")`:
    Loop pressing `button` until `is_textbox_active` returns False, or timeout.
    Also returns False immediately if no textbox is detected on entry (common case for repeat
    oracle sessions).  Safe to call unconditionally after every warp.

## Usage
```python
from oracle_textbox import wait_no_textbox
from azahar_rpc import Rpc

r = Rpc(); r.select(pid)
wait_no_textbox(r)  # no-op if no textbox; dismisses if one fires
```
"""
import struct, time, sys, os

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", "..", "soh3d", "tools"))
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE  = 0x0050AF34

# Offset from PlayState base: byte that is 0 when a textbox is active, 1 when idle.
# This byte oscillates at 30 Hz so majority-vote across 4+ samples is needed.
# CONFIRMED by BSS diff scan (2026-06-23): 0=textbox, 1=idle in the majority sense.
MSG_IDLE_OFF = 0x02e08  # play+0x02e08 byte 0


def _play_ptr(rpc):
    """Return the current PlayState heap pointer."""
    return rpc.read32(GPLAYSTATE)


def is_textbox_active(rpc, ps=None, samples=6, sample_gap=0.055):
    """Best-effort check: is a textbox currently displayed?

    Reads the MSG_IDLE_OFF heuristic byte across `samples` reads separated by
    `sample_gap` seconds.  Returns True if the majority of samples are 0 (which
    correlates with a textbox being on screen).

    Note: this byte oscillates at ~30 Hz; using majority-vote across 6 reads
    (~0.33 s window) filters the oscillation.  A sustained textbox will show ≥4/6
    zeros; an idle scene will show mostly 1s.
    """
    if ps is None:
        ps = _play_ptr(rpc)
    zeros = 0
    for _ in range(samples):
        v = rpc.read(ps + MSG_IDLE_OFF, 1)
        if v and v[0] == 0:
            zeros += 1
        time.sleep(sample_gap)
    return zeros > samples // 2


def wait_no_textbox(rpc, ps=None, max_wait=15.0, press_interval=0.7, button="b",
                    verbose=True):
    """Press `button` until no textbox is detected, or `max_wait` seconds elapse.

    Returns True if textbox was cleared (or was never present), False if timeout.

    This is safe to call unconditionally after every warp:
    - If no textbox is active (common for repeat oracle sessions), it returns True
      after a single quick poll without pressing any button.
    - If a textbox IS active, it presses `button` periodically and waits until the
      textbox clears.

    `button` is typically "b" (dismiss/skip) or "a" (advance/confirm).
    """
    if ps is None:
        ps = _play_ptr(rpc)

    # Quick check: if not active, return immediately
    if not is_textbox_active(rpc, ps=ps):
        if verbose:
            print("  [textbox] none detected — skipping dismiss")
        return True

    if verbose:
        print(f"  [textbox] active — pressing {button!r} until cleared (timeout {max_wait:.0f}s)")

    end = time.time() + max_wait
    while time.time() < end:
        rpc.tap(button, hold_s=0.15)
        time.sleep(press_interval)
        if not is_textbox_active(rpc, ps=ps):
            if verbose:
                print("  [textbox] cleared")
            time.sleep(0.3)  # brief settle after last dismiss
            return True

    if verbose:
        print(f"  [textbox] TIMEOUT ({max_wait:.0f}s) — proceeding anyway")
    return False


def main():
    """CLI: poll textbox state and optionally auto-dismiss."""
    import argparse
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--poll", action="store_true",
                    help="Poll textbox state at 2 Hz for 10 s then exit")
    ap.add_argument("--dismiss", action="store_true",
                    help="Wait for no textbox, pressing B to dismiss (max 15 s)")
    args = ap.parse_args()

    r = Rpc()
    for pid, tid, _ in r.processes():
        if tid == 0x0004000000033500:
            r.select(pid)
            print(f"Connected OoT3D pid={pid}")
            break
    else:
        sys.exit("OoT3D not found — is Azahar running?")

    ps = _play_ptr(r)
    print(f"PlayState: {ps:#010x}")

    if args.poll:
        print("Polling textbox state at ~2 Hz for 10 s (Ctrl-C to stop):")
        start = time.time()
        while time.time() - start < 10:
            active = is_textbox_active(r, ps=ps, samples=2, sample_gap=0.03)
            t = time.time() - start
            print(f"  t={t:.1f}s  {'ACTIVE' if active else 'idle'}")
            time.sleep(0.2)
        return

    if args.dismiss:
        ok = wait_no_textbox(r, ps=ps)
        print(f"Result: {'cleared' if ok else 'timeout'}")
        return

    # Default: just report current state
    active = is_textbox_active(r, ps=ps)
    print(f"Textbox: {'ACTIVE' if active else 'idle'}")


if __name__ == "__main__":
    main()
