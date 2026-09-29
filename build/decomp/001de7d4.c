// OoT3D decomp @ 001de7d4  name=FUN_001de7d4  size=172

void FUN_001de7d4(int param_1)

{
  ushort uVar1;
  bool bVar2;
  uint in_fpscr;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float local_c;

  uVar1 = *(ushort *)(DAT_001de880 + 0xe);
  bVar2 = (uVar1 & 0x200) == 0;
  if (!bVar2) {
    uVar1 = (ushort)*(byte *)(param_1 + 0xa44);
  }
  if (bVar2 || uVar1 == 0) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
  }
  else {
    FUN_0037266c();
  }
  local_18 = *DAT_001de884;
  uStack_14 = DAT_001de884[1];
  uStack_10 = DAT_001de884[2];
  local_c = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0xa20),(byte)(in_fpscr >> 0x15) & 3);
  local_c = local_c * DAT_001de888;
  if (DAT_001de88c < local_c) {
    FUN_00357388(param_1,&local_18,4,2);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  }
  return;
}
