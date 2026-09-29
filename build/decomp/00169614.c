// OoT3D decomp @ 00169614  name=FUN_00169614  size=1284

void FUN_00169614(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;

  uVar1 = DAT_001699f8;
  FUN_00372d4c(DAT_001699f8,DAT_001699f0,param_1 + 0xbc,DAT_001699f4);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001699fc + iVar6) != 0)
     ) {
    iVar6 = iVar6 + 0x3a5c;
  }
  else {
    iVar6 = 0;
  }
  uVar7 = ObjectBankArchive_00358ef8(iVar6 + 0x10,0);
  FUN_00353e78(iVar6 + 0x10,param_2,param_1 + 0x1a4,uVar7,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x228,param_1 + 0x604,0x13);
  FUN_0035c358(param_1 + 0x9e0,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xbb4,param_1,DAT_00169a00);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined2 *)(param_1 + 0xc3c) = 0;
  *(undefined2 *)(param_1 + 0xc2a) = 0;
  uVar7 = DAT_00169a04;
  *(undefined2 *)(param_1 + 0xc3e) = 0;
  *(undefined2 *)(param_1 + 0xc12) = 0x14;
  uVar11 = DAT_00169a08;
  *(undefined4 *)(param_1 + 0xc0c) = uVar7;
  FUN_0037572c(uVar11,param_1);
  uVar7 = DAT_00169a0c;
  iVar6 = 6;
  *(undefined4 *)(param_1 + 100) = DAT_00169a0c;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  iVar2 = DAT_00169a18;
  *(undefined4 *)(param_1 + 0x70) = DAT_00169a10;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  uVar3 = DAT_00169a2c;
  uVar11 = DAT_00169a20;
  uVar7 = DAT_00169a14;
  if (*(short *)(param_1 + 0x1c) == 1) {
    bVar9 = (*(ushort *)(iVar2 + 0xef8) & 0x800) == 0;
    if (bVar9) {
      iVar6 = *(int *)(iVar2 + 4);
    }
    if (bVar9 && iVar6 == 0) {
      if ((*(ushort *)(iVar2 + 0xef8) & 0x400) == 0) {
        *(undefined4 *)(param_1 + 0xbac) = DAT_00169a28;
        *(undefined4 *)(param_1 + 0xbb0) = uVar3;
        *(undefined2 *)(param_1 + 0xc10) = 2;
        FUN_00373d40(param_1 + 0x1a4,1);
        *(undefined4 *)(param_1 + 0xc40) = 1;
        *(undefined4 *)(param_1 + 0xcc) = uVar7;
        return;
      }
      *(undefined4 *)(param_1 + 0xbac) = DAT_00169a24;
      *(undefined4 *)(param_1 + 0xbb0) = uVar11;
      *(undefined2 *)(param_1 + 0xc10) = 0;
      FUN_00373d40(param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0xc40) = 0;
      return;
    }
  }
  else if (*(short *)(param_1 + 0x1c) == 2) {
    if ((((*(ushort *)(iVar2 + 0xef8) & 0x800) != 0) && (*(int *)(iVar2 + 4) == 0)) &&
       ((*(short *)(param_2 + 0x104) != 0x36 || (*(int *)(iVar2 + 0x10) == 0)))) {
      *(undefined4 *)(param_1 + 0xbac) = DAT_00169a1c;
      *(undefined4 *)(param_1 + 0xbb0) = uVar11;
      *(undefined2 *)(param_1 + 0xc10) = 0;
      FUN_00373d40(param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0xc40) = 0;
      return;
    }
  }
  else if (*(short *)(param_2 + 0x104) == 0x5f) {
    if ((*(ushort *)(iVar2 + 0xeee) & 0x10) == 0) {
      if ((*(ushort *)(iVar2 + 0xeee) & 8) != 0) {
        *(undefined4 *)(param_1 + 0xbac) = DAT_00169a30;
        *(undefined4 *)(param_1 + 0xbb0) = uVar11;
        *(undefined2 *)(param_1 + 0xc10) = 0;
        FUN_00373d40(param_1 + 0x1a4,0);
        *(undefined4 *)(param_1 + 0xc40) = 0;
        return;
      }
LAB_00169b40:
      *(undefined4 *)(param_1 + 0xbac) = DAT_00169b90;
      *(undefined4 *)(param_1 + 0xbb0) = uVar3;
      *(undefined2 *)(param_1 + 0xc10) = 2;
      FUN_00373d40(param_1 + 0x1a4,1);
      *(undefined4 *)(param_1 + 0xc40) = 1;
      *(undefined4 *)(param_1 + 0xcc) = uVar7;
      return;
    }
  }
  else {
    if (*(short *)(param_2 + 0x104) != 0x4c) goto LAB_00169b40;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xeee);
    bVar9 = (*(ushort *)(iVar2 + 0xeee) & 0x10) != 0;
    if (bVar9) {
      uVar8 = *(uint *)(iVar2 + 4);
    }
    if (bVar9 && uVar8 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        *(undefined4 *)(param_1 + 0xbac) = DAT_00169b8c;
        *(undefined4 *)(param_1 + 0xbb0) = uVar3;
        *(undefined2 *)(param_1 + 0xc10) = 2;
        FUN_00373d40(param_1 + 0x1a4,1);
        *(undefined4 *)(param_1 + 0xc40) = 1;
        *(undefined4 *)(param_1 + 0xcc) = uVar7;
        return;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      *(undefined2 *)(param_1 + 0xc24) = 7;
      *(undefined2 *)(param_1 + 0xc22) = 7;
      *(undefined2 *)(param_1 + 0xc20) = 7;
      iVar6 = param_2 + 0x208c;
      uVar7 = z_actor_003738d0(*(float *)(param_1 + 0x28) + DAT_00169a3c,
                               *(float *)(param_1 + 0x2c) + DAT_00169a38,
                               *(float *)(param_1 + 0x30) + DAT_00169a34,iVar6,param_2,0x19,0,0,0,
                               0xd,1);
      *(undefined4 *)(param_1 + 0xc14) = uVar7;
      fVar5 = DAT_00169a48;
      fVar4 = DAT_00169a44;
      fVar10 = DAT_00169a40;
      uVar7 = z_actor_003738d0(*(float *)(param_1 + 0x28) - DAT_00169a48,
                               *(float *)(param_1 + 0x2c) + DAT_00169a44,
                               *(float *)(param_1 + 0x30) - DAT_00169a40,iVar6,param_2,0x19,0,0,0,
                               0xd,1);
      *(undefined4 *)(param_1 + 0xc18) = uVar7;
      uVar7 = z_actor_003738d0(*(float *)(param_1 + 0x28) + fVar5,*(float *)(param_1 + 0x2c) + fVar4
                               ,*(float *)(param_1 + 0x30) - fVar10,iVar6,param_2,0x19,0,0,0,0xd,1);
      *(undefined4 *)(param_1 + 0xc1c) = uVar7;
      FUN_003685f4(param_1,param_2);
      uVar11 = DAT_00169b88;
      uVar7 = DAT_00169b7c;
      iVar6 = DAT_00169b74;
      if ((*(ushort *)(DAT_00169b74 + 0x8a) & 0x400) == 0) {
        *(undefined4 *)(param_1 + 0xbac) = DAT_00169b84;
        *(undefined4 *)(param_1 + 0xbb0) = uVar11;
        *(undefined2 *)(param_1 + 0xc10) = 0;
        FUN_00373d40(param_1 + 0x1a4,5);
        *(undefined4 *)(param_1 + 0xc40) = 5;
        return;
      }
      *(undefined4 *)(param_1 + 0xbac) = DAT_00169b78;
      *(undefined4 *)(param_1 + 0xbb0) = uVar7;
      uVar7 = FUN_0036ae14(param_1 + 0x1a4,6);
      uVar11 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      uVar7 = FUN_0036ae14(param_1 + 0x1a4,6);
      fVar10 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_00169b80,fVar10 - DAT_00169b80,uVar11,uVar1,param_1 + 0x1a4,6,2);
      *(ushort *)(iVar6 + 0x8a) = *(ushort *)(iVar6 + 0x8a) & 0xfbff;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
