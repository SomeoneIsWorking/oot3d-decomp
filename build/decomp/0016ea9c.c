// OoT3D decomp @ 0016ea9c  name=FUN_0016ea9c  size=176

void FUN_0016ea9c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;

  uVar1 = (uint)((int)*(short *)(param_1 + 0x1c) << 0x19) >> 0x1d;
  iVar2 = param_1 + uVar1 * 4;
  if (*(int *)(iVar2 + 0x2b0) == 0) {
    return;
  }
  if (-1 < *(char *)(((int)*(short *)(param_1 + 0x1c) & 7U) * 5 + DAT_0016eb4c + uVar1)) {
    iVar3 = param_1 + uVar1 * 0x98;
    *(undefined4 *)(iVar3 + 0x2d0) = DAT_0016eb50;
    uVar4 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3);
    if (*DAT_0016eb54 == 0) {
      *(undefined4 *)(iVar3 + 0x2cc) = uVar4;
      FUN_003586ec();
    }
    FUN_00373bec(iVar3 + 0x2c4);
  }
  FUN_003721e0(*(undefined4 *)(iVar2 + 0x2b0),param_1 + 0x148);
  *(undefined1 *)(*(int *)(iVar2 + 0x2b0) + 0xac) = 1;
  FUN_00372170(*(undefined4 *)(iVar2 + 0x2b0),0);
  return;
}
