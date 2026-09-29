// OoT3D decomp @ 0016c9f0  name=FUN_0016c9f0  size=76

void FUN_0016c9f0(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036bc98();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x98) < DAT_0016ca40) {
      FUN_0036bb28(DAT_0016ca44,param_1,param_2);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x8a8) = DAT_0016ca3c;
  }
  return;
}
