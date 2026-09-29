// OoT3D decomp @ 003da128  name=FUN_003da128  size=84

void FUN_003da128(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (((*(ushort *)(param_1 + 0x90) & 1) == 0) && (*(int *)(param_1 + 0x84) != -0x39060000)) {
    *(short *)(param_1 + 0x11a) = (short)DAT_003da17c;
  }
  else {
    *(undefined2 *)(param_1 + 0x11a) = 0;
    uVar1 = DAT_003da184;
    *(undefined2 *)(DAT_003da180 + param_1) = 0x17;
    uVar2 = DAT_003da188;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x24c) = uVar2;
  }
  return;
}
