// OoT3D decomp @ 0011b228  name=FUN_0011b228  size=136

void FUN_0011b228(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_003731e0(param_1 + 0x1a4);
  if ((*(short *)(param_1 + 0x66a) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x66a) + -1, *(short *)(param_1 + 0x66a) = sVar1, sVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0011b2b0;
    uVar2 = DAT_0011b2b4;
    *(undefined1 *)(param_1 + 0x694) = 1;
    *(undefined2 *)(param_1 + 0x66a) = 0x30;
    uVar3 = DAT_0011b2b8;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) | 1;
    *(byte *)(param_1 + 0x681) = *(byte *)(param_1 + 0x681) | 1;
    *(undefined4 *)(param_1 + 0x664) = uVar3;
  }
  return;
}
