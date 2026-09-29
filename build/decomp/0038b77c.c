// OoT3D decomp @ 0038b77c  name=FUN_0038b77c  size=272

void FUN_0038b77c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;

  FUN_003510b0(param_1,DAT_0038b88c);
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1cc,1,0);
  uVar2 = FUN_00353fd4(param_1,param_2,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  piVar1 = DAT_0038b89c;
  iVar3 = *(int *)(DAT_0038b890 + 0x4e8);
  if (iVar3 < 4) {
    if (((*(ushort *)(DAT_0038b894 + 0xf6) & 0x10) == 0) || (*(int *)(DAT_0038b898 + 4) != 0)) {
LAB_0038b838:
      *(undefined4 *)(param_1 + 0x1bc) = 0;
      return;
    }
  }
  else {
    if (iVar3 == 4) {
      *(undefined4 *)(param_1 + 0x1bc) = 1;
      fVar4 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1468),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xc4) = DAT_0038b8a0 - fVar4;
      return;
    }
    if (iVar3 == 6) goto LAB_0038b838;
  }
  FUN_00374428(param_1);
  return;
}
