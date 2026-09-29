// OoT3D decomp @ 002dde30  name=FUN_002dde30  size=344

undefined4 FUN_002dde30(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;

  if (*(char *)(param_1 + 0x1749) == '\x03') {
    FUN_0036055c(param_2,param_1,DAT_002ddf88,0);
    if (*(short *)(DAT_002ddf8c + param_1) != 0) {
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
    }
    FUN_0034bbfc(param_1);
    uVar1 = *(uint *)(param_1 + 0x1714) | 0x20000;
  }
  else {
    if ((**(uint **)(param_1 + 0x29c8) & *DAT_002ddf90) != 0) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x2240) < DAT_002ddf94) && (iVar2 = FUN_002d6628(param_1), iVar2 == 0))
    {
      iVar3 = FUN_0035d260(param_1);
      iVar2 = DAT_002ddf9c;
    }
    else {
      iVar3 = FUN_0035d260(param_1);
      iVar2 = DAT_002ddf98;
    }
    FUN_002d64f4(param_2,param_1,*(undefined1 *)(iVar2 + iVar3));
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002ddfa0 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)(DAT_002ddfa4 / fVar4 + DAT_002ddfa8);
    if (*(char *)(DAT_002ddfac + param_1) <= iVar2) {
      iVar2 = (int)*(char *)(DAT_002ddfac + param_1);
    }
    *(char *)(param_1 + 0x2488) = (char)iVar2;
    *(undefined1 *)(param_1 + 0x227b) = 0;
    uVar1 = *(uint *)(param_1 + 0x1714);
    *(uint *)(param_1 + 0x1714) = uVar1 | 0x20000;
    if (*(char *)((uint)*(byte *)(param_1 + 0x222a) + param_1 + 0x2231) != '\0') {
      return 1;
    }
    uVar1 = uVar1 | 0x40020000;
  }
  *(uint *)(param_1 + 0x1714) = uVar1;
  return 1;
}
