// OoT3D decomp @ 00466720  name=FUN_00466720  size=120

undefined4 FUN_00466720(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  FUN_002ea294(param_1 + 0x110);
  FUN_002ea278(param_1,param_1 + 0x110);
  iVar1 = FUN_002ea330(param_1 + 0x110);
  FUN_002facdc(param_1 + 0x110);
  FUN_002ea324(param_1 + 0x110,param_2 + iVar1);
  iVar1 = FUN_002ea2ec(param_1 + 0x110);
  iVar2 = FUN_002faca4(param_1 + 0x110);
  if (iVar1 != -1 && iVar2 != -1) {
    FUN_002ea2e0(param_1 + 0x110,param_2 + iVar1);
  }
  *(int *)(param_1 + 0x10c) = param_2;
  return 1;
}
