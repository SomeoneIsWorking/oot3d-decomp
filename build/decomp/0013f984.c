// OoT3D decomp @ 0013f984  name=FUN_0013f984  size=52

void FUN_0013f984(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),DAT_0013f9b8,param_1 + 0x2c);
  uVar1 = DAT_0013f9c0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_0013f9bc;
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  }
  return;
}
