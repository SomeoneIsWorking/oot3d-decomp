// OoT3D decomp @ 0047fe24  name=FUN_0047fe24  size=136

void FUN_0047fe24(int *param_1,float *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  uVar1 = DAT_0047feb0;
  iVar4 = VectorFloatToUnsigned(param_2[2] * DAT_0047feac,3);
  uVar5 = VectorFloatToUnsigned(param_2[1] * DAT_0047feac,3);
  uVar3 = VectorFloatToUnsigned(*param_2 * DAT_0047feac,3);
  puVar2 = *(uint **)(*param_1 + 8);
  *puVar2 = param_3 << 0x10 | 5;
  puVar2[1] = uVar1;
  puVar2[2] = (uint)(iVar4 << 0x18) >> 8 | (uVar5 & 0xff) << 8 | uVar3 & 0xff;
  puVar2[3] = DAT_0047feb4;
  *(uint **)(*param_1 + 8) = puVar2 + 4;
  return;
}
