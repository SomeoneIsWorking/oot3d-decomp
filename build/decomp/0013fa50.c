// OoT3D decomp @ 0013fa50  name=FUN_0013fa50  size=148

void FUN_0013fa50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_0013fae8;
  iVar4 = FUN_003705a0(DAT_0013fae8,DAT_0013fae4,param_1 + 0x6c);
  iVar3 = DAT_0013faf0;
  uVar2 = DAT_0013faec;
  if (iVar4 != 0) {
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x8000;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined1 *)(param_1 + 0x694) = 1;
    *(undefined2 *)(iVar3 + param_1) = 0x30;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) | 1;
    uVar1 = DAT_0013faf4;
    *(byte *)(param_1 + 0x681) = *(byte *)(param_1 + 0x681) | 1;
    *(undefined4 *)(param_1 + 0x664) = uVar1;
  }
  return;
}
