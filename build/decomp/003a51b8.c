// OoT3D decomp @ 003a51b8  name=FUN_003a51b8  size=292

void FUN_003a51b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_0033526c();
  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_003a52dc;
  if (iVar2 != 0) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,8);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar1,DAT_003a52e0,uVar3,DAT_003a52e0,param_1 + 0x1a4,8,0);
    *(undefined4 *)(param_1 + 0xcec) = 3;
  }
  if ((*(char *)(param_1 + 0x214) == '\x02') &&
     ((iVar2 = FUN_003736fc(DAT_003a52e4,uVar1,param_1 + 0x1a4), iVar2 != 0 ||
      (iVar2 = FUN_003736fc(DAT_003a52e8,uVar1,param_1 + 0x1a4), iVar2 != 0)))) {
    FUN_0037547c(DAT_003a52f4,param_1 + 0x28,4,DAT_003a52f0,DAT_003a52f0,DAT_003a52ec);
  }
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
  FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  FUN_00376340(DAT_003a52fc,DAT_003a52f8,DAT_003a52f8,param_2,param_1,4);
  FUN_00318010(param_1,param_2);
  return;
}
