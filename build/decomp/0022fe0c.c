// OoT3D decomp @ 0022fe0c  name=FUN_0022fe0c  size=220

void FUN_0022fe0c(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10;

  if (*(int *)(param_1 + 0x228) != DAT_0022fee8) {
    FUN_0033dd8c(DAT_0022fef8,DAT_0022fef4,DAT_0022fef0,DAT_0022feec,param_1 + 0x1a4,0,0);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0022fefc,0,param_1,0);
    return;
  }
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_10 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0xd0),(byte)(in_fpscr >> 0x15) & 3);
  local_10 = local_10 * DAT_0022ff00;
  uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
  FUN_003589cc(uVar1,5);
  FUN_00358964(uVar1,5,&local_1c);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0022fefc,0,param_1,0);
  return;
}
