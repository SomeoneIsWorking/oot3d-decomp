// OoT3D decomp @ 001ab4f0  name=FUN_001ab4f0  size=504

void FUN_001ab4f0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar5 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001ab6e8 + iVar5) != 0)
     ) {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x2f8) = iVar5 + 0x10;
  uVar3 = DAT_001ab6f0;
  uVar2 = DAT_001ab6ec;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (2 < sVar1) {
    iVar8 = param_1 + 0x1a4;
    if (sVar1 == 3) {
      uVar4 = 10;
      uVar6 = 0x11;
    }
    else if (sVar1 == 4) {
      uVar4 = 0xb;
      uVar6 = 0x12;
    }
    else if (sVar1 == 5) {
      uVar4 = 3;
      uVar6 = 0x13;
    }
    else {
      uVar4 = 1;
      uVar6 = 0x17;
    }
    uVar4 = ObjectBankArchive_00358ef8(iVar5 + 0x10,uVar4);
    FUN_00353e78(*(undefined4 *)(param_1 + 0x2f8),param_2,iVar8,uVar4,
                 *(undefined4 *)(param_1 + 0x178),0,param_1 + 0x228,param_1 + 0x290,1);
    uVar4 = FUN_0036ae14(iVar8,uVar6);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar3,uVar2,uVar4,uVar2,iVar8,uVar6,2);
    *(undefined4 *)(param_1 + 0x2fc) = 3;
    *(undefined4 *)(param_1 + 0x300) = 0;
    return;
  }
  if (sVar1 == 0) {
    uVar6 = 2;
    uVar7 = 0x14;
    uVar4 = DAT_001ab6f8;
  }
  else if (sVar1 == 1) {
    uVar6 = 0xd;
    uVar7 = 0x16;
    uVar4 = DAT_001ab6f4;
  }
  else {
    uVar6 = 0xc;
    uVar7 = 0x15;
    uVar4 = DAT_001ab6fc;
  }
  FUN_00372d4c(DAT_001ab6ec,uVar4,param_1 + 0xbc,DAT_001ab700);
  iVar5 = param_1 + 0x1a4;
  uVar4 = ObjectBankArchive_00358ef8(*(undefined4 *)(param_1 + 0x2f8),uVar6);
  FUN_00358ea8(*(undefined4 *)(param_1 + 0x2f8),param_2,iVar5,uVar4,*(undefined4 *)(param_1 + 0x178)
               ,0,param_1 + 0x228,param_1 + 0x290,1);
  uVar4 = FUN_0036ae14(iVar5,uVar7);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar3,uVar2,uVar4,uVar2,iVar5,uVar7,2);
  return;
}
