// OoT3D decomp @ 003e13a8  name=FUN_003e13a8  size=144

void FUN_003e13a8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  if (*(short *)(param_1 + 0x66a) != 0) {
    *(short *)(param_1 + 0x66a) = *(short *)(param_1 + 0x66a) + -1;
  }
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    FUN_00375bcc(param_1,DAT_003e1438);
  }
  uVar2 = DAT_003e1444;
  if (*(short *)(param_1 + 0x66a) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_003e143c;
    uVar1 = DAT_003e1440;
    *(undefined1 *)(param_1 + 0x694) = 1;
    *(undefined2 *)(param_1 + 0x66a) = 0x30;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) | 1;
    *(byte *)(param_1 + 0x681) = *(byte *)(param_1 + 0x681) | 1;
    *(undefined4 *)(param_1 + 0x664) = uVar2;
  }
  return;
}
