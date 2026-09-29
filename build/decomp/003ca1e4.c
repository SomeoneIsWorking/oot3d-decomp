// OoT3D decomp @ 003ca1e4  name=FUN_003ca1e4  size=308

int FUN_003ca1e4(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  uint in_fpscr;
  int iVar8;
  float fVar9;
  float fVar10;

  FUN_003731e0(param_1 + 0x1a4);
  uVar4 = uRam003ca328;
  uVar3 = uRam003ca324;
  FUN_003705a0(uRam003ca328,uRam003ca324,param_1 + 0x6c);
  uVar5 = uRam003ca32c;
  iVar6 = FUN_003736fc(uRam003ca32c,uVar4,param_1 + 0x1a4);
  sVar1 = 0;
  if (iVar6 != 0) {
    sVar1 = *(short *)(param_1 + 0x9e6);
  }
  if (iVar6 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x9e6) = sVar1 + -1;
  }
  if ((*(int *)(param_1 + 0x98) < iRam003ca330) &&
     ((int)ABS(*(float *)(param_1 + 0x9c) + fRam003ca334) < iRam003ca338)) {
    *(undefined4 *)(param_1 + 0x9dc) = uRam003ca33c;
  }
  else if ((*(short *)(param_1 + 0x9e6) == 0) &&
          (iVar6 = FUN_003705a0(uVar5,uVar3,param_1 + 0x6c), iVar6 != 0)) {
    FUN_00370350(uRam003ca340,param_1 + 0x1a4,0);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(2,3);
  }
  iVar6 = iRam003ca348;
  if (((*(ushort *)(param_1 + 0x90) & 8) == 0) &&
     (iVar8 = FUN_00363e64(param_1,param_1 + 8), iVar8 <= iRam003ca34c)) {
    return iVar8;
  }
  iVar8 = FUN_00367358(param_1,param_1 + 8);
  psVar7 = (short *)(param_1 + 0x36);
  sVar1 = *psVar7;
  if (iVar6 == 0) {
    if (sVar1 == iVar8) {
      return 1;
    }
  }
  else {
    sVar2 = (short)iVar8;
    if (0 < (short)(sVar1 - sVar2)) {
      iVar6 = -iVar6;
    }
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00370408 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (0 < (short)(sVar1 - sVar2)) {
      iVar6 = (int)(short)iVar6;
    }
    fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    sVar1 = sVar1 + (short)(int)(fVar10 * fVar9 * DAT_0037040c);
    *psVar7 = sVar1;
    if (-1 < (int)(short)(sVar1 - sVar2) * (int)(short)iVar6) {
      *psVar7 = sVar2;
      return 1;
    }
  }
  return 0;
}
