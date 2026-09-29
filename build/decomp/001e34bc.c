// OoT3D decomp @ 001e34bc  name=FUN_001e34bc  size=240

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_001e34bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  bool bVar4;

  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),2,0x400,0x100);
  iVar1 = DAT_001e35ac;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  if (*(int *)(param_1 + 0x98) < iVar1) {
    FUN_00369674(param_1,6);
    *(undefined4 *)(param_1 + 0x6c) = DAT_001e35b0;
  }
  if (*(byte *)(param_1 + 0x989) != 0) {
    iVar1 = *(byte *)(param_1 + 0x989) - 1;
    *(char *)(param_1 + 0x989) = (char)iVar1;
    return iVar1;
  }
  FUN_0033c764(param_2);
  bVar4 = *(char *)(*(byte *)(DAT_001e35b4 + 10) + DAT_001e35b8) != -1;
  uVar2 = DAT_001e35b8;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(*(byte *)(DAT_001e35b4 + 0xb) + DAT_001e35b8);
  }
  if (bVar4 && uVar2 != 0xff) {
    if ((*(ushort *)(DAT_001e35c0 + 4) & 0x80) == 0) {
      uVar3 = 0x3b4;
    }
    else {
      uVar3 = (undefined2)DAT_001e35c4;
    }
    if (-1 < *(short *)(param_2 + 0x5c32)) {
      return 0;
    }
    *(undefined2 *)(param_2 + 0x5c32) = uVar3;
    *(undefined1 *)(param_2 + 0x5c2d) = 0x14;
    *(undefined1 *)(param_2 + 0x5c76) = 0x26;
    return 1;
  }
  iVar1 = FUN_003716f0(param_2,DAT_001e35bc,0x14,0x26);
  return iVar1;
}
