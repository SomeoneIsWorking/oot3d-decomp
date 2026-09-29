// OoT3D decomp @ 001fe3a0  name=FUN_001fe3a0  size=56

void FUN_001fe3a0(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xbb0) = DAT_001fe3d8;
  }
  return;
}
