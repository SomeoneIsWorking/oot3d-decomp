// OoT3D decomp @ 0016cba8  name=FUN_0016cba8  size=72

void FUN_0016cba8(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_0036be34(param_2,DAT_0016cbf0);
    *(undefined4 *)(param_1 + 0x708) = DAT_0016cbf4;
  }
  return;
}
