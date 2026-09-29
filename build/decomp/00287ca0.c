// OoT3D decomp @ 00287ca0  name=FUN_00287ca0  size=84

void FUN_00287ca0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;

  uVar1 = DAT_00287cf8;
  puVar2 = (undefined1 *)(DAT_00287cf4 + (*(short *)(param_1 + 0x1c) + -1) * 8);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined1 *)(param_1 + 0xa16) = 1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00287cfc;
  FUN_003686a8(param_1);
  FUN_003729b8(param_1,0);
  return;
}
