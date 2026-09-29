// OoT3D decomp @ 00416d58  name=FUN_00416d58  size=104

void FUN_00416d58(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar1 = FUN_00313ce0(0x38);
  iVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0041baa0();
    iVar3 = FUN_0041baac(iVar1,uVar2);
  }
  iVar1 = DAT_00416dc0;
  *param_1 = iVar3;
  param_1[0x33] = iVar1;
  iVar1 = DAT_00416dc4;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x34] = iVar1;
  *(undefined1 *)((int)param_1 + 0xd5) = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(iVar3 + 0x19) = 0;
  FUN_00301694(*param_1,0x2e,0x91);
  return;
}
