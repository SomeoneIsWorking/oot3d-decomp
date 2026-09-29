// OoT3D decomp @ 0018b964  name=FUN_0018b964  size=1316

void FUN_0018b964(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;

  uVar7 = DAT_0018bc78;
  FUN_00372d4c(DAT_0018bc78,DAT_0018bc70,param_1 + 0xbc,DAT_0018bc74);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar1 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0018bc7c + iVar1) != 0)
     ) {
    iVar1 = iVar1 + 0x3a5c;
  }
  else {
    iVar1 = 0;
  }
  FUN_00372f38(param_1,param_2,param_1 + 0xbac,1,param_1 + 0xbb4,2,param_1 + 0xbb0,3,0);
  uVar2 = ObjectBankArchive_00358ef8(iVar1 + 0x10,0);
  FUN_00353e78(iVar1 + 0x10,param_2,param_1 + 0x1a4,uVar2,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,param_1 + 0x228,param_1 + 0x604,0x13);
  iVar1 = FUN_0035010c(0x28);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_003500c4();
  }
  *(undefined4 *)(param_1 + 3000) = uVar2;
  FUN_0034ff2c(uVar2,4,4,10,1,0);
  FUN_0034fea8(*(undefined4 *)(param_1 + 3000),0,param_2,0x10,DAT_0018bc84,DAT_0018bc84,DAT_0018bc80
               ,DAT_0018bc80);
  FUN_0035c358(param_1 + 0x9e0,param_1 + 0x1a4,0,1,0xffffffff);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xbe8,param_1,DAT_0018bc88);
  FUN_00350318(param_1 + 0xa0,0,DAT_0018bc8c);
  if (((int)*(short *)(param_1 + 0x1c) & 0x1fU) - 3 < 0xb) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffcf;
  }
  iVar1 = DAT_0018bc94;
  iVar3 = DAT_0018bc90 + ((int)*(short *)(param_1 + 0x1c) & 0x1fU) * 10;
  uVar2 = VectorSignedToFloat((int)*(short *)(iVar3 + 6),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xc28) = uVar2;
  uVar2 = VectorSignedToFloat((int)*(short *)(iVar3 + 8),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xc2c) = uVar2;
  puVar4 = (undefined4 *)(iVar1 + (*(ushort *)(param_1 + 0x1c) & 0x1f) * 0x10);
  *(undefined4 *)(param_1 + 0xcc) = *puVar4;
  FUN_0037572c(puVar4[1],param_1);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(puVar4 + 2);
  uVar2 = DAT_0018bc98;
  fVar6 = (float)puVar4[3];
  *(float *)(param_1 + 0xc50) = fVar6;
  *(float *)(param_1 + 0xc50) = fVar6 + *(float *)(param_1 + 0xc28);
  FUN_003717ac(param_1 + 0x1a4,uVar2,0);
  *(undefined4 *)(param_1 + 0x70) = DAT_0018bc9c;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xc58) = uVar7;
  *(char *)(param_1 + 0xc4e) = (char)*(undefined2 *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xc46) = 0;
  *(undefined1 *)(param_1 + 0xc47) = 0;
  *(undefined1 *)(param_1 + 0xc49) = 0;
  *(undefined1 *)(param_1 + 0xc4a) = 0;
  *(undefined1 *)(param_1 + 0xc48) = 0;
  *(undefined2 *)(param_1 + 0xcaa) = 1;
  uVar2 = FUN_00348ff0(param_2,(*(ushort *)(param_1 + 0x1c) & 0x3e0) >> 5,0x1f);
  *(undefined4 *)(param_1 + 0xc40) = uVar2;
  iVar1 = DAT_0018bf10;
  switch(*(ushort *)(param_1 + 0x1c) & 0x1f) {
  case 0:
  case 5:
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(DAT_0018bc90 +
                                                       (*(ushort *)(param_1 + 0x1c) & 0x1f) * 10 + 8
                                                      ),(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorSignedToFloat((int)(short)(int)(fVar6 * DAT_0018bf08),(byte)(in_fpscr >> 0x15) & 3
                               );
    *(undefined4 *)(param_1 + 0xc2c) = uVar7;
    FUN_0035c464(param_1,param_2);
    return;
  case 1:
    if ((*(ushort *)(DAT_0018befc + 0x30) & 0x200) == 0) {
      *(ushort *)(DAT_0018befc + 0x30) = *(ushort *)(DAT_0018befc + 0x30) & 0xefff;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(DAT_0018bc90 +
                                                         (*(ushort *)(param_1 + 0x1c) & 0x1f) * 10 +
                                                        8),(byte)(in_fpscr >> 0x15) & 3);
      uVar7 = VectorSignedToFloat((int)(short)(int)(fVar6 * DAT_0018bf08),
                                  (byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xc2c) = uVar7;
      FUN_0035c464(param_1,param_2);
      *(undefined1 *)(param_1 + 0xc47) = 1;
      return;
    }
    FUN_0035c6b0(*(undefined4 *)(param_1 + 0xc40),param_1 + 0x28);
    iVar1 = DAT_0018bca0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
    if (((*(uint *)(iVar1 + 0xbc) & *(uint *)(DAT_0018bca4 + 4)) != 0) ||
       (((uint)*(ushort *)(iVar1 + 0xb6) &
        *(uint *)(DAT_0018bca4 + 4) << *(sbyte *)(DAT_0018bf00 + 2)) == 0)) goto LAB_0018bc5c;
    break;
  case 2:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    iVar3 = DAT_0018bf0c;
    *(undefined4 *)(param_1 + 200) = 0;
    if (*(byte *)((uint)*(byte *)(iVar3 + 0x2d) + iVar1) - 0x33 < 4) {
      *(undefined1 *)(param_1 + 0xc4b) = 1;
    }
    *(undefined1 *)(param_1 + 0xbf9) = 0;
    *(undefined1 *)(param_1 + 0xbfa) = 0xd;
    uVar7 = DAT_0018bca8;
    goto LAB_0018beb8;
  case 3:
    iVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) >> 10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc47) = 1;
      *(undefined4 *)(param_1 + 0xbbc) = DAT_0018bca8;
      return;
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  case 4:
    if ((*(ushort *)(DAT_0018befc + 0x2c) & 0x800) != 0) {
      FUN_0035c6b0(*(undefined4 *)(param_1 + 0xc40),param_1 + 0x28);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
    }
  default:
    uVar7 = DAT_0018bca8;
    goto LAB_0018beb8;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    bVar5 = (*(uint *)(DAT_0018bca0 + 0xbc) & *(uint *)(DAT_0018bca4 + 4)) == 0;
    iVar1 = DAT_0018bca0;
    if (bVar5) {
      iVar1 = *(int *)(DAT_0018bca0 + 4);
    }
    if (bVar5 && iVar1 == 0) {
      FUN_00374428(param_1);
    }
LAB_0018bc5c:
    *(undefined4 *)(param_1 + 0xbbc) = DAT_0018bca8;
    return;
  case 0xd:
    if ((*(int *)(DAT_0018bca0 + 4) == 0) ||
       ((*(uint *)(DAT_0018bca0 + 0xbc) & *(uint *)(DAT_0018bca4 + 0x4c)) == 0)) {
      FUN_00374428(param_1);
    }
  }
  FUN_003717ac(param_1 + 0x1a4,DAT_0018bc98,1);
  *(undefined4 *)(param_1 + 0x1e4) = uVar7;
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  *(undefined1 *)(param_1 + 0xc49) = 1;
  uVar7 = DAT_0018bf04;
LAB_0018beb8:
  *(undefined4 *)(param_1 + 0xbbc) = uVar7;
  return;
}
