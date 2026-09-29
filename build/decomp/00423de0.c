// OoT3D decomp @ 00423de0  name=FUN_00423de0  size=100

int FUN_00423de0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  uVar1 = FUN_0030c6e0();
  iVar3 = DAT_00423e44;
  iVar2 = FUN_002f9e84(uVar1,*(undefined4 *)(DAT_00423e44 + 4));
  iVar4 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0xc);
  uVar1 = FUN_0030c758();
  iVar3 = FUN_002f9e74(uVar1,*(undefined4 *)(iVar3 + 4));
  iVar3 = iVar3 + iVar2 + iVar4 + iVar5 + iVar6;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    iVar3 = iVar3 + *(int *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 4) == 1) {
    iVar3 = iVar3 + *(int *)(param_1 + 8);
  }
  return iVar3;
}
