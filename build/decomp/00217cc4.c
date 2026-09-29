// OoT3D decomp @ 00217cc4  name=FUN_00217cc4  size=132

void FUN_00217cc4(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  FUN_0036e980(param_2,param_1,1);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 100) = DAT_00217d48;
    *(undefined4 *)(param_1 + 0x6c) = DAT_00217d4c;
    FUN_003686a8(param_1,0);
    FUN_00372a60(param_1 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1e8);
    FUN_003729b8(param_1,0x11);
    return;
  }
  return;
}
