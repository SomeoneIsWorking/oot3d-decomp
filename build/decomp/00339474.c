// OoT3D decomp @ 00339474  name=FUN_00339474  size=392

undefined4
FUN_00339474(float param_1,float param_2,float param_3,float *param_4,float *param_5,int param_6,
            int param_7)

{
  uint uVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;

  fVar2 = DAT_003395fc;
  fVar8 = *param_4;
  fVar9 = param_4[1];
  local_24 = *param_5 - fVar8;
  fVar10 = param_4[2];
  fVar3 = param_5[1] - fVar9;
  fVar5 = param_5[2] - fVar10;
  fVar7 = local_24 * local_24 + fVar3 * fVar3 + fVar5 * fVar5;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_003395fc) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    fVar7 = ((param_1 - fVar8) * local_24 + (param_2 - fVar9) * fVar3 + (param_3 - fVar10) * fVar5)
            / fVar7;
    fVar6 = (float)VectorSignedToFloat(param_7 - param_6,(byte)(uVar1 >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat(param_6,(byte)(uVar1 >> 0x15) & 3);
    fVar4 = fVar4 + fVar6 * fVar7;
    fVar8 = (fVar8 + local_24 * fVar7) - param_1;
    fVar9 = (fVar9 + fVar3 * fVar7) - param_2;
    fVar3 = (fVar10 + fVar5 * fVar7) - param_3;
    if (fVar8 * fVar8 + fVar9 * fVar9 + fVar3 * fVar3 <= fVar4 * fVar4) {
      local_20 = param_5[1] - param_4[1];
      local_1c = param_5[2] - param_4[2];
      local_30 = param_1 - *param_4;
      local_2c = param_2 - param_4[1];
      local_28 = param_3 - param_4[2];
      fVar3 = (float)FUN_00340404(&local_24,&local_30);
      if (fVar2 <= fVar3) {
        local_3c = param_1 - *param_5;
        local_38 = param_2 - param_5[1];
        local_34 = param_3 - param_5[2];
        fVar3 = (float)FUN_00340404(&local_24,&local_3c);
        if (fVar3 <= fVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}
