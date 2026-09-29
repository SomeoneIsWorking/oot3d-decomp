// OoT3D decomp @ 003b963c  name=FUN_003b963c  size=140

void FUN_003b963c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar2 == 5) {
    FUN_00371808(param_2,uRam003b96c8,0xffffff9d,param_1,0);
    uVar1 = uRam003b96cc;
    *(undefined4 *)(param_1 + 0xbb0) = uRam003b96d0;
    *(undefined4 *)(param_1 + 0xbac) = uVar1;
    *(undefined2 *)(param_1 + 0xc28) = 8;
    *(ushort *)(iRam003b96d4 + 0xee) = *(ushort *)(iRam003b96d4 + 0xee) | 0x10;
    FUN_00373d40(param_1 + 0x1a4,3);
    *(undefined4 *)(param_1 + 0xc40) = 4;
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  return;
}
