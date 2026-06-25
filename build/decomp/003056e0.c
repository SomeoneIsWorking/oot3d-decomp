// OoT3D decomp @ 003056e0  name=FUN_003056e0  size=96

void FUN_003056e0(int param_1,int param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x934) != param_2) {
    FUN_002f8d74(*(undefined4 *)(param_1 + 0x930),0,param_2);
    *(int *)(param_1 + 0x934) = param_2;
  }
  uVar1 = DAT_00305748;
  pfVar2 = (float *)(DAT_00305740 + *(int *)(param_1 + 0x120) * 8);
  fVar4 = pfVar2[1];
  iVar3 = *(int *)(param_1 + 0x920);
  *(float *)(iVar3 + 0x80) = *pfVar2 + DAT_00305744;
  *(float *)(iVar3 + 0x84) = fVar4;
  *(undefined4 *)(iVar3 + 0x88) = uVar1;
  return;
}

