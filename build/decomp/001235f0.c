// OoT3D decomp @ 001235f0  name=FUN_001235f0  size=188

void FUN_001235f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_00123654;
  if (*(short *)(param_1 + 0x66a) != 0) {
    *(short *)(param_1 + 0x66a) = *(short *)(param_1 + 0x66a) + -1;
  }
  FUN_00370378(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),uVar1);
  FUN_0036f21c(param_1);
  iVar2 = DAT_0036f210;
  if (*(short *)(param_1 + 0x66a) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x6c) = DAT_0036f20c;
  uVar1 = DAT_0036f214;
  *(undefined1 *)(param_1 + 0x694) = 1;
  *(undefined2 *)(iVar2 + param_1) = 0x30;
  uVar3 = DAT_0036f218;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) | 1;
  *(byte *)(param_1 + 0x681) = *(byte *)(param_1 + 0x681) | 1;
  *(undefined4 *)(param_1 + 0x664) = uVar3;
  return;
}
