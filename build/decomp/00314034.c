// OoT3D decomp @ 00314034  name=FUN_00314034  size=96

void FUN_00314034(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;

  *(short *)(param_1 + 3) = (short)param_2;
  uVar1 = DAT_00314094;
  uVar2 = 0;
  if (((param_2 != 0x6030) && (uVar2 = (uint)(param_2 == 0x6051), param_2 != 0x6051)) &&
     (param_2 == 0x6048)) {
    uVar2 = 3;
  }
  puVar3 = *(uint **)(*param_1 + 8);
  *puVar3 = uVar2 | 0xe40000;
  puVar3[1] = uVar1;
  *(uint **)(*param_1 + 8) = puVar3 + 2;
  return;
}
