// OoT3D decomp @ 003af690  name=FUN_003af690  size=100

void FUN_003af690(int param_1)

{
  undefined4 uVar1;

  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x800;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -0x800;
  if (*(short *)(param_1 + 0xc28) == 0) {
    FUN_00375bcc(param_1,DAT_003af6f4);
    uVar1 = DAT_003af6f8;
    *(undefined4 *)(param_1 + 0xbb0) = DAT_003af6fc;
    *(undefined4 *)(param_1 + 0xbac) = uVar1;
    *(undefined2 *)(param_1 + 0xc28) = 0x62;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  }
  return;
}
