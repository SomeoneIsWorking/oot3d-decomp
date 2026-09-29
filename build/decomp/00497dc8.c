// OoT3D decomp @ 00497dc8  name=FUN_00497dc8  size=88

void FUN_00497dc8(int *param_1)

{
  int iVar1;
  int local_10;

  local_10 = 0;
  iVar1 = FUN_004a07bc(&local_10);
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_00497e20,0,&DAT_00497e20);
    FUN_002fb928(0);
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  *param_1 = local_10;
  return;
}
