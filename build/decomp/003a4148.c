// OoT3D decomp @ 003a4148  name=FUN_003a4148  size=184

void FUN_003a4148(int param_1,int param_2)

{
  int iVar1;

  FUN_0037632c();
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x108c);
  FUN_00320db4(param_1);
  FUN_00376340(DAT_003a4204,DAT_003a4200,DAT_003a4200,param_2,param_1,5);
  FUN_00325fbc(param_1);
  iVar1 = FUN_00370734(param_1 + 0x1a4);
  if (iVar1 != 0) {
    FUN_00341188(DAT_003a4208,param_1,0xc,0);
  }
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar1 == 2) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff6;
    *(undefined4 *)(param_1 + 0xf60) = 0x10;
  }
  return;
}
