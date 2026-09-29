// OoT3D decomp @ 00454a64  name=FUN_00454a64  size=104

void FUN_00454a64(undefined4 *param_1)

{
  int iVar1;

  if ((int)param_1[0x16] < (int)param_1[1]) {
LAB_00454a7c:
    do {
      iVar1 = (*(code *)param_1[param_1[0x16] + 2])(*param_1);
      if ((iVar1 != 1) && (iVar1 == 2 || iVar1 == 3)) {
        param_1[0x16] = param_1[0x16] + 1;
        if (iVar1 == 3) goto LAB_00454a7c;
      }
    } while ((int)param_1[0x16] < (int)param_1[1]);
  }
  return;
}
