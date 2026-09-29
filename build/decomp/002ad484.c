// OoT3D decomp @ 002ad484  name=FUN_002ad484  size=80

void FUN_002ad484(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  if (0 < *(short *)(param_1 + 0x1c0)) {
    *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x1b0);
  uVar1 = FUN_002cfca0();
  *(undefined4 *)(param_1 + 0x1c4) = uVar1;
  uVar1 = FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x002ad4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1bc))(param_1,param_2);
  return;
}
