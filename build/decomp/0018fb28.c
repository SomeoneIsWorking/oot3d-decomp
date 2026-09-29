// OoT3D decomp @ 0018fb28  name=FUN_0018fb28  size=244

/* WARNING: Removing unreachable block (ram,0x00347cdc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0018fb28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  FUN_00372d4c(DAT_0018fc24,DAT_0018fc1c,param_1 + 0xbc,DAT_0018fc20);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018fc28 + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = iVar1 + 0x10;
  *(int *)(param_1 + 0x3f4) = iVar1;
  uVar2 = ObjectBankArchive_00358ef8(iVar1,0);
  FUN_00353e78(iVar1,param_2,param_1 + 0x1a4,uVar2,*(undefined4 *)(param_1 + 0x178),0,0,0,0);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,2,1);
  iVar1 = DAT_00347d20;
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar3 = 0x37;
    *(undefined1 *)(DAT_00347d20 + 1) = 1;
    iVar1 = iVar1 + 1;
    iVar4 = 3;
    do {
      bVar5 = (uVar3 & 1) == 0;
      if (bVar5) {
        *(undefined1 *)(iVar1 + 1) = 0;
      }
      if (!bVar5) {
        *(undefined1 *)(iVar1 + 1) = 1;
      }
      if ((uVar3 >> 1 & 1) == 0) {
        *(undefined1 *)(iVar1 + 2) = 0;
      }
      else {
        *(undefined1 *)(iVar1 + 2) = 1;
      }
      iVar4 = iVar4 + -1;
      uVar3 = uVar3 >> 2;
      iVar1 = iVar1 + 2;
    } while (iVar4 != 0);
    return;
  }
  if (*(short *)(param_1 + 0x1c) == 4) {
    *(undefined2 *)(DAT_0018fc2c + 0x62) = 0;
  }
  return;
}
