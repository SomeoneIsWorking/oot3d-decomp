// OoT3D decomp @ 00313ee4  name=FUN_00313ee4  size=96

void FUN_00313ee4(float param_1,int *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;

  iVar2 = FUN_00307dc8(param_4);
  uVar1 = DAT_00313f4c;
  iVar4 = VectorFloatToUnsigned(DAT_00313f48 + param_1 * DAT_00313f44,3);
  puVar3 = *(uint **)(*param_2 + 8);
  *puVar3 = param_3 | iVar2 << 4 | iVar4 << 8;
  puVar3[1] = uVar1;
  *(uint **)(*param_2 + 8) = puVar3 + 2;
  return;
}
