// OoT3D decomp @ 001cd51c  name=FUN_001cd51c  size=184

void FUN_001cd51c(int param_1)

{
  float fVar1;
  int iVar2;

  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + DAT_001cd5d4;
  FUN_00353694(param_1,0x14);
  if (*(char *)(param_1 + 0x903) == -1) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    FUN_0037322c(DAT_001cd5d8,param_1);
    fVar1 = DAT_001cd5e8;
    *(undefined4 *)(param_1 + 0x978) = DAT_001cd5dc;
    *(undefined4 *)(param_1 + 0x97c) = DAT_001cd5e0;
    iVar2 = DAT_001cd5f0;
    *(undefined4 *)(param_1 + 0x980) = DAT_001cd5e4;
    *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(param_1 + 0x988) = *(float *)(param_1 + 0x2c) - fVar1;
    *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x94a) = 9;
    *(short *)(iVar2 + param_1) = (short)DAT_001cd5ec;
    *(undefined2 *)(param_1 + 0x8fa) = 900;
    *(undefined1 *)(param_1 + 0x8f8) = 0x30;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 0x8f4) = DAT_001cd5f4;
  }
  return;
}
