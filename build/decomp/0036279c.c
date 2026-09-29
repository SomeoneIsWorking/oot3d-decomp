// OoT3D decomp @ 0036279c  name=FUN_0036279c  size=476

void FUN_0036279c(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_2c;
  float local_28;
  float local_24;

  if ((*(uint *)(param_2 + 0x5bf4) & 1) == 0) {
    sVar3 = FUN_00368b68(0x1200,0xc00);
    sVar3 = (*(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * -0xa00) - sVar3;
  }
  else {
    sVar3 = FUN_00368b68(0x1200,0xc00);
    sVar3 = sVar3 + (ushort)*(byte *)(param_1 + 0xa4c) * -0xa00 + *(short *)(param_1 + 0xbe);
  }
  fVar2 = DAT_0036297c;
  iVar1 = DAT_00362978;
  iVar4 = (int)sVar3;
  if (*(int *)(param_1 + 0xa48) == DAT_00362978) {
    fVar5 = (float)FUN_002cfca0(iVar4);
    fVar6 = DAT_00362990;
    local_2c = *(float *)(param_1 + 0x28) - fVar5 * DAT_00362990;
    fVar5 = (float)FUN_00338f60(iVar4);
    local_24 = *(float *)(param_1 + 0x30) - fVar5 * fVar6;
    local_28 = *(float *)(param_1 + 0xc) + fVar2;
    FUN_00362068(param_2,&local_2c,100,500,0);
  }
  else if ((*(int *)(param_1 + 0xa48) == DAT_00362980) || ((*(uint *)(param_2 + 0x5bf4) & 2) != 0))
  {
    fVar5 = (float)FUN_002cfca0(iVar4);
    fVar6 = DAT_00362984;
    local_2c = *(float *)(param_1 + 0x28) - fVar5 * DAT_00362984;
    fVar5 = (float)FUN_00338f60(iVar4);
    local_24 = *(float *)(param_1 + 0x30) - fVar5 * fVar6;
    local_28 = *(float *)(param_1 + 0xc) + fVar2;
    FUN_00362068(param_2,&local_2c,100,500,0);
  }
  else {
    fVar6 = (float)FUN_002cfca0(iVar4);
    fVar2 = DAT_00362988;
    local_2c = *(float *)(param_1 + 0x28) - fVar6 * DAT_00362988;
    fVar6 = (float)FUN_00338f60(iVar4);
    local_24 = *(float *)(param_1 + 0x30) - fVar6 * fVar2;
    local_28 = *(float *)(param_1 + 0xc) + DAT_0036298c;
  }
  FUN_0036e670(param_2,&local_2c,0,0,1,800);
  if (*(int *)(param_1 + 0xa48) != iVar1) {
    FUN_00373264(param_1,DAT_00362994);
  }
  return;
}
