// OoT3D decomp @ 00313ebc  name=FUN_00313ebc  size=40

void FUN_00313ebc(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  int iVar6;

  fVar5 = (float)param_1[0x6d];
  uVar4 = *(uint *)(*param_1 + 0x1c);
  iVar2 = FUN_00307dc8((short)param_1[0x6c]);
  uVar1 = DAT_00313f4c;
  iVar6 = VectorFloatToUnsigned(DAT_00313f48 + fVar5 * DAT_00313f44,3);
  puVar3 = *(uint **)(*param_2 + 8);
  *puVar3 = (uint)((uVar4 & 2) != 0) | iVar2 << 4 | iVar6 << 8;
  puVar3[1] = uVar1;
  *(uint **)(*param_2 + 8) = puVar3 + 2;
  return;
}
