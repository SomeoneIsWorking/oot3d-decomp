// OoT3D decomp @ 003ab92c  name=FUN_003ab92c  size=84

void FUN_003ab92c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  uVar1 = DAT_003ab980;
  uVar3 = *param_3;
  uVar2 = FUN_0036ae18(param_2,uVar3);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035302c(param_1,uVar1,uVar2,uVar1,param_2,uVar3,2,0);
  return;
}
