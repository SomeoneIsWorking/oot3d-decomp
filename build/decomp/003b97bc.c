// OoT3D decomp @ 003b97bc  name=FUN_003b97bc  size=72

void FUN_003b97bc(int param_1)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  int iVar1;

  FUN_00370734(param_1 + 0x1a4);
  iVar1 = FUN_0036e168(*(undefined4 *)(param_1 + 0xc),uRam003b980c,uRam003b9808,uRam003b9804,
                       param_1 + 0x2c);
  if (iVar1 < iRam003b9810) {
    FUN_0036e734(param_1 + 0x1a4,0,extraout_r2,extraout_r3,unaff_r4,unaff_lr);
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
    *(undefined4 *)(param_1 + 0x6a0) = DAT_0018089c;
    return;
  }
  return;
}
