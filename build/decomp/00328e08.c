// OoT3D decomp @ 00328e08  name=FUN_00328e08  size=612

undefined4 FUN_00328e08(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  iVar7 = 0;
  psVar5 = (short *)FUN_00346e2c(DAT_00329110,DAT_0032910c);
  if (psVar5 == (short *)0x0) {
    return 0;
  }
  sVar4 = FUN_0036e800(param_2,psVar5);
  uVar1 = DAT_00329118;
  iVar8 = (int)(short)(sVar4 - *(short *)(param_2 + 0xbe));
  bVar10 = (*(ushort *)(param_2 + 0x90) & 8) != 0;
  if (bVar10) {
    iVar7 = (int)(short)(*(short *)(param_2 + 0x82) - *(short *)(param_2 + 0xbe));
  }
  fVar13 = *(float *)(psVar5 + 0x14) - *(float *)(param_2 + 0x28);
  fVar11 = *(float *)(psVar5 + 0x16) - *(float *)(param_2 + 0x2c);
  uVar9 = DAT_00329118 | DAT_00329114 >> 0xf;
  fVar12 = *(float *)(psVar5 + 0x18) - *(float *)(param_2 + 0x30);
  if ((int)SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12) < DAT_00329114) {
    iVar7 = FUN_0035f228(param_1,param_2);
    if ((iVar7 == 0) || (*psVar5 != 0x66)) {
      if (uVar1 < iVar8 + 0x1fffU) {
        if (iVar8 + 0x5fffU <= uVar9) {
LAB_003290f8:
          FUN_0035f090(param_2);
          return 1;
        }
      }
      else if (*(short *)(DAT_0032911c + param_2) == 0) {
        FUN_0035f10c(param_2);
        return 1;
      }
    }
LAB_00329140:
    FUN_0031eb78(param_2);
    return 1;
  }
  iVar6 = FUN_0035f228(param_1,param_2);
  uVar3 = DAT_0032913c;
  uVar2 = DAT_00329134;
  if ((iVar6 != 0) && (*psVar5 == 0x66)) goto LAB_00329140;
  iVar6 = iVar8;
  if (iVar8 < 0) {
    iVar6 = -iVar8;
  }
  if (iVar6 - 0x2000U < 0x4001) {
    if (uVar9 < iVar8 + 0x5fffU) {
      return 1;
    }
    if (bVar10) {
      if (0xc000 < iVar7 + 0x6000U) goto LAB_00329140;
      if (iVar7 + 0x1fffU <= uVar1) goto LAB_003290f8;
    }
    if ((*(uint *)(param_1 + 0x5bf4) & 1) != 0) goto LAB_003290f8;
    goto LAB_00329140;
  }
  if (bVar10) {
    if ((0x2000 < iVar7) && (iVar7 < 0x6000)) goto LAB_0032906c;
    if ((iVar7 < -0x2000) && (-0x6000 < iVar7)) goto LAB_00328fb0;
  }
  if ((*(uint *)(param_1 + 0x5bf4) & 1) != 0) {
LAB_00328fb0:
    FUN_00370350(DAT_00329120,param_2 + 0x1e0,4);
    *(undefined4 *)(param_2 + 0x6c) = uVar2;
    *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe) + 0x3fff;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
LAB_0032906c:
  FUN_00370350(DAT_00329120,param_2 + 0x1e0,4);
  *(undefined4 *)(param_2 + 0x6c) = uVar3;
  *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe) + 0x3fff;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
