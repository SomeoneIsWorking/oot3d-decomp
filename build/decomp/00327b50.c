// OoT3D decomp @ 00327b50  name=FUN_00327b50  size=496

void FUN_00327b50(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  iVar2 = *(int *)(param_4 + *(short *)(DAT_00327d40 + param_4) * 4 + 0xa54);
  fVar4 = *(float *)(iVar2 + 0x8c);
  fVar6 = *(float *)(iVar2 + 0x90);
  fVar10 = *(float *)(iVar2 + 0x94);
  uVar3 = FUN_003758b0(*(float *)(param_3 + 0x30) - fVar10,*(float *)(param_3 + 0x28) - fVar4);
  fVar4 = *(float *)(param_3 + 0x28) - fVar4;
  fVar10 = *(float *)(param_3 + 0x30) - fVar10;
  sVar1 = FUN_003758b0(SQRT(fVar4 * fVar4 + fVar10 * fVar10),fVar6 - *(float *)(param_3 + 0x2c));
  iVar2 = (int)-sVar1;
  local_48 = DAT_00327d44;
  local_50 = DAT_00327d44;
  fVar4 = (float)FUN_002cfca0(uVar3);
  local_44 = (float)FUN_00338f60(iVar2);
  local_44 = fVar4 * param_1 * local_44;
  local_40 = (float)FUN_002cfca0(iVar2);
  local_40 = local_40 * param_1;
  fVar4 = (float)FUN_00338f60(uVar3);
  local_3c = (float)FUN_00338f60(iVar2);
  local_3c = fVar4 * param_1 * local_3c;
  local_4c = DAT_00327d48;
  iVar2 = DAT_00327d4c + *(short *)(param_3 + 0x1c) * 8;
  fVar5 = *(float *)(param_3 + 0x28);
  fVar7 = *(float *)(param_3 + 0x2c);
  fVar8 = *(float *)(param_3 + 0x30);
  fVar4 = local_44 * DAT_00327d50;
  fVar6 = local_40 * DAT_00327d50;
  fVar10 = local_3c * DAT_00327d50;
  fVar11 = (float)FUN_00338f60(uVar3);
  pfVar9 = (float *)(DAT_00327d54 + param_5 * 4);
  local_38 = (fVar5 - fVar4) + *pfVar9 * fVar11 * param_2;
  local_34 = (fVar7 - fVar6) + *(float *)(DAT_00327d54 + 0x1c + param_5 * 4) * param_2;
  fVar4 = (float)FUN_002cfca0(uVar3);
  local_30 = (fVar8 - fVar10) - *pfVar9 * fVar4 * param_2;
  FUN_00366150(param_4,&local_38,&local_44,&local_50,iVar2,iVar2 + 4,
               (int)(short)(int)(param_2 * DAT_00327d5c),(int)(short)(int)(param_2 * DAT_00327d58));
  return;
}
