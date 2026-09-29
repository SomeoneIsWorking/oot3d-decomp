// OoT3D decomp @ 00256d50  name=FUN_00256d50  size=120

void FUN_00256d50(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 6) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    FUN_0036e980(param_2,param_1,7);
    uVar1 = DAT_00256dc8;
    *(undefined1 *)(param_1 + 0xa16) = 1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = DAT_00256dcc;
    FUN_003686a8(param_1,0);
    FUN_003729b8(param_1,0);
    return;
  }
  return;
}
