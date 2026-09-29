// OoT3D decomp @ 004c931c  name=FUN_004c931c  size=88

uint FUN_004c931c(int *param_1,int param_2,uint param_3)

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
    uVar2 = (*(ushort *)(param_2 + 2) & 0x4000) >> 0xe;
  }
  return uVar2;
}
