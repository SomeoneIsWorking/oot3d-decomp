// OoT3D decomp @ 003411f8  name=FUN_003411f8  size=100

void FUN_003411f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
    uVar3 = DAT_0034125c;
  }
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = DAT_0034125c;
  uVar1 = DAT_00341260;
  if (param_5 == 0) {
    uVar4 = uVar2;
    uVar2 = uVar3;
    uVar1 = DAT_00341264;
  }
  FUN_00375c08(uVar1,uVar2,uVar4,param_1,param_2 + 0x1a4,param_3,param_4);
  return;
}
