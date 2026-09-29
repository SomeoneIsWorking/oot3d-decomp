// OoT3D decomp @ 00126694  name=FUN_00126694  size=172

void FUN_00126694(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  FUN_003731e0(param_1 + 0x1a8);
  if (0x52 < *(short *)(param_1 + 0xad0)) {
    FUN_00373500(DAT_00126748,DAT_00126744,DAT_00126740,param_1 + 0xe84);
    *(undefined1 *)(param_1 + 0xc18) = 1;
  }
  iVar1 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),DAT_0012674c,param_1 + 0x1a8);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xac0) = DAT_00126750;
    *(undefined2 *)(param_1 + 0xaee) = 4;
    uVar2 = FUN_0036ae14(param_1 + 0x1a8,0x28);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0xaf8) = uVar2;
    FUN_00370350(DAT_00126754,param_1 + 0x1a8,0x28);
    return;
  }
  return;
}
