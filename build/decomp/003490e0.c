// OoT3D decomp @ 003490e0  name=FUN_003490e0  size=84

void FUN_003490e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar2 = DAT_00349138;
  uVar1 = DAT_00349134;
  uVar4 = *param_2;
  uVar3 = FUN_0036ae18(param_1,uVar4);
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035302c(uVar1,uVar2,uVar3,uVar2,param_1,uVar4,0);
  return;
}
