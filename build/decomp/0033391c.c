// OoT3D decomp @ 0033391c  name=FUN_0033391c  size=100

void FUN_0033391c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 extraout_s1;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar2 = FUN_0036ae14(param_2 + 0x1a4);
  uVar3 = extraout_s1;
  if (param_5 == 0) {
    uVar3 = DAT_00333980;
  }
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = DAT_00333980;
  uVar1 = DAT_00333984;
  if (param_5 == 0) {
    uVar4 = uVar2;
    uVar2 = uVar3;
    uVar1 = DAT_00333988;
  }
  FUN_00375c08(uVar1,uVar2,uVar4,param_1,param_2 + 0x1a4,param_3,param_4);
  return;
}
