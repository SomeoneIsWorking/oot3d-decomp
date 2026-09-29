// OoT3D decomp @ 0024bd08  name=FUN_0024bd08  size=268

void FUN_0024bd08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_003510b0(param_1,DAT_0024be14);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0024be18 + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = iVar1 + 0x10;
  FUN_003532e8(param_1,0);
  uVar2 = FUN_003532c0(iVar1,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_0034f6bc(param_2,param_2 + 0xae8,uVar2);
  if (*(char *)(DAT_0024be1c + 0xe) != '\0') {
    FUN_00374428(param_1);
  }
  uVar2 = ObjectBankArchive_00358ef8(iVar1,0);
  FUN_00358ea8(iVar1,param_2,param_1 + 0x360,uVar2,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x1c0,param_1 + 0x290,4);
  uVar2 = DAT_0024be20;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}
