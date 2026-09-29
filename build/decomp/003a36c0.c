// OoT3D decomp @ 003a36c0  name=FUN_003a36c0  size=476

void FUN_003a36c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  piVar1 = DAT_003a389c;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003a389c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_003a38a0 / fVar5 + DAT_003a38a4) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    FUN_0037547c(DAT_003a38b0,param_1 + 0x28,4,DAT_003a38ac,DAT_003a38ac,DAT_003a38a8);
    FUN_0037547c(DAT_003a38b4,param_1 + 0x28,4,DAT_003a38ac,DAT_003a38ac,DAT_003a38a8);
  }
  FUN_0033526c(param_1);
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_003a38b8;
  iVar4 = FUN_003736fc(DAT_003a38bc,DAT_003a38b8,param_1 + 0x1a4);
  if ((iVar4 != 0) || (iVar4 = FUN_003736fc(DAT_003a38c0,uVar2,param_1 + 0x1a4), iVar4 != 0)) {
    FUN_0037547c(DAT_003a38c4,param_1 + 0x28,4,DAT_003a38ac,DAT_003a38ac,DAT_003a38a8);
  }
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
  FUN_003fd1b8(uVar2,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_003a38cc,DAT_003a38c8,DAT_003a38c8,param_2,param_1,4);
  if ((*(int *)(param_1 + 0xcf8) == 0) && (iVar3 != 0)) {
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x147e),
                                       (byte)(in_fpscr >> 0x15) & 3);
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),
                     *(float *)(param_1 + 0x2c) + fVar5 + DAT_003a38d0,
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0xf5,0,0,0,0xb,1);
    *(undefined4 *)(param_1 + 0xcf8) = 1;
  }
  FUN_00318010(param_1,param_2);
  return;
}
