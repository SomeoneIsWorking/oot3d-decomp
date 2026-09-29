// OoT3D decomp @ 002732c4  name=FUN_002732c4  size=152

void FUN_002732c4(int param_1)

{
  uint uVar1;

  if (*(int *)(param_1 + 0xa20) != 0xff) {
    uVar1 = *(int *)(param_1 + 0xa20) + 0x14;
    *(uint *)(param_1 + 0xa20) = uVar1;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    *(uint *)(param_1 + 0xa20) = uVar1;
  }
  if (*(char *)(DAT_0027335c + (*(short *)(param_1 + 0x1c) + -1) * 8) == '\x02') {
    *(undefined4 *)(param_1 + 100) = DAT_00273360;
    *(undefined4 *)(param_1 + 0x6c) = DAT_00273364;
    FUN_003686a8(param_1,0);
    FUN_003729b8(param_1,0x1c);
    return;
  }
  if (*(char *)(param_1 + 0xa1c) == '\0') {
    FUN_003686a8(param_1,9);
    FUN_003729b8(param_1,0x1a);
    return;
  }
  return;
}
