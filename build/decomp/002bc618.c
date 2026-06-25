// OoT3D decomp @ 002bc618  name=FUN_002bc618  size=228

void FUN_002bc618(int param_1,undefined4 *param_2,short *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = (int)(short)(*(short *)(param_1 + 0x2220) - *param_3);
  if (*(char *)(param_1 + 0x2227) != '\0') goto LAB_002bc6a0;
  fVar5 = *(float *)(param_1 + 0x221c);
  iVar2 = (int)*(short *)(*DAT_002bc6fc + 0x6e);
  fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar6 * DAT_002bc700 <= fVar5) << 0x1d;
  fVar6 = DAT_002bc700;
  if (SUB41(uVar4 >> 0x1d,0)) {
    fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(uVar4 >> 0x15) & 3);
    fVar7 = fVar7 * DAT_002bc704;
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 < fVar7) << 0x1f | (uint)(fVar5 == fVar7) << 0x1e;
    bVar1 = (byte)(uVar4 >> 0x18);
    fVar6 = DAT_002bc704;
    if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar5) || NAN(fVar7)))
    goto LAB_002bc690;
  }
  else {
LAB_002bc690:
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(uVar4 >> 0x15) & 3);
    fVar5 = fVar5 * fVar6;
  }
  *(float *)(param_1 + 0x221c) = fVar5;
LAB_002bc6a0:
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x6001) {
    FUN_002dd714(*param_2,DAT_002bc714,DAT_002bc710,param_1 + 0x221c);
    FUN_00370378(param_1 + 0x2220,(int)*param_3,200);
    return;
  }
  iVar3 = FUN_003705a0(DAT_002bc70c,DAT_002bc708);
  if (iVar3 != 0) {
    *(short *)(param_1 + 0x2220) = *param_3;
  }
  return;
}

