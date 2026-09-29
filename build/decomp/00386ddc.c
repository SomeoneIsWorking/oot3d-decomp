// OoT3D decomp @ 00386ddc  name=FUN_00386ddc  size=304

void FUN_00386ddc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00386f0c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar1 = DAT_00386f20;
  if (((int)(DAT_00386f10 / fVar3 + DAT_00386f14) == (uint)*(ushort *)(param_2 + 0x22b8)) ||
     (fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00386f0c + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3), uVar1 = DAT_00386f28,
     (int)(DAT_00386f24 / fVar3 + DAT_00386f14) == (uint)*(ushort *)(param_2 + 0x22b8))) {
    FUN_0037547c(uVar1,param_1 + 0x28,4,DAT_00386f1c,DAT_00386f1c,DAT_00386f18);
  }
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00330370(param_1);
  iVar2 = FUN_00326528(param_1,param_2);
  uVar1 = DAT_00386f2c;
  if (iVar2 != 0) {
    return;
  }
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_00386f34,DAT_00386f30,DAT_00386f30,param_2,param_1,4);
  return;
}
