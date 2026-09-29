// OoT3D decomp @ 002ce2ac  name=FUN_002ce2ac  size=16

undefined4 FUN_002ce2ac(int param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 8);
  }
  return uVar1;
}
