// OoT3D decomp @ 001ab9cc  name=FUN_001ab9cc  size=984

void FUN_001ab9cc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  uVar3 = DAT_001abce4;
  FUN_00372d4c(DAT_001abce4,DAT_001abcdc,param_1 + 0xbc,DAT_001abce0);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 2) {
    iVar2 = param_1 + 0x1a4;
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001abce8 + iVar4) != 0)) {
      iVar4 = iVar4 + 0x3a5c;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0);
    FUN_00353e78(iVar4 + 0x10,param_2,iVar2,uVar5,*(undefined4 *)(param_1 + 0x178),0xffffffff,0,0,0)
    ;
    uVar5 = FUN_0036ae14(iVar2,0x1a);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_001abcec,uVar3,uVar5,uVar3,iVar2,DAT_001abcf0,2);
    *(undefined4 *)(param_1 + 0x3fc) = 7;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined2 *)(param_1 + 0x3f4) = 2;
    *(undefined2 *)(param_1 + 0x3f8) = 2;
  }
  else if (sVar1 == 3) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001abce8 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0xf,0,0
                 ,0);
    *(undefined4 *)(param_1 + 0x3fc) = 10;
    *(undefined4 *)(param_1 + 0x400) = 1;
  }
  else if (sVar1 == 4) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001abce8 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0x19,0,
                 0,0);
    *(undefined4 *)(param_1 + 0x3fc) = 0xb;
    *(undefined4 *)(param_1 + 0x400) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  else if (sVar1 == 5) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001abce8 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0x16,0,
                 0,0);
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x18,0,0,0,3);
    *(undefined4 *)(param_1 + 0x3fc) = 0x10;
    *(undefined4 *)(param_1 + 0x400) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined2 *)(param_1 + 0x3f4) = 4;
    *(undefined2 *)(param_1 + 0x3f8) = 2;
  }
  else {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001abce8 + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0xf,0,0
                 ,0);
    *(undefined4 *)(param_1 + 0xc4) = DAT_001abdbc;
    *(undefined2 *)(param_1 + 0x3f4) = 5;
    *(undefined2 *)(param_1 + 0x3f8) = 0;
  }
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,0xffffffff);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
  return;
}
