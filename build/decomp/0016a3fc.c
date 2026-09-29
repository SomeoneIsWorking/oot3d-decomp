// OoT3D decomp @ 0016a3fc  name=FUN_0016a3fc  size=400

void FUN_0016a3fc(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_00372d4c(DAT_0016a594,DAT_0016a58c,param_1 + 0xbc,DAT_0016a590);
  uVar3 = DAT_0016a59c;
  *(undefined4 *)(param_1 + 0xe8c) = DAT_0016a598;
  *(undefined2 *)(param_1 + 0xe84) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_0037572c(uVar3,param_1);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0016a5a0 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar2 + 0x10;
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar3 = ObjectBankArchive_00358ef8(iVar2,0);
    FUN_00353e78(iVar2,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),6,
                 param_1 + 0x228,param_1 + 0x770,0x1a);
    FUN_0035c358(param_1 + 0xcb8,param_1 + 0x1a4,1,0xffffffff,0xffffffff);
    FUN_00373d40(param_1 + 0x1a4,6);
    *(undefined4 *)(param_1 + 0xe8c) = DAT_0016a5a4;
    uVar1 = 3;
    *(undefined4 *)(param_1 + 0xe94) = 0xffffffff;
  }
  else {
    if (*(short *)(param_1 + 0x1c) != 1) {
      return;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2,1);
    FUN_00353e78(iVar2,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0,
                 param_1 + 0x228,param_1 + 0x770,0x1a);
    FUN_0035c358(param_1 + 0xcb8,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
    FUN_00373d40(param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0xe8c) = DAT_0016a5a4;
    uVar1 = 2;
    *(undefined4 *)(param_1 + 0xe94) = 0xffffffff;
  }
  *(undefined2 *)(param_1 + 0xe88) = uVar1;
  return;
}
