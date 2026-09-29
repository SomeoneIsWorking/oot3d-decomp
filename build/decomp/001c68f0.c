// OoT3D decomp @ 001c68f0  name=FUN_001c68f0  size=108

void FUN_001c68f0(int param_1)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0x6c) = DAT_001c695c;
  if (*(char *)(param_1 + 0x9e0) == '\0') {
    *(undefined1 *)(param_1 + 0xa84) = 9;
    uVar1 = DAT_001c6960;
    *(byte *)(param_1 + 0xa81) = *(byte *)(param_1 + 0xa81) | 4;
    FUN_00370350(uVar1,param_1 + 0x1a4,3);
  }
  *(undefined2 *)(DAT_001c6964 + param_1) = 8;
  uVar1 = DAT_001c6968;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) | 8;
  *(undefined4 *)(param_1 + 0x9dc) = uVar1;
  return;
}
