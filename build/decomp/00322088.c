// OoT3D decomp @ 00322088  name=FUN_00322088  size=108

undefined4 FUN_00322088(int *param_1,ushort *param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_3 == 0x32) {
    iVar1 = *param_1;
  }
  else if ((param_3 < 0x33) && ((*(ushort *)((int)param_1 + param_3 * 2 + 0x156c) & 1) != 0)) {
    iVar1 = param_1[param_3 * 0x1b + 0x16];
  }
  else {
    iVar1 = 0;
  }
  bVar2 = iVar1 != 0;
  if (bVar2 && param_2 != (ushort *)0x0) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  if ((bVar2 && param_2 != (ushort *)0x0) && iVar1 != 0) {
    return *(undefined4 *)(iVar1 + (uint)*param_2 * 8 + param_4 * 4);
  }
  return 0;
}

