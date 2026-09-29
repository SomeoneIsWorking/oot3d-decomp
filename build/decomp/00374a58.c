// OoT3D decomp @ 00374a58  name=FUN_00374a58  size=80

void FUN_00374a58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  uVar2 = DAT_00374aac;
  uVar1 = DAT_00374aa8;
  uVar3 = FUN_0036ae18();
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035302c(uVar1,uVar2,uVar3,param_1,param_2,param_3,2,0);
  return;
}
