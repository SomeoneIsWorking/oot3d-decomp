// OoT3D decomp @ 001969cc  name=FUN_001969cc  size=84

void FUN_001969cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036adf4();
  uVar1 = DAT_00196a28;
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x98) < DAT_00196a20)) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00196a24;
    FUN_00371808(param_2,uVar1,0xffffff9d,param_1,0);
  }
  return;
}
