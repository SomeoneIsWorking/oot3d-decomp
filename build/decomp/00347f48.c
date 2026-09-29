// OoT3D decomp @ 00347f48  name=FUN_00347f48  size=104

void FUN_00347f48(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined4 extraout_s1;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar3 = *param_3;
  uVar2 = FUN_0036ae14(param_2 + 0x1a4,uVar3);
  uVar4 = extraout_s1;
  if (param_5 == 0) {
    uVar4 = DAT_00347fb0;
  }
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = DAT_00347fb0;
  uVar1 = DAT_00347fb4;
  if (param_5 == 0) {
    uVar5 = uVar2;
    uVar2 = uVar4;
    uVar1 = DAT_00347fb8;
  }
  FUN_00375c08(uVar1,uVar2,uVar5,param_1,param_2 + 0x1a4,uVar3,param_4);
  return;
}
