// OoT3D decomp @ 00454a1c  name=FUN_00454a1c  size=72

void FUN_00454a1c(undefined4 *param_1)

{
  int iVar1;

  while( true ) {
    iVar1 = (*(code *)param_1[param_1[0x16] + 2])(*param_1);
    if (iVar1 == 1) {
      return;
    }
    if (iVar1 != 2 && iVar1 != 3) break;
    param_1[0x16] = param_1[0x16] + 1;
    if (iVar1 != 3) {
      return;
    }
  }
  return;
}
