// OoT3D decomp @ 00362434  name=FUN_00362434  size=148

void FUN_00362434(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x5c;
  FUN_0036df4c(iVar1 + 0x28,param_3);
  FUN_0036df4c(iVar1 + 0x34,param_4);
  FUN_0036df4c(iVar1 + 0x40,param_5);
  FUN_0033ae14(param_3,param_4,param_5,&local_18,&local_1c,&local_20,&local_24);
  *(undefined4 *)(iVar1 + 0x4c) = local_18;
  *(undefined4 *)(iVar1 + 0x50) = local_1c;
  *(undefined4 *)(iVar1 + 0x54) = local_20;
  *(undefined4 *)(iVar1 + 0x58) = local_24;
  return;
}
