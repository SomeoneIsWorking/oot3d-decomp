// OoT3D decomp @ 00211688  name=FUN_00211688  size=172

void FUN_00211688(int param_1,int param_2)

{
  undefined4 uVar1;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1d4,0x3a,param_1 + 0x1d8,0x3a,0);
  uVar1 = FUN_00353fd4(param_1,param_2,6);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_0037572c(DAT_00211734,param_1);
  uVar1 = DAT_00211738;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  *(undefined4 *)(param_1 + 0x1c4) = uVar1;
  return;
}
