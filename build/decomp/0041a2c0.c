// OoT3D decomp @ 0041a2c0  name=FUN_0041a2c0  size=68

void FUN_0041a2c0(int param_1)

{
  undefined4 uVar1;

  if (*(int *)(param_1 + 4) != 0) {
    FUN_00301260();
    FUN_0031b99c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar1 = FUN_00301300(u_rom__misc_throbber_ctxb_0041a304,0,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}
