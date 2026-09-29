// OoT3D decomp @ 003400ac  name=FUN_003400ac  size=352

void FUN_003400ac(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;

  pfVar1 = DAT_0034020c;
  pfVar2 = DAT_0034020c + 3;
  *DAT_0034020c = *DAT_0034020c + DAT_0034020c[6];
  pfVar1[1] = pfVar1[1] + pfVar1[7];
  pfVar1[2] = pfVar1[2] + pfVar1[8];
  *pfVar2 = *pfVar2 + pfVar1[9];
  pfVar1[4] = pfVar1[4] + pfVar1[10];
  pfVar1[5] = pfVar1[5] + pfVar1[0xb];
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  local_28 = pfVar1[2] * fVar3 + *pfVar1 * fVar4 + *(float *)(param_1 + 0x28);
  local_24 = (*(float *)(param_1 + 0xc) - DAT_00340210) + pfVar1[1];
  local_20 = (*(float *)(param_1 + 0x30) + pfVar1[2] * fVar4) - *pfVar1 * fVar3;
  local_34 = pfVar1[5] * fVar3 + *pfVar2 * fVar4 + *(float *)(param_1 + 0x28);
  local_30 = (*(float *)(param_1 + 0xc) - DAT_00340210) + pfVar1[4];
  local_2c = (*(float *)(param_1 + 0x30) + pfVar1[5] * fVar4) - *pfVar2 * fVar3;
  FUN_00367b14(param_2,(int)*(short *)(DAT_00340214 + 4),&local_28,&local_34);
  return;
}
