// OoT3D decomp @ 00449048  name=FUN_00449048  size=140

undefined4 FUN_00449048(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0031b9c0(*(undefined4 *)(param_1 + 0x8034),0);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x8034);
    iVar1 = FUN_00303ea8(uVar3);
    FUN_0031b99c(uVar3);
    *(int *)(param_1 + 0x114) = iVar1;
    if (iVar1 != 0) {
      iVar1 = *(int *)(UNK_004490d4 + param_1);
      iVar2 = *(int *)(iVar1 + 0x84);
      if (iVar2 == 0) {
        iVar2 = FUN_00324fd0(iVar1 + 0x44);
        *(int *)(iVar1 + 0x84) = iVar2;
      }
      FUN_0031b124(param_1 + 0x118,*(undefined4 *)(param_1 + 0x114),iVar2,0);
    }
    return 3;
  }
  return 1;
}

