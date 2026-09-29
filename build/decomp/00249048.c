// OoT3D decomp @ 00249048  name=FUN_00249048  size=176

void FUN_00249048(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;

  iVar3 = FUN_00370734(param_1 + 0x314);
  uVar2 = DAT_002490fc;
  uVar1 = DAT_002490f8;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x344) == 2) {
      uVar4 = FUN_0036ae14(param_1 + 0x314,3);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar1,uVar2,uVar4,uVar1,param_1 + 0x314,3,2);
    }
    else {
      uVar4 = FUN_0036ae14(param_1 + 0x314,2);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar1,uVar2,uVar4,uVar1,param_1 + 0x314,2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002490f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x7b8))(param_1,param_2);
  return;
}
