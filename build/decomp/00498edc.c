// OoT3D decomp @ 00498edc  name=FUN_00498edc  size=40

int FUN_00498edc(short *param_1)

{
  int iVar1;

  if ((*param_1 == 0) || (*param_1 != 0x220c)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  return iVar1;
}
