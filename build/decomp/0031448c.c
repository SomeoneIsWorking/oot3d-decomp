// OoT3D decomp @ 0031448c  name=FUN_0031448c  size=164

void FUN_0031448c(int *param_1,int param_2,float *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_2c [4];
  uint uStack_1c;
  uint uStack_18;

  local_2c[0] = *DAT_00314530;
  local_2c[1] = DAT_00314530[1];
  local_2c[2] = DAT_00314530[2];
  local_2c[3] = DAT_00314530[3];
  uStack_1c = DAT_00314530[4];
  uStack_18 = DAT_00314530[5];
  puVar1 = *(uint **)(*param_1 + 8);
  uVar3 = VectorFloatToUnsigned(*param_3 * DAT_00314534,3);
  iVar4 = VectorFloatToUnsigned(param_3[1] * DAT_00314534,3);
  iVar5 = VectorFloatToUnsigned(param_3[2] * DAT_00314534,3);
  iVar2 = VectorFloatToUnsigned(param_3[3] * DAT_00314534,3);
  *puVar1 = uVar3 | iVar4 << 8 | iVar5 << 0x10 | iVar2 << 0x18;
  puVar1[1] = local_2c[param_2] | 0x800f0000;
  *(uint **)(*param_1 + 8) = puVar1 + 2;
  return;
}
