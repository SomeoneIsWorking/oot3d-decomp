// OoT3D decomp @ 00164114  name=FUN_00164114  size=960

void FUN_00164114(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;

  FUN_003510b0(param_1,DAT_00164568);
  FUN_003532e8(param_1,0);
  uVar5 = FUN_00353fd4(param_1,param_2,0);
  uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar5);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x88c,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1bc,0,0,param_1 + 0x240,param_1 + 0x448,10);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0x654,param_1,DAT_0016456c);
  iVar2 = DAT_00164570;
  iVar9 = 0;
  do {
    iVar11 = param_1 + iVar9 * 0x58 + 0x6ac;
    FUN_00353dd0(param_2,iVar11);
    FUN_0034fb3c(param_2,iVar11,param_1,iVar2 + iVar9 * 0x38);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  uVar6 = FUN_0034faa8(param_2,param_2 + 0xa70);
  *(undefined4 *)(param_1 + 0x7b4) = uVar6;
  uVar16 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x10),
                               (byte)(in_fpscr >> 0x15) & 3);
  uVar15 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0xc),
                               (byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  FUN_003591e4(uVar6,uVar15,uVar16,param_1 + 0x7b8,0xff,0xff,0xff,200,0);
  uVar6 = DAT_0016457c;
  FUN_00372d4c(DAT_0016457c,DAT_00164574,param_1 + 0xbc,DAT_00164578);
  FUN_0037572c(DAT_00164580,param_1);
  uVar16 = DAT_00164588;
  uVar15 = DAT_00164584;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0x70) = uVar15;
  *(undefined4 *)(param_1 + 100) = uVar6;
  fVar13 = (float)FUN_00371e50(uVar16);
  fVar17 = DAT_00164590;
  fVar14 = DAT_0016458c;
  if ((short)(int)fVar13 + 100 < 1) {
    fVar13 = (float)FUN_00371e50(uVar16);
    fVar13 = (float)VectorSignedToFloat((short)(int)fVar13 + 100,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = fVar13 * fVar14 * fVar17 - fVar17;
  }
  else {
    fVar13 = (float)FUN_00371e50(uVar16);
    fVar13 = (float)VectorSignedToFloat((short)(int)fVar13 + 100,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = fVar17 + fVar13 * fVar14 * fVar17;
  }
  uVar4 = DAT_001645a4;
  uVar3 = DAT_001645a0;
  uVar16 = DAT_0016459c;
  iVar2 = DAT_00164598;
  uVar15 = DAT_00164594;
  iVar9 = 0;
  *(short *)(param_1 + 0x7d4) = (short)(int)fVar17;
  do {
    fVar14 = (float)FUN_00371e50(uVar15);
    lVar1 = (longlong)DAT_001645a8 * (longlong)(int)fVar14;
    iVar11 = param_1 + iVar9 * 0x2c;
    *(char *)(iVar11 + 0x7dc) =
         (char)(int)fVar14 + ((char)((ulonglong)lVar1 >> 0x20) - (char)(lVar1 >> 0x3f)) * -3;
    pfVar8 = (float *)(iVar2 + iVar9 * 0xc);
    fVar14 = *(float *)(param_1 + 0x28) + *pfVar8;
    *(float *)(iVar11 + 0x7e4) = fVar14;
    *(float *)(iVar11 + 0x7f0) = fVar14;
    fVar14 = *(float *)(param_1 + 0x2c) + pfVar8[1];
    *(float *)(iVar11 + 0x7e8) = fVar14;
    *(float *)(iVar11 + 0x7f4) = fVar14;
    fVar14 = *(float *)(param_1 + 0x30) + pfVar8[2];
    *(float *)(iVar11 + 0x7ec) = fVar14;
    *(float *)(iVar11 + 0x7f8) = fVar14;
    *(undefined1 *)(iVar11 + 0x7dd) = 1;
    *(undefined1 *)(iVar11 + 0x7de) = 0;
    *(undefined1 *)(iVar11 + 0x7df) = 0;
    *(undefined4 *)(iVar11 + 0x800) = uVar6;
    *(undefined4 *)(iVar11 + 0x7fc) = uVar6;
    fVar14 = (float)FUN_00371e50(uVar16,iVar11 + 0x400,pfVar8,(int)lVar1);
    *(short *)(DAT_001645ac + iVar11) = (short)(int)fVar14;
    *(byte *)(iVar11 + 0x7e0) = (byte)(int)fVar14 & 1;
    *(undefined4 *)(iVar11 + 0x804) = uVar3;
    iVar10 = param_1 + iVar9 * 4;
    FUN_00372f38(param_1,param_2,iVar10 + 0x890,1,0);
    uVar12 = *(undefined4 *)(*(int *)(iVar10 + 0x890) + 0xc);
    uVar7 = FUN_00372f0c(uVar5,*(undefined4 *)(DAT_001645b0 + (uint)*(byte *)(iVar11 + 0x7dc) * 4));
    FUN_00372d94(uVar12,uVar7);
    iVar9 = iVar9 + 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar10 + 0x890) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x890) + 0xc) + 0xc) = uVar4;
  } while (iVar9 < 4);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
