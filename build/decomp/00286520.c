// OoT3D decomp @ 00286520  name=FUN_00286520  size=112

void FUN_00286520(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  *(ushort *)(param_1 + 0x1c4) = *(ushort *)(param_1 + 0x1c4) & 0xff00 | 0x100;
  if (0 < *(short *)(param_1 + 0x1c6)) {
    *(short *)(param_1 + 0x1c6) = *(short *)(param_1 + 0x1c6) + -1;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x1b0);
  uVar1 = FUN_002cfca0();
  *(undefined4 *)(param_1 + 0x1c8) = uVar1;
  uVar1 = FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  if (*(code **)(param_1 + 0x1bc) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00286588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1bc))(param_1,param_2);
  return;
}
