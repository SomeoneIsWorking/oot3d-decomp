// OoT3D decomp @ 003a8f5c  name=FUN_003a8f5c  size=296

void FUN_003a8f5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = param_1 + 0x1a4;
  iVar1 = FUN_00357a70(0);
  FUN_00357a50(iVar3,0,4,iVar1,0);
  FUN_00357a50(iVar3,1,4,iVar1,0);
  FUN_00357a50(iVar3,2,3,iVar1 + 0x10,0);
  FUN_00357a50(iVar3,3,2,iVar1 + 0x20,0);
  uVar2 = *(undefined4 *)(param_1 + 0x1cc);
  FUN_0037266c(uVar2,6);
  if (*(int *)(param_1 + 0x1e0) < DAT_003a9084) {
    FUN_0037266c();
    FUN_0037266c(uVar2,1);
    FUN_0037266c(uVar2,0);
  }
  else {
    FUN_0036932c(uVar2,8);
    FUN_0036932c(uVar2,1);
    FUN_0036932c(uVar2,0);
  }
  FUN_0036932c(uVar2,7);
  FUN_0035e240(iVar3,param_1 + 0x148,0,0,param_1,0);
  return;
}
