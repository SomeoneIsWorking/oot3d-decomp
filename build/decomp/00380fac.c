// OoT3D decomp @ 00380fac  name=FUN_00380fac  size=140

void FUN_00380fac(int param_1,int param_2)

{
  int iVar1;

  FUN_0037632c();
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x108c);
  FUN_00376340(DAT_0038103c,DAT_00381038,DAT_00381038,param_2,param_1,5);
  FUN_00325fbc(param_1);
  FUN_00370734(param_1 + 0x1a4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar1 == 2) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff6;
    *(undefined4 *)(param_1 + 0xf60) = 0x14;
  }
  return;
}
