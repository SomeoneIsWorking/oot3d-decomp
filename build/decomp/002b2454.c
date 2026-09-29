// OoT3D decomp @ 002b2454  name=FUN_002b2454  size=156

void FUN_002b2454(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_002b24f4,DAT_002b24f0,DAT_002b24f0,param_2,param_1,4);
  FUN_00330370(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,5);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_002b24fc,DAT_002b24f8,uVar2,DAT_002b24f8,param_1 + 0x1a4,5,2);
    *(undefined4 *)(param_1 + 3000) = 8;
    *(undefined4 *)(param_1 + 0xbbc) = 3;
  }
  if (*(int *)(param_1 + 3000) != 0x20) {
    *(undefined4 *)(param_1 + 3000) = 0x21;
  }
  return;
}
