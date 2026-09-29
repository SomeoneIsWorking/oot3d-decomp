// OoT3D decomp @ 0035a49c  name=FUN_0035a49c  size=88

void FUN_0035a49c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar2 = DAT_0035a4f8;
  uVar1 = DAT_0035a4f4;
  uVar4 = *param_3;
  uVar3 = FUN_0036ae18(param_2,uVar4);
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035302c(uVar1,uVar2,uVar3,param_1,param_2,uVar4,2,0);
  return;
}
