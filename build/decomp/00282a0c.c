// OoT3D decomp @ 00282a0c  name=FUN_00282a0c  size=284

void FUN_00282a0c(int param_1)

{
  uint in_fpscr;
  float local_18;
  float local_14;
  float local_10;
  float local_c;

  FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),7);
  FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
  FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  if ((*(uint *)(param_1 + 4) & 0x80) != 0) {
    local_18 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x8f4),(byte)(in_fpscr >> 0x15) & 3);
    local_18 = local_18 * DAT_00282b6c;
    local_14 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x8f5),(byte)(in_fpscr >> 0x15) & 3);
    local_14 = local_14 * DAT_00282b6c;
    local_10 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x8f6),(byte)(in_fpscr >> 0x15) & 3);
    local_10 = local_10 * DAT_00282b6c;
    local_c = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x8f7),(byte)(in_fpscr >> 0x15) & 3);
    local_c = local_c * DAT_00282b6c;
    FUN_00357a50(param_1 + 0x1a4,5,3,&local_18,1);
    FUN_00357388(param_1,&local_18,4,2);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_00282b74,DAT_00282b70,param_1,0);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
