// OoT3D decomp @ 002331d4  name=FUN_002331d4  size=708

/* WARNING: Removing unreachable block (ram,0x002333fc) */

undefined4 FUN_002331d4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;

  if (param_2 == 10) {
    FUN_0034e01c(param_3,param_4 + 0xbc8);
  }
  else if (param_2 == 9) {
    FUN_0034e01c(param_3,param_4 + 0xbce);
  }
  if (*(int *)(param_4 + 0x1d4) == 10) {
    if (*(int *)(param_4 + 0x1e0) < DAT_00233498) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_4 + 0x1d4) != 7) {
      return 0;
    }
    if (*(int *)(param_4 + 0x1e0) < DAT_0023349c) {
      return 0;
    }
  }
  if ((param_2 == 9 || param_2 == 0xc) || param_2 == 0x10) {
    param_4 = param_4 + param_2 * 2;
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_4 + 0xc5e));
    fVar5 = DAT_002334a4;
    fVar6 = DAT_002334a0;
    fVar14 = fVar4 * DAT_002334a0 * DAT_002334a4;
    fVar4 = (float)FUN_00338f60((int)*(short *)(param_4 + 0xc5e));
    fVar14 = fVar14 * DAT_002334ac;
    fVar5 = fVar4 * fVar6 * fVar5 * DAT_002334ac;
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_002334a8 <= fVar5) << 0x1d;
    fVar5 = ABS(fVar5);
    for (fVar6 = ABS(fVar14); fVar4 = DAT_002334a8, DAT_002334b0 <= (int)fVar6;
        fVar6 = fVar6 - DAT_002334b4) {
    }
    for (; DAT_002334b0 <= (int)fVar4; fVar4 = fVar4 - DAT_002334b4) {
    }
    for (; DAT_002334b0 <= (int)fVar5; fVar5 = fVar5 - DAT_002334b4) {
    }
    uVar8 = VectorFloatToUnsigned(fVar6,3);
    uVar9 = VectorFloatToUnsigned(fVar4,3);
    uVar10 = VectorFloatToUnsigned(fVar5,3);
    fVar12 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    pfVar2 = (float *)(DAT_002334b8 + (uVar8 & 0xff) * 0x10);
    fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    fVar11 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    pfVar3 = (float *)(DAT_002334b8 + (uVar9 & 0xff) * 0x10);
    fVar7 = pfVar2[1] + (fVar6 - fVar12) * pfVar2[3];
    fVar6 = *pfVar2 + (fVar6 - fVar12) * pfVar2[2];
    pfVar2 = (float *)(DAT_002334b8 + (uVar10 & 0xff) * 0x10);
    local_34 = *pfVar3 + (fVar4 - fVar11) * pfVar3[2];
    local_44 = pfVar3[1] + (fVar4 - fVar11) * pfVar3[3];
    fVar4 = *pfVar2 + (fVar5 - fVar13) * pfVar2[2];
    if (fVar14 < DAT_002334a8) {
      fVar6 = -fVar6;
    }
    fVar5 = pfVar2[1] + (fVar5 - fVar13) * pfVar2[3];
    local_2c = fVar7 * local_44;
    local_30 = fVar6 * local_44;
    if (!SUB41(uVar1 >> 0x1d,0)) {
      fVar4 = -fVar4;
    }
    local_54 = fVar5 * local_44;
    local_44 = fVar4 * local_44;
    local_50 = fVar6 * fVar5 * local_34 - fVar7 * fVar4;
    local_3c = fVar7 * fVar4 * local_34 - fVar6 * fVar5;
    local_4c = fVar6 * fVar4 + fVar7 * fVar5 * local_34;
    local_40 = fVar7 * fVar5 + fVar6 * fVar4 * local_34;
    local_34 = -local_34;
    local_48 = 0;
    local_38 = 0;
    local_28 = 0;
    FUN_0036c174(param_3,param_3,&local_54);
  }
  return 0;
}
