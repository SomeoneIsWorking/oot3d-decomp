// OoT3D decomp @ 003da010  name=FUN_003da010  size=148

void FUN_003da010(int param_1)

{
  if (*(short *)(param_1 + 0x66a) != 0) {
    *(short *)(param_1 + 0x66a) = *(short *)(param_1 + 0x66a) + -1;
  }
  if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
    *(undefined4 *)(param_1 + 0x70) = DAT_003da0a4;
  }
  if (((*(ushort *)(param_1 + 0x90) & 1) == 0) && (*(int *)(param_1 + 0x84) != -0x39060000)) {
    *(undefined2 *)(param_1 + 0x11a) = 0xf;
  }
  else {
    *(undefined2 *)(param_1 + 0x11a) = 0;
    *(undefined2 *)(param_1 + 0x66a) = 0x1b;
    *(undefined4 *)(param_1 + 0x6c) = DAT_003da0a8;
    FUN_0036e734(param_1 + 0x1a4,3);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x664) = DAT_003da0ac;
  }
  return;
}
