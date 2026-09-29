// OoT3D decomp @ 003ffa40  name=FUN_003ffa40  size=40

undefined4 FUN_003ffa40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;

  local_8 = param_4;
  iVar1 = FUN_0030ecfc(param_1 + 4,&local_8,param_2,param_3);
  if (iVar1 < 0) {
    FUN_003351b4();
  }
  return local_8;
}
