// OoT3D decomp @ 002d064c  name=FUN_002d064c  size=84

undefined2 FUN_002d064c(int *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
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
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined2 *)(*(int *)(iVar2 + 0x24) + param_2 * 8);
  }
  return uVar1;
}
