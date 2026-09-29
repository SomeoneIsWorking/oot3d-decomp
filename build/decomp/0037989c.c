// OoT3D decomp @ 0037989c  name=FUN_0037989c  size=80

void FUN_0037989c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    FUN_0037073c(param_2,0x28);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003798ec;
  }
  return;
}
