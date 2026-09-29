// OoT3D decomp @ 00338c5c  name=FUN_00338c5c  size=124

undefined4 FUN_00338c5c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;

  uVar2 = param_3;
  if (param_3 == 0x32) {
    iVar1 = *param_1;
  }
  else if ((param_3 < 0x33) && ((*(ushort *)((int)param_1 + param_3 * 2 + 0x156c) & 1) != 0)) {
    uVar2 = param_3 * 0x1b;
    iVar1 = param_1[param_3 * 0x1b + 0x16];
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x24);
  }
  if (iVar1 != 0 && uVar2 != 0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if ((int)(uint)*(ushort *)(iVar1 + 0x12) < param_2) {
      param_2 = *(ushort *)(iVar1 + 0x12) - 1;
    }
    return *(undefined4 *)(uVar2 + param_2 * 8 + 4);
  }
  return 0;
}
