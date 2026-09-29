// OoT3D decomp @ 002d49d0  name=FUN_002d49d0  size=56

void FUN_002d49d0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;

  *param_1 = DAT_002d4a08;
  param_1[1] = 0;
  param_1[2] = 0;
  piVar2 = (int *)FUN_002d342c(param_1 + 3);
  iVar1 = DAT_002d4a0c;
  piVar2[-3] = DAT_002d4a0c;
  *piVar2 = iVar1 + 0x20;
  piVar2[0x82] = 0;
  piVar2[0x83] = 0;
  return;
}
