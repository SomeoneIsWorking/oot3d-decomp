// OoT3D decomp @ 003dce00  name=FUN_003dce00  size=120

void FUN_003dce00(int param_1)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x208);
  if (iVar1 != 0) {
    *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x92) + -0x8000;
    iVar1 = DAT_003dce78;
    *(undefined1 *)(param_1 + 0x1a9) = 3;
    FUN_0036e734(param_1 + 0x208,*(undefined4 *)(iVar1 + 0x24));
    *(undefined2 *)(param_1 + 0x1aa) = 3;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) | 1;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003dce7c;
  }
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),2,DAT_003dce80);
  return;
}
