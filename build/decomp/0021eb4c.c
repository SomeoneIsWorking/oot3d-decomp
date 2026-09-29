// OoT3D decomp @ 0021eb4c  name=FUN_0021eb4c  size=92

void FUN_0021eb4c(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;

  if (*param_2 != '\x02') {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  if (*(int *)(DAT_0021eba8 + 4) != 0) {
    FUN_0037266c();
    FUN_0036932c(uVar1,1);
    return;
  }
  FUN_0036932c(uVar1,2);
  FUN_0037266c(uVar1,1);
  return;
}
