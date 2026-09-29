// OoT3D decomp @ 0019efd8  name=FUN_0019efd8  size=52

void FUN_0019efd8(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x59c) + -1;
  *(int *)(param_1 + 0x59c) = iVar1;
  if (iVar1 < 1) {
    FUN_0034557c(param_2,0xf);
    *(undefined4 *)(param_1 + 0x568) = DAT_0019f00c;
  }
  return;
}
