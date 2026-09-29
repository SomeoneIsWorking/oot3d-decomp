// OoT3D decomp @ 00160e78  name=FUN_00160e78  size=176

void FUN_00160e78(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar1 = DAT_00160f2c;
  if (*(int *)(param_1 + 0x238) < DAT_00160f28) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00160f30;
  }
  else {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00160f2c;
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x1360),2,900,600);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  }
  iVar3 = DAT_00160f40;
  uVar2 = DAT_00160f3c;
  if (DAT_00160f34 <= *(int *)(param_1 + 0x238)) {
    *(undefined4 *)(param_1 + 0x238) = DAT_00160f38;
    *(undefined4 *)(iVar3 + param_1) = uVar2;
    *(undefined2 *)(param_1 + 0x135e) = 5;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 8;
  return;
}
