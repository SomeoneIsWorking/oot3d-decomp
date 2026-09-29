// OoT3D decomp @ 001e33b8  name=FUN_001e33b8  size=148

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_001e33b8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;

  if (*(char *)(param_1 + 0x989) != '\0') {
    *(char *)(param_1 + 0x989) = *(char *)(param_1 + 0x989) + -1;
    return param_1;
  }
  FUN_0033c764(param_2);
  bVar4 = *(char *)(*(byte *)(DAT_001e344c + 10) + DAT_001e3450) != -1;
  uVar1 = DAT_001e3450;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(*(byte *)(DAT_001e344c + 0xb) + DAT_001e3450);
  }
  if (bVar4 && uVar1 != 0xff) {
    if ((*(ushort *)(DAT_001e3458 + 4) & 0x80) == 0) {
      uVar3 = 0x3b4;
    }
    else {
      uVar3 = (undefined2)DAT_001e345c;
    }
    if (-1 < *(short *)(param_2 + 0x5c32)) {
      return 0;
    }
    *(undefined2 *)(param_2 + 0x5c32) = uVar3;
    *(undefined1 *)(param_2 + 0x5c2d) = 0x14;
    *(undefined1 *)(param_2 + 0x5c76) = 0x26;
    return 1;
  }
  iVar2 = FUN_003716f0(param_2,DAT_001e3454,0x14,0x26);
  return iVar2;
}
