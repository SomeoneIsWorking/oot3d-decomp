// OoT3D decomp @ 00339660  name=FUN_00339660  size=504

undefined4 FUN_00339660(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;

  fVar5 = DAT_0033987c;
  uVar4 = DAT_00339878;
  fVar11 = DAT_00339874;
  uVar3 = DAT_00339870;
  fVar2 = DAT_0033986c;
  uVar1 = DAT_0033985c;
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2
                                                     ),(byte)(in_fpscr >> 0x15) & 3);
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar12 - DAT_00339858 <= *(float *)(param_1 + 0x2c)) << 0x1d
  ;
  if ((!SUB41(uVar8 >> 0x1d,0)) && (param_3 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x204) < DAT_00339860) {
    sVar7 = 0x1e;
    fVar12 = DAT_00339864;
  }
  else {
    sVar7 = 0x28;
    fVar12 = DAT_00339868;
  }
  sVar6 = 0;
  if (sVar7 != 0) {
    do {
      fVar9 = (float)FUN_00371e50(uVar1);
      fVar9 = (fVar9 + fVar2) * fVar12;
      uVar10 = FUN_00371e50(uVar3);
      local_60 = (float)FUN_003727f0();
      local_60 = local_60 * fVar9;
      local_58 = (float)FUN_00372674(uVar10);
      local_58 = local_58 * fVar9;
      fVar9 = (float)FUN_00371e50(fVar11);
      local_5c = (fVar9 + fVar11) * fVar12;
      local_54 = *(float *)(param_1 + 0x28) + local_60 * fVar11;
      local_50 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2)
                                     ,(byte)(uVar8 >> 0x15) & 3);
      local_4c = *(float *)(param_1 + 0x30) + local_58 * fVar11;
      fVar9 = (float)FUN_00371e50(uVar4);
      FUN_00346ab4((fVar9 + fVar5) * fVar12,param_1 + 0xec,*(undefined4 *)(param_2 + 0x5c28),
                   &local_54,&local_60);
      sVar6 = sVar6 + 1;
    } while (sVar6 < sVar7);
  }
  local_54 = *(float *)(param_1 + 0x28);
  local_4c = *(float *)(param_1 + 0x30);
  local_50 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2),
                                 (byte)(uVar8 >> 0x15) & 3);
  FUN_00368b98(DAT_00339884,DAT_00339880,param_1 + 0xec,*(undefined4 *)(param_2 + 0x5c28),&local_54,
               0x96,0x5a);
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00339888 + 0x110),
                                      (byte)(uVar8 >> 0x15) & 3);
  *(char *)(param_1 + 0x1a9) = (char)(int)(DAT_0033988c / fVar11 + fVar2);
  return 1;
}
