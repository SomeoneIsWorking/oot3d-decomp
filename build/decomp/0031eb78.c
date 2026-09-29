// OoT3D decomp @ 0031eb78  name=FUN_0031eb78  size=92

void FUN_0031eb78(int param_1)

{
  undefined4 uVar1;

  FUN_00373d40(param_1 + 0x1e0,0xb);
  *(undefined4 *)(param_1 + 100) = DAT_0031ebd4;
  uVar1 = DAT_0031ebd8;
  *(undefined4 *)(param_1 + 0x1c6c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined1 *)(param_1 + 0x1c4c) = 4;
  *(undefined1 *)(param_1 + 0x1dca) = 0;
  FUN_00375bcc(param_1,DAT_0031ebdc);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0x1c50) = DAT_0031ebe0;
  return;
}
