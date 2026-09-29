// OoT3D decomp @ 002401d0  name=FUN_002401d0  size=128

void FUN_002401d0(int param_1,int param_2)

{
  undefined1 *puVar1;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  puVar1 = DAT_00240250;
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined2 *)(DAT_00240250 + 2) = 0x100;
    *puVar1 = 1;
  }
  FUN_00350f34(param_1,param_1 + 0x1d0,param_1 + 0x1d4,param_1 + 0x1d8,param_1 + 0x1dc,
               param_1 + 0x1e0,0);
  FUN_0035046c(param_1 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  return;
}
