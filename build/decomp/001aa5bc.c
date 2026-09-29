// OoT3D decomp @ 001aa5bc  name=FUN_001aa5bc  size=836

void FUN_001aa5bc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;

  uVar3 = DAT_001aa908;
  FUN_00372d4c(DAT_001aa908,DAT_001aa900,param_1 + 0xbc,DAT_001aa904);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 1) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001aa90c + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),
                 0xffffffff,0,0,0);
    FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,2);
    *(undefined4 *)(param_1 + 0x3fc) = 7;
    return;
  }
  if (sVar1 == 2) {
    iVar2 = param_1 + 0x1a4;
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001aa90c + iVar4) != 0)) {
      iVar4 = iVar4 + 0x3a5c;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0);
    FUN_00353e78(iVar4 + 0x10,param_2,iVar2,uVar5,*(undefined4 *)(param_1 + 0x178),0xffffffff,0,0,0)
    ;
    FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,2);
    uVar5 = FUN_0036ae14(iVar2,0xf);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_001aa910,uVar3,uVar5,uVar3,iVar2,DAT_001aa914,2);
    *(undefined4 *)(param_1 + 0x3fc) = 0x15;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    return;
  }
  if (sVar1 == 3) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001aa90c + iVar2) != 0)) {
      iVar2 = iVar2 + 0x3a5c;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
    FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0xc,0,0
                 ,0);
    FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,2);
    *(undefined4 *)(param_1 + 0x3fc) = 0x18;
    *(undefined4 *)(param_1 + 0x400) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined2 *)(param_1 + 0x3f8) = 3;
    return;
  }
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001aa90c + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0xe,0,0,0
              );
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,1,2);
  *(undefined4 *)(param_1 + 0xc4) = DAT_001aa918;
  *(undefined2 *)(param_1 + 0x3f4) = 1;
  *(undefined2 *)(param_1 + 0x3f8) = 3;
  return;
}
