// OoT3D decomp @ 002ccf04  name=FUN_002ccf04  size=44

bool FUN_002ccf04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_34 [36];

  FUN_003445a8(param_2);
  iVar1 = *(int *)(param_1 + 0xf0);
  iVar2 = FUN_004c43b0(iVar1,auStack_34);
  if (iVar2 != 0) {
    FUN_0032b1c4(param_2,auStack_34,*(undefined4 *)(iVar1 + 0x3dc),param_3);
  }
  return iVar2 != 0;
}
