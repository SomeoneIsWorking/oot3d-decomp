// OoT3D decomp @ 0026c28c  name=FUN_0026c28c  size=140

void FUN_0026c28c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_0026c31c,DAT_0026c318,DAT_0026c318,param_2,param_1,4);
  FUN_00330370(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,5);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0026c324,DAT_0026c320,uVar2,DAT_0026c320,param_1 + 0x1a4,5,2);
    *(undefined4 *)(param_1 + 3000) = 8;
    *(undefined4 *)(param_1 + 0xbbc) = 3;
  }
  return;
}
