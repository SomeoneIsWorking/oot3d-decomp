// OoT3D decomp @ 0029a6fc  name=FUN_0029a6fc  size=184

void FUN_0029a6fc(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1d0,0xf,0);
  FUN_00372d4c(DAT_0029a7b4,DAT_0029a7b4,param_1 + 0xbc,0);
  FUN_0037572c(DAT_0029a7b8,param_1);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_003532e8(param_1,0);
    uVar1 = FUN_00353fd4(param_1,param_2,3);
    uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined4 *)(param_1 + 0x1cc) = DAT_0029a7bc;
  }
  return;
}
