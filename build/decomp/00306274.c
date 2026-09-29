// OoT3D decomp @ 00306274  name=FUN_00306274  size=132

void FUN_00306274(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_20;

  local_20 = param_4;
  FUN_00306318(param_1,&local_20);
  iVar1 = FUN_0034405c(0,0,*(undefined4 *)(param_1 + 0xe4),param_2);
  iVar2 = *(int *)(param_1 + 0xe0);
  uVar3 = (iVar1 * 2 + 3U & 0xfffffffc) + iVar2;
  if (uVar3 < 0x4001) {
    *(uint *)(param_1 + 0xe0) = uVar3;
    iVar2 = *(int *)(param_1 + 0xdc) + iVar2;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_0034405c(iVar2,iVar1 * 2,*(undefined4 *)(param_1 + 0xe4),param_2);
    *(undefined1 *)(local_20 + 5) = 0;
    *(int *)(local_20 + 8) = iVar2;
    *(int *)(local_20 + 0xc) = iVar1;
  }
  return;
}
