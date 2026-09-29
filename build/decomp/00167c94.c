// OoT3D decomp @ 00167c94  name=FUN_00167c94  size=744

void FUN_00167c94(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;

  FUN_003510b0(param_1,DAT_00167f7c);
  uVar2 = DAT_00167f84;
  uVar6 = DAT_00167f80;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  FUN_00372d4c(uVar2,uVar2,param_1 + 0xbc,0);
  *(undefined2 *)(param_1 + 0x956) = 0;
  *(undefined2 *)(param_1 + 0x958) = 0;
  fVar3 = DAT_00167f88;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar3;
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined1 *)(param_1 + 0xb7) = 8;
  *(undefined1 *)(param_1 + 0x966) = 0xff;
  *(undefined2 *)(param_1 + 0x95c) = 0xff;
  *(ushort *)(param_1 + 0x95a) = *(ushort *)(param_1 + 0x1c) >> 8;
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 0x80) == 0) {
    *(ushort *)(param_1 + 0x1c) = uVar1 & 0xff;
  }
  else {
    *(ushort *)(param_1 + 0x1c) = uVar1 | 0xff00;
  }
  iVar5 = DAT_00167f8c;
  *(undefined1 *)(param_1 + 0x962) = 0;
  *(undefined2 *)(param_1 + 0x95e) = 0;
  *(undefined1 *)(param_1 + 0x9c9) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  uVar4 = (uint)*(byte *)(param_1 + 0x1e);
  if (*(short *)(param_1 + 0x1c) < -1) {
    if ((uVar4 < 0x13) && (iVar5 = param_2 + uVar4 * 0x80, *(int *)(DAT_00167f90 + iVar5) != 0)) {
      iVar5 = iVar5 + 0x3a5c;
    }
    else {
      iVar5 = 0;
    }
    uVar6 = ObjectBankArchive_00358ef8(iVar5 + 0x10,1);
    *(undefined1 *)(param_1 + 0x19a) = 1;
    FUN_00372f38(param_1,param_2,param_1 + 0x9c4,1,0);
    FUN_00353e78(iVar5 + 0x10,param_2,param_1 + 0x1e0,uVar6,*(undefined4 *)(param_1 + 0x178),3,
                 param_1 + 0x264,param_1 + 0x5d8,0x11);
    *(undefined1 *)(param_1 + 0x123) = 0x2d;
  }
  else {
    if ((uVar4 < 0x13) && (iVar5 = param_2 + uVar4 * 0x80, *(int *)(DAT_00167f90 + iVar5) != 0)) {
      iVar5 = iVar5 + 0x3a5c;
    }
    else {
      iVar5 = 0;
    }
    uVar6 = ObjectBankArchive_00358ef8(iVar5 + 0x10,0);
    *(undefined1 *)(param_1 + 0x19a) = 1;
    FUN_00372f38(param_1,param_2,param_1 + 0x9c0,0,0);
    FUN_00353e78(iVar5 + 0x10,param_2,param_1 + 0x1e0,uVar6,*(undefined4 *)(param_1 + 0x178),3,
                 param_1 + 0x264,param_1 + 0x5d8,0x11);
    *(undefined1 *)(param_1 + 0x123) = 0x2a;
  }
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x968,param_1,DAT_00167f94);
  if (*(short *)(param_1 + 0x1c) < -2) {
    uVar6 = FUN_0036ae14(param_1 + 0x1e0,3);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar2,uVar6,DAT_00167f98,param_1 + 0x1e0,3,0);
    *(undefined1 *)(param_1 + 0x964) = 0xb;
    *(undefined2 *)(param_1 + 0x954) = 9;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    uVar6 = DAT_00167f9c;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(param_1 + 0xbc) = 0xc000;
    *(undefined1 *)(param_1 + 0x9c9) = 0;
    *(undefined4 *)(param_1 + 0x950) = uVar6;
  }
  else {
    FUN_0034f280(param_1);
  }
  FUN_00370734(param_1 + 0x1e0);
  if (*(short *)(param_1 + 0x1c) == 3) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
  }
  return;
}
