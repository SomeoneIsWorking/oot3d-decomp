// OoT3D decomp @ 00120844  name=FUN_00120844  size=128

void FUN_00120844(int param_1)

{
  short sVar1;

  FUN_003731e0(param_1 + 0x1a4);
  if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
    if ((*(short *)(param_1 + 0x66a) == 0) ||
       (sVar1 = *(short *)(param_1 + 0x66a) + -1, *(short *)(param_1 + 0x66a) = sVar1, sVar1 == 0))
    {
      *(undefined2 *)(param_1 + 0x66a) = 0x1b;
      *(undefined4 *)(param_1 + 0x6c) = DAT_001208c4;
      FUN_0036e734(param_1 + 0x1a4,3);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x664) = DAT_001208c8;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x11a) = 0x1e;
  }
  return;
}
