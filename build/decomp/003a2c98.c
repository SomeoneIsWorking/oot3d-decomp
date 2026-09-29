// OoT3D decomp @ 003a2c98  name=FUN_003a2c98  size=304

void FUN_003a2c98(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  undefined4 uVar6;

  FUN_0031a3dc();
  iVar3 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  uVar2 = DAT_003a2dc8;
  iVar4 = FUN_0036e5e0(DAT_003a2dcc,param_1 + 0x1a4);
  if (iVar4 != 0) {
    FUN_0037547c(DAT_003a2dd8,param_1 + 0x28,4,DAT_003a2dd4,DAT_003a2dd4,DAT_003a2dd0);
  }
  FUN_003264c8(param_1);
  uVar6 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a2ddc;
  FUN_00376340(DAT_003a2de8,DAT_003a2de4,DAT_003a2de0,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar6;
  if (iVar3 != 0) {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar6 = DAT_003a2dec;
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar2,DAT_003a2dec,uVar5,DAT_003a2dec,param_1 + 0x1a4,DAT_003a2df0,0);
    FUN_003725e0(param_2);
    *(ushort *)(DAT_003a2df4 + 0x38) = *(ushort *)(DAT_003a2df4 + 0x38) | 8;
    uVar1 = *(undefined1 *)(DAT_003a2df8 + param_2);
    *(undefined4 *)(param_1 + 0xbe0) = uVar6;
    *(undefined1 *)(param_1 + 0xbdd) = uVar1;
    FUN_0034df30(param_1,param_2);
    *(undefined4 *)(param_1 + 0xbbc) = 0x1b;
    *(undefined4 *)(param_1 + 0xcbc) = 0;
  }
  return;
}
