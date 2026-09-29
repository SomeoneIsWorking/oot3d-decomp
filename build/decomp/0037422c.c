// OoT3D decomp @ 0037422c  name=FUN_0037422c  size=80

void FUN_0037422c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar1 = DAT_0037427c;
  uVar2 = FUN_0036ae18();
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035302c(param_1,uVar1,uVar2,uVar1,param_2,param_3,2,0);
  return;
}
