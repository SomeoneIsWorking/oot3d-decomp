// OoT3D decomp @ 00460e78  name=FUN_00460e78  size=56

int FUN_00460e78(int param_1)

{
  undefined4 uVar1;

  FUN_00343280(param_1,0x1e0);
  *(undefined4 *)(param_1 + 4) = DAT_00460eb0;
  uVar1 = DAT_00460eb4;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return param_1;
}
