// OoT3D decomp @ 003143a8  name=FUN_003143a8  size=208

void FUN_003143a8(int *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_14;
  float local_10;

  FUN_0036c258(*(float *)(*param_1 + 0x14) * DAT_00314478,&local_10,&local_14);
  fVar1 = DAT_0031447c;
  iVar2 = *param_1;
  fVar3 = *(float *)(iVar2 + 4);
  fVar4 = *(float *)(iVar2 + 8);
  fVar5 = *(float *)(iVar2 + 0xc);
  fVar6 = *(float *)(iVar2 + 0x10);
  *param_2 = fVar3 * local_14;
  param_2[1] = -fVar3 * local_10;
  param_2[3] = (((local_10 * fVar1 - local_14 * fVar1) + fVar1) - fVar5) * fVar3;
  param_2[4] = fVar4 * local_10;
  param_2[5] = fVar4 * local_14;
  param_2[7] = (((local_10 * DAT_00314480 - local_14 * fVar1) + fVar1) - fVar6) * fVar4;
  fVar1 = DAT_00314484;
  param_2[0xb] = DAT_00314484;
  param_2[9] = fVar1;
  param_2[8] = fVar1;
  param_2[6] = fVar1;
  param_2[2] = fVar1;
  param_2[10] = DAT_00314488;
  return;
}
