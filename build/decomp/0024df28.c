// OoT3D decomp @ 0024df28  name=FUN_0024df28  size=124

void FUN_0024df28(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1a4,1);
  FUN_003510b0(param_1,DAT_0024dfa4);
  FUN_00353dd0(param_2,param_1 + 0x1ac);
  FUN_0034fb3c(param_2,param_1 + 0x1ac,param_1,DAT_0024dfa8);
  FUN_00372d4c(DAT_0024dfb4,DAT_0024dfac,param_1 + 0xbc,DAT_0024dfb0);
  uVar1 = DAT_0024dfb8;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_0037572c(uVar1,param_1);
  return;
}
