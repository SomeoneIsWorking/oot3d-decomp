// OoT3D decomp @ 00189fd4  name=FUN_00189fd4  size=948

void FUN_00189fd4(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;

  fVar8 = DAT_0018a390;
  FUN_00372d4c(DAT_0018a390,DAT_0018a388,param_1 + 0xbc,DAT_0018a38c);
  fVar4 = DAT_0018a3a8;
  piVar3 = DAT_0018a3a4;
  fVar2 = DAT_0018a3a0;
  fVar15 = DAT_0018a39c;
  uVar14 = DAT_0018a398;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018a394 + iVar6) != 0)
     ) {
    iVar6 = iVar6 + 0x3a5c;
  }
  else {
    iVar6 = 0;
  }
  iVar6 = iVar6 + 0x10;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      uVar7 = ObjectBankArchive_00358ef8(iVar6,1);
      FUN_00353e78(iVar6,param_2,param_1 + 0x314,uVar7,*(undefined4 *)(param_1 + 0x178),0xffffffff,
                   param_1 + 0x398,param_1 + 0x5a0,10);
      FUN_003490e0(param_1 + 0x314,DAT_0018a3c8);
      fVar16 = DAT_0018a3d8;
      *(undefined4 *)(param_1 + 0x13c) = DAT_0018a3cc;
      fVar5 = DAT_0018a3dc;
      *(undefined4 *)(param_1 + 0x140) = DAT_0018a3d0;
      *(undefined4 *)(param_1 + 0x7b8) = DAT_0018a3d4;
      iVar6 = (int)*(short *)(param_1 + 0xbe);
      fVar10 = (float)FUN_00338f60(iVar6);
      fVar11 = (float)FUN_002cfca0(iVar6);
      fVar12 = (float)FUN_00338f60(iVar6);
      fVar13 = (float)FUN_002cfca0(iVar6);
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar10 * fVar8 + fVar11 * fVar5;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar16;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + (fVar12 * fVar5 - fVar13 * fVar8);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      uVar14 = FUN_00371e50(uVar14);
      uVar9 = VectorFloatToUnsigned(uVar14,3);
      fVar8 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x7b0) = (short)(int)(((fVar8 + fVar15) * fVar2) / fVar16 + fVar4);
      *(undefined1 *)(*(int *)(param_1 + 0x33c) + 0xad) = 0;
      goto LAB_0018a34c;
    }
    if (sVar1 != 2) goto LAB_0018a34c;
  }
  uVar7 = ObjectBankArchive_00358ef8(iVar6,0);
  FUN_00353e78(iVar6,param_2,param_1 + 0x314,uVar7,*(undefined4 *)(param_1 + 0x178),0xffffffff,
               param_1 + 0x398,param_1 + 0x5a0,10);
  FUN_003490e0(param_1 + 0x314,DAT_0018a3ac);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0018a3b0);
  FUN_00353dd0(param_2,param_1 + 0x1fc);
  FUN_00353d24(param_2,param_1 + 0x1fc,param_1,DAT_0018a3b0);
  FUN_00350eb8(param_2,param_1 + 0x254);
  FUN_00350d48(param_2,param_1 + 0x254,param_1,DAT_0018a3b4,param_1 + 0x274);
  FUN_00349008(param_1);
  *(undefined4 *)(param_1 + 0x7b8) = DAT_0018a3b8;
  if (*(short *)(param_2 + 0x104) == 0x34) {
    if ((*(int *)(DAT_0018a3bc + 4) != 0) || ((*(ushort *)(DAT_0018a3c0 + 0xee) & 0x4000) == 0)) {
      FUN_00374428(param_1);
      return;
    }
    FUN_0036932c(*(undefined4 *)(param_1 + 0x33c),1);
  }
  FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,DAT_0018a3c4,0,
               (int)*(short *)(param_1 + 0xbe),0,1);
  fVar8 = (float)FUN_00371e50(uVar14);
  uVar9 = VectorFloatToUnsigned(fVar8 + fVar15,3);
  iVar6 = *piVar3;
  fVar8 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x7b0) = (short)(int)((fVar8 * fVar2) / fVar15 + fVar4);
  *(undefined2 *)(param_1 + 0x7b2) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  *(undefined2 *)(iVar6 + 0x5be) = 0;
LAB_0018a34c:
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  if (*(short *)(param_1 + 0x1c) == 2) {
    *(undefined1 *)(param_1 + 0x7b4) = 0x5a;
    *(undefined1 *)(param_1 + 0x7b5) = 0x5a;
  }
  FUN_0037572c(DAT_0018a3e0,param_1);
  *(undefined2 *)(param_1 + 0x7ae) = 0;
  return;
}
