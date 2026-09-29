// OoT3D decomp @ 00392430  name=FUN_00392430  size=880

void FUN_00392430(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;

  iVar7 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  iVar10 = 0;
  iVar8 = FUN_0037571c(param_2);
  fVar1 = DAT_003927a0;
  if (iVar8 != 0) {
    iVar10 = *(int *)(param_2 + 0x22e8);
  }
  if (iVar10 != 0) {
    fVar11 = DAT_003927a0;
    if ((uint)*(ushort *)(param_2 + 0x22b8) < (uint)*(ushort *)(iVar10 + 4)) {
      iVar8 = (uint)*(ushort *)(iVar10 + 4) - (uint)*(ushort *)(iVar10 + 2);
      if (0 < iVar8) {
        fVar11 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        fVar12 = (float)VectorSignedToFloat((uint)*(ushort *)(param_2 + 0x22b8) -
                                            (uint)*(ushort *)(iVar10 + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar11 = (float)FUN_00338f60((int)(short)(int)((fVar12 / fVar11) * DAT_003927a4));
        fVar11 = DAT_003927ac + fVar11 * DAT_003927a8;
      }
    }
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar10 + 0x18),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar12 = (float)VectorSignedToFloat((int)*(float *)(param_1 + 0xcd4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x28) = fVar12 + (fVar13 - fVar12) * fVar11;
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar10 + 0x1c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar12 = (float)VectorSignedToFloat((int)*(float *)(param_1 + 0xcd8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x2c) = fVar12 + (fVar13 - fVar12) * fVar11;
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar10 + 0x20),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar12 = (float)VectorSignedToFloat((int)*(float *)(param_1 + 0xcdc),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x30) = fVar12 + (fVar13 - fVar12) * fVar11;
  }
  uVar14 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003927b0;
  FUN_00376340(DAT_003927bc,DAT_003927b8,DAT_003927b4,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar14;
  FUN_003264c8(param_1);
  FUN_0031cddc(param_1,param_2);
  uVar2 = DAT_003927c4;
  uVar14 = DAT_003927c0;
  if (iVar7 != 0) {
    uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xf);
    uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(fVar1,uVar2,uVar9,uVar14,param_1 + 0x1a4,DAT_003927c8,0);
  }
  uVar9 = DAT_003927cc;
  iVar8 = param_1 + 0x1a4;
  iVar7 = FUN_0036e5e0(DAT_003927cc,fVar1,iVar8);
  uVar6 = DAT_003927dc;
  uVar5 = DAT_003927d8;
  uVar4 = DAT_003927d4;
  uVar3 = DAT_003927d0;
  if ((((iVar7 != 0) || (iVar7 = FUN_0036e5e0(DAT_003927d0,fVar1,iVar8), iVar7 != 0)) ||
      (iVar7 = FUN_0036e5e0(uVar4,fVar1,iVar8), iVar7 != 0)) ||
     (iVar7 = FUN_0036e5e0(uVar5,fVar1,iVar8), iVar7 != 0)) {
    FUN_0037547c(uVar6,param_1 + 0x28,4,DAT_003927e4,DAT_003927e4,DAT_003927e0);
  }
  iVar7 = FUN_0036e5e0(uVar9,fVar1,iVar8);
  if (((iVar7 != 0) || (iVar7 = FUN_0036e5e0(uVar3,fVar1,iVar8), iVar7 != 0)) ||
     ((iVar7 = FUN_0036e5e0(uVar4,fVar1,iVar8), iVar7 != 0 ||
      (iVar7 = FUN_0036e5e0(uVar5,fVar1,iVar8), iVar7 != 0)))) {
    FUN_0037547c(uVar6,param_1 + 0x28,4,DAT_003927e4,DAT_003927e4,DAT_003927e0);
  }
  iVar8 = 0;
  iVar7 = FUN_0037571c(param_2);
  if (iVar7 != 0) {
    iVar8 = *(int *)(param_2 + 0x22e8);
  }
  if ((iVar8 != 0) &&
     ((int)(*(ushort *)(iVar8 + 4) - 2) <= (int)(uint)*(ushort *)(param_2 + 0x22b8))) {
    uVar9 = FUN_0036ae14(param_1 + 0x1a4,0x10);
    uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(fVar1,uVar2,uVar9,uVar14,param_1 + 0x1a4,DAT_003927e8,2);
    *(undefined4 *)(param_1 + 0xbbc) = 6;
  }
  return;
}
