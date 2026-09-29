// OoT3D decomp @ 00386f38  name=FUN_00386f38  size=156

void FUN_00386f38(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_00386fd8,DAT_00386fd4,DAT_00386fd4,param_2,param_1,4);
  FUN_00330370(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,4);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00386fe0,uVar2,DAT_00386fdc,DAT_00386fdc,param_1 + 0x1a4,4,2);
    *(undefined4 *)(param_1 + 3000) = 0xc;
    *(undefined4 *)(param_1 + 0xbbc) = 2;
  }
  if (*(int *)(param_1 + 3000) != 0x46) {
    *(undefined4 *)(param_1 + 3000) = 0x47;
  }
  return;
}
