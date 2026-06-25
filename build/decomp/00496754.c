// OoT3D decomp @ 00496754  name=FUN_00496754  size=88

uint FUN_00496754(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_3 == 0x32) {
    iVar1 = *param_1;
  }
  else if ((param_3 < 0x33) && ((*(ushort *)((int)param_1 + param_3 * 2 + 0x156c) & 1) != 0)) {
    iVar1 = param_1[param_3 * 0x1b + 0x16];
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(ushort *)(param_2 + 4) & 0x2000) >> 0xd;
  }
  return uVar2;
}

