// OoT3D decomp @ 0020f5c8  name=FUN_0020f5c8  size=296

void FUN_0020f5c8(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10;
  
  if (*(int *)(param_1 + 0x7dc) == DAT_0020f6f0) {
    local_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0xd0),(byte)(in_fpscr >> 0x15) & 3);
    local_10 = local_10 * DAT_0020f6fc;
    uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
    FUN_003589cc(uVar1,5);
    FUN_00358964(uVar1,5,&local_1c);
  }
  else {
    uVar1 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1cc));
    FUN_00357a28(uVar1,5,&local_1c);
    local_10 = DAT_0020f6f4;
    FUN_00358964(uVar1,5,&local_1c);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    if (*(int *)(param_1 + 0x810) == 0x19) {
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
      FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
    }
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0020f6f8,0,param_1,0);
  return;
}

