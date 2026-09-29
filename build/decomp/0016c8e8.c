// OoT3D decomp @ 0016c8e8  name=FUN_0016c8e8  size=68

void FUN_0016c8e8(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_00376a60(0xffffff38);
    *(undefined4 *)(param_1 + 0xbb0) = DAT_0016c92c;
  }
  return;
}
