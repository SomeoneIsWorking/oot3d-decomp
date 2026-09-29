// OoT3D decomp @ 00166b18  name=FUN_00166b18  size=896

void FUN_00166b18(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short *psVar5;
  float *pfVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;

  uVar1 = DAT_00166e44;
  FUN_00372d4c(DAT_00166e44,DAT_00166e3c,param_1 + 0xbc,DAT_00166e40);
  FUN_00353dd0(param_2);
  FUN_0034fb3c(param_2,param_1 + 0xd04,param_1,DAT_00166e48);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00166e4c + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,param_1 + 0x228,param_1 + 0x6a0,0x16);
  FUN_0035c358(param_1 + 0xb18,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
  iVar2 = DAT_00166e50;
  switch((int)*(short *)(param_1 + 0x1c) & 0xff) {
  case 2:
    FUN_0034f4e8(uVar1,param_1,0,2);
    *(undefined4 *)(param_1 + 0xce8) = 7;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    return;
  case 3:
    FUN_0034f4e8(uVar1,param_1,0x14,0);
    *(undefined4 *)(param_1 + 0xce8) = 10;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(ushort *)(iVar2 + 0xfe) = *(ushort *)(iVar2 + 0xfe) | 0x20;
    return;
  case 4:
    FUN_0034f4e8(uVar1,param_1,0x10,0);
    *(undefined4 *)(param_1 + 0xce8) = 0xd;
    break;
  case 5:
    FUN_0034f4e8(uVar1,param_1,1,0);
    *(undefined4 *)(param_1 + 0xce8) = 0x14;
    *(undefined4 *)(param_1 + 0xcec) = 0;
    break;
  case 6:
    uVar4 = (uint)*(ushort *)(DAT_00166e50 + 0xfe);
    bVar7 = (*(ushort *)(DAT_00166e50 + 0xfe) & 0x20) == 0;
    if (bVar7) {
      uVar4 = *(uint *)(DAT_00166e54 + 4);
    }
    if (!bVar7 || uVar4 != 1) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    pfVar6 = (float *)(param_1 + 0xd6c);
    if (*(int *)(DAT_00166e58 + param_2) != 0) {
      psVar5 = *(short **)
                (*(int *)(DAT_00166e58 + param_2) +
                 ((uint)((int)*(short *)(param_1 + 0x1c) << 0x10) >> 0x18) * 8 + 4);
      fVar8 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xd60) = fVar8;
      uVar3 = VectorSignedToFloat((int)psVar5[1],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xd64) = uVar3;
      uVar3 = VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xd68) = uVar3;
      fVar8 = (float)VectorSignedToFloat((int)psVar5[3],(byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar8;
      uVar3 = VectorSignedToFloat((int)psVar5[4],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xd70) = uVar3;
      fVar8 = (float)VectorSignedToFloat((int)psVar5[5],(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xd74) = fVar8;
      fVar8 = (float)FUN_003696ec(*pfVar6 - *(float *)(param_1 + 0xd60),
                                  fVar8 - *(float *)(param_1 + 0xd68));
      *(short *)(DAT_00166e60 + param_1) = (short)(int)(fVar8 * DAT_00166e5c);
    }
    if ((*(ushort *)(iVar2 + 0xfe) & 0x10) == 0) {
      FUN_0034f4e8(uVar1,param_1,0xf,0);
      *(undefined4 *)(param_1 + 0xce8) = 0x18;
      *(undefined4 *)(param_1 + 0xcec) = 1;
      return;
    }
    FUN_0034f4e8(uVar1,param_1,9,0);
    *(undefined4 *)(param_1 + 0xd5c) = 1;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 9;
    *(float *)(param_1 + 0x28) = *pfVar6;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xd70);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0xd74);
    *(undefined4 *)(param_1 + 0xce8) = 0x1d;
    *(undefined4 *)(param_1 + 0xcec) = 1;
    return;
  default:
    FUN_0034f4e8(uVar1,param_1,0x12,0);
    *(undefined4 *)(param_1 + 0xc4) = DAT_00166ed4;
    return;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}
