// OoT3D decomp @ 002c5314  name=FUN_002c5314  size=868

/* WARNING: Removing unreachable block (ram,0x002c558c) */
/* WARNING: Removing unreachable block (ram,0x002c55a8) */

uint * FUN_002c5314(undefined4 param_1,float param_2,uint *param_3,undefined4 *param_4,int param_5,
                   int param_6,int param_7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;

  fVar13 = DAT_002c5678;
  uVar11 = in_fpscr & 0xfffffff | (uint)(param_2 == DAT_002c5678) << 0x1e |
           (uint)(DAT_002c5678 <= param_2) << 0x1d;
  bVar1 = (byte)(uVar11 >> 0x18);
  puVar5 = param_3;
  if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
    puVar5 = (uint *)*DAT_002c567c;
    if ((*DAT_002c567c & 1) == 0) {
      iVar4 = FUN_003679b4(DAT_002c567c);
      puVar5 = (uint *)0x0;
      if (iVar4 != 0) {
        FUN_0036788c(DAT_002c5680);
        puVar5 = DAT_002c567c;
      }
    }
    fVar12 = DAT_002c5694;
    uVar3 = DAT_002c5690;
    uVar2 = DAT_002c568c;
    if (param_7 == 0xc) {
      local_3c = DAT_002c5690;
      local_38 = DAT_002c5690;
      uVar6 = param_3[param_5 + 0x2c];
      puVar5 = (uint *)0x0;
      if (uVar6 != 0) {
        uVar9 = param_4[1];
        uVar10 = param_4[2];
        *(undefined4 *)(uVar6 + 0x3c) = *param_4;
        *(undefined4 *)(uVar6 + 0x40) = uVar9;
        *(undefined4 *)(uVar6 + 0x44) = uVar10;
        uVar6 = param_3[param_5 + 0x2c];
        *(undefined4 *)(uVar6 + 0x48) = param_1;
        *(undefined4 *)(uVar6 + 0x4c) = param_1;
        *(undefined4 *)(uVar6 + 0x50) = uVar3;
        uVar11 = uVar11 & 0xfffffff | (uint)(fVar13 <= (float)param_3[0x3c] * fVar12) << 0x1d;
        for (fVar12 = ABS((float)param_3[0x3c] * fVar12); DAT_002c5698 <= (int)fVar12;
            fVar12 = fVar12 - DAT_002c569c) {
        }
        uVar6 = VectorFloatToUnsigned(fVar13,3);
        uVar14 = VectorFloatToUnsigned(fVar13,3);
        uVar15 = VectorFloatToUnsigned(fVar12,3);
        fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(uVar11 >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(uVar11 >> 0x15) & 3);
        pfVar7 = (float *)(DAT_002c56a0 + (uVar6 & 0xff) * 0x10);
        fVar19 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar11 >> 0x15) & 3);
        pfVar8 = (float *)(DAT_002c56a0 + (uVar14 & 0xff) * 0x10);
        fVar20 = *pfVar7 + (fVar13 - fVar16) * pfVar7[2];
        fVar17 = pfVar7[1] + (fVar13 - fVar16) * pfVar7[3];
        pfVar7 = (float *)(DAT_002c56a0 + (uVar15 & 0xff) * 0x10);
        fVar16 = pfVar8[1] + (fVar13 - fVar18) * pfVar8[3];
        fVar13 = *pfVar8 + (fVar13 - fVar18) * pfVar8[2];
        fVar18 = *pfVar7 + (fVar12 - fVar19) * pfVar7[2];
        fVar12 = pfVar7[1] + (fVar12 - fVar19) * pfVar7[3];
        if (!SUB41(uVar11 >> 0x1d,0)) {
          fVar18 = -fVar18;
        }
        uVar11 = param_3[param_5 + 0x2c];
        *(float *)(uVar11 + 0x54) = fVar12 * fVar16;
        *(float *)(uVar11 + 0x58) = fVar20 * fVar12 * fVar13 - fVar17 * fVar18;
        *(float *)(uVar11 + 0x5c) = fVar20 * fVar18 + fVar17 * fVar12 * fVar13;
        *(undefined4 *)(uVar11 + 0x60) = 0;
        *(float *)(uVar11 + 100) = fVar18 * fVar16;
        *(float *)(uVar11 + 0x68) = fVar17 * fVar12 + fVar20 * fVar18 * fVar13;
        *(float *)(uVar11 + 0x6c) = fVar17 * fVar18 * fVar13 - fVar20 * fVar12;
        *(undefined4 *)(uVar11 + 0x70) = 0;
        *(float *)(uVar11 + 0x74) = -fVar13;
        *(float *)(uVar11 + 0x78) = fVar20 * fVar16;
        *(float *)(uVar11 + 0x7c) = fVar17 * fVar16;
        *(undefined4 *)(uVar11 + 0x80) = 0;
        uVar11 = param_3[param_5 + 0x2c];
        *(undefined4 *)(uVar11 + 0xf0) = uVar3;
        *(undefined4 *)(uVar11 + 0xf4) = uVar3;
        *(undefined4 *)(uVar11 + 0xf8) = uVar3;
        *(float *)(uVar11 + 0xfc) = param_2;
        *(uint *)(param_3[param_5 + 0x2c] + 0x178) =
             *(uint *)(param_3[param_5 + 0x2c] + 0x178) | 0x10;
        local_34 = param_2;
        puVar5 = (uint *)FUN_002c517c(uVar2,param_3[param_5 + 0x2c],param_6 + 0x14);
        return puVar5;
      }
    }
    else {
      uVar11 = param_3[param_5 + 0x28];
      if (uVar11 != 0) {
        local_34 = (float)DAT_002c5690;
        local_3c = param_1;
        local_38 = param_1;
        puVar5 = (uint *)FUN_00371f1c(uVar11,param_4,0,&local_3c,0,0);
        if (param_7 == 0xb) {
          *(undefined4 *)(uVar11 + 0xf0) = uVar3;
          *(undefined4 *)(uVar11 + 0xf4) = uVar3;
          *(undefined4 *)(uVar11 + 0xf8) = uVar3;
          *(float *)(uVar11 + 0xfc) = param_2;
          *(uint *)(uVar11 + 0x178) = *(uint *)(uVar11 + 0x178) | 0x10;
          puVar5 = (uint *)FUN_002c517c(uVar2,uVar11,param_6 + 0x12);
        }
      }
    }
  }
  return puVar5;
}
