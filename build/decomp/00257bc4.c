// OoT3D decomp @ 00257bc4  name=FUN_00257bc4  size=180

undefined4 FUN_00257bc4(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003532e8(param_1,0);
  if ((*(ushort *)(param_1 + 0x1c) & 0xf) == 0) {
    FUN_00372f38(param_1,param_2,param_1 + 0x1c4,4,0);
    uVar1 = FUN_00353fd4(param_1,param_2,4);
  }
  else {
    FUN_00372f38(param_1,param_2,param_1 + 0x1c4,3,0);
    uVar1 = FUN_00353fd4(param_1,param_2,3);
  }
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return 1;
}
