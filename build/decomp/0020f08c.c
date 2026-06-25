// OoT3D decomp @ 0020f08c  name=FUN_0020f08c  size=272

void FUN_0020f08c(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar3 = uVar1 & 3;
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
  iVar2 = 0;
  if ((uVar1 & 3) == 0) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
  }
  else if (uVar3 == 1) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    iVar2 = 1;
  }
  else if (uVar3 == 2) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),2);
    iVar2 = 2;
  }
  else if (uVar3 == 3) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
    iVar2 = 3;
  }
  FUN_00357a50(param_1 + 0x1a4,0,4,DAT_0020f19c + iVar2 * 0x10,1);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0020f1a4,DAT_0020f1a0,param_1,0);
  return;
}

