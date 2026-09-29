// OoT3D decomp @ 00293910  name=FUN_00293910  size=156

void FUN_00293910(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_002939b0,DAT_002939ac,DAT_002939ac,param_2,param_1,4);
  FUN_00330370(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,5);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_002939b8,DAT_002939b4,uVar2,DAT_002939b4,param_1 + 0x1a4,5,2);
    *(undefined4 *)(param_1 + 3000) = 8;
    *(undefined4 *)(param_1 + 0xbbc) = 3;
  }
  if (*(int *)(param_1 + 3000) != 0x42) {
    *(undefined4 *)(param_1 + 3000) = 0x43;
  }
  return;
}
