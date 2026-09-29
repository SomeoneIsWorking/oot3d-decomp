// OoT3D decomp @ 0035fe90  name=FUN_0035fe90  size=88

ushort FUN_0035fe90(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;

  if (param_3 == 0x32) {
    iVar2 = *param_1;
  }
  else if ((param_3 < 0x33) && ((*(ushort *)((int)param_1 + param_3 * 2 + 0x156c) & 1) != 0)) {
    iVar2 = param_1[param_3 * 0x1b + 0x16];
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 2) >> 0xf;
  }
  return uVar1;
}
