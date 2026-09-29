// OoT3D decomp @ 0012ee3c  name=FUN_0012ee3c  size=1584

void FUN_0012ee3c(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  bool bVar15;
  uint in_fpscr;
  float local_40;
  undefined1 auStack_3c [4];

  uVar5 = DAT_0012f224;
  uVar4 = DAT_0012f220;
  uVar3 = DAT_0012f21c;
  uVar10 = DAT_0012f218;
  if (*(char *)(param_1 + 0x65d) != '\0') {
    *(char *)(param_1 + 0x65d) = *(char *)(param_1 + 0x65d) + -1;
  }
  fVar7 = DAT_0012f22c;
  fVar6 = DAT_0012f228;
  bVar1 = *(byte *)(param_1 + 0x671);
  bVar13 = bVar1 & 2;
  bVar15 = (bVar1 & 2) == 0;
  if (!bVar15) {
    bVar13 = *(byte *)(param_1 + 0x638);
  }
  if (bVar15 || bVar13 < 6) {
    bVar15 = *(char *)(param_1 + 0xb7) != '\0';
    uVar11 = param_2;
    if (bVar15) {
      uVar11 = (uint)*(byte *)(param_2 + 0x208e);
    }
    if (((bVar15 && uVar11 != 0) && (*(int *)(param_1 + 0x98) <= DAT_0012f250)) &&
       ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
      cVar2 = *(char *)(param_1 + 0x639);
      bVar15 = cVar2 == '\x02';
      if (bVar15) {
        cVar2 = *(char *)(param_1 + 0x65d);
      }
      if (bVar15 && cVar2 == '\0') {
LAB_0012f038:
        *(undefined1 *)(param_1 + 0x639) = 1;
        *(short *)(param_1 + 0x658) = (short)uVar3;
        *(undefined4 *)(param_1 + 100) = uVar4;
        FUN_00375bcc(param_1,uVar5);
        uVar3 = DAT_0012f24c;
        *(undefined4 *)(param_1 + 0x70) = uVar10;
        *(undefined4 *)(param_1 + 0x63c) = uVar3;
      }
      else if ((5 < *(byte *)(param_1 + 0x638)) || (5 < *(byte *)(param_1 + 0x638))) {
        FUN_003660fc(DAT_0012f254,param_1 + 0x1a4,1);
        FUN_00375bcc(param_1,uVar5);
        *(undefined1 *)(param_1 + 0x639) = 2;
        *(float *)(param_1 + 0x6c) = fVar7;
        *(undefined4 *)(param_1 + 0x70) = uVar10;
        *(undefined2 *)(param_1 + 0x658) = 0x2ee;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x671) = bVar1 & 0xfd;
    if (*(char *)(param_1 + 0xb9) == '\x0e') goto LAB_0012f49c;
    *(char *)(param_1 + 0x65c) = *(char *)(param_1 + 0xb9);
    FUN_00375fd0(param_1,*(undefined4 *)(param_1 + 0x67c),0);
    uVar9 = DAT_0012f234;
    uVar8 = DAT_0012f230;
    if (*(char *)(param_1 + 0xb9) == '\x01' || *(char *)(param_1 + 0xb9) == '\x0f') {
      if (*(char *)(param_1 + 0x638) != '\a') {
        FUN_00375ed8(param_1,0,0x78,0,0x50);
        FUN_00375eb8(param_1);
        uVar10 = FUN_0036ae14(param_1 + 0x1a4,0);
        uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(fVar7,fVar7,uVar10,uVar8,param_1 + 0x1a4,0);
        *(undefined1 *)(param_1 + 0x638) = 7;
        *(undefined4 *)(param_1 + 0x6c) = uVar9;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        if (*(char *)(param_1 + 0x65c) == '\x0f') {
          *(undefined1 *)(param_1 + 0x65b) = 0x48;
        }
        FUN_00375bcc(param_1,DAT_0012f238);
        *(undefined4 *)(param_1 + 0x63c) = DAT_0012f23c;
      }
    }
    else {
      if ((*(short *)(param_1 + 0x11a) == 0) || ((*(uint *)(param_1 + 0x11c) & 0x400000) == 0)) {
        FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
        FUN_00375eb8(param_1);
      }
      if (*(char *)(param_1 + 0xb7) == '\0') {
        *(float *)(param_1 + 0x6c) = fVar7;
        *(undefined1 *)(param_1 + 0x638) = 0;
        *(undefined2 *)(param_1 + 0x11a) = 0;
        *(undefined4 *)(param_1 + 0x63c) = DAT_0012f240;
      }
      else {
        FUN_00375bcc(param_1,DAT_0012f244);
        if (*(char *)(param_1 + 0x639) == '\x02') goto LAB_0012f038;
        *(undefined1 *)(param_1 + 0x638) = 3;
        FUN_00370350(uVar8,param_1 + 0x1a4,0);
        *(undefined4 *)(param_1 + 0x6c) = uVar9;
        uVar3 = DAT_0012f248;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        *(undefined4 *)(param_1 + 0x70) = uVar10;
        *(undefined4 *)(param_1 + 0x63c) = uVar3;
      }
    }
  }
  if (*(char *)(param_1 + 0xb9) != '\x0e') {
    (**(code **)(param_1 + 0x63c))(param_1,param_2);
    FUN_00376864(param_1);
    FUN_00376340(DAT_0012f268,DAT_0012f264,fVar6,param_2,param_1,*(undefined4 *)(param_1 + 0x654));
    if ((*(short *)(param_1 + 0x1c) == -2) && ((*(ushort *)(param_1 + 0x90) & 0x20) != 0)) {
      uVar10 = *(undefined4 *)(param_1 + 0x7c);
      iVar14 = param_2 + 0xa98;
      if ((((*(uint *)(param_2 + 0x5bf4) & 7) == 0) || (*(float *)(param_1 + 100) < fVar7)) &&
         ((iVar12 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x6e8),*(undefined4 *)(param_1 + 0x6f0),
                                 param_2,iVar14,&local_40,auStack_3c), iVar12 != 0 &&
          (fVar7 <= local_40 - *(float *)(param_1 + 0x6ec))))) {
        *(float *)(param_1 + 0x6ec) = local_40;
        FUN_00362068(param_2,param_1 + 0x6e8,0,0xdc,0);
      }
      if (((((*(int *)(param_2 + 0x5bf4) + 2U & 7) == 0) || (*(float *)(param_1 + 100) < fVar7)) &&
          (iVar12 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x6f4),*(undefined4 *)(param_1 + 0x6fc),
                                 param_2,iVar14,&local_40,auStack_3c), iVar12 != 0)) &&
         (fVar7 <= local_40 - *(float *)(param_1 + 0x6f8))) {
        *(float *)(param_1 + 0x6f8) = local_40;
        FUN_00362068(param_2,param_1 + 0x6f4,0,0xdc,0);
      }
      if ((((*(int *)(param_2 + 0x5bf4) + 4U & 7) == 0) || (*(float *)(param_1 + 100) < fVar7)) &&
         ((iVar12 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x6d0),*(undefined4 *)(param_1 + 0x6d8),
                                 param_2,iVar14,&local_40,auStack_3c), iVar12 != 0 &&
          (fVar7 <= local_40 - *(float *)(param_1 + 0x6d4))))) {
        *(float *)(param_1 + 0x6d4) = local_40;
        FUN_00362068(param_2,param_1 + 0x6d0,0,0xdc,0);
      }
      if ((((*(int *)(param_2 + 0x5bf4) + 1U & 7) == 0) || (*(float *)(param_1 + 100) < fVar7)) &&
         ((iVar14 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x6dc),*(undefined4 *)(param_1 + 0x6e4),
                                 param_2,iVar14,&local_40,auStack_3c), iVar14 != 0 &&
          (fVar7 <= local_40 - *(float *)(param_1 + 0x6e0))))) {
        *(float *)(param_1 + 0x6e0) = local_40;
        FUN_00362068(param_2,param_1 + 0x6dc,0,0xdc,0);
      }
      *(undefined4 *)(param_1 + 0x7c) = uVar10;
    }
    if ((*(ushort *)(param_1 + 0x90) & 3) == 0) {
      FUN_00375a18(param_1 + 0xbc,0,1,1000,0);
      if (*(byte *)(param_1 + 0x639) < 2) {
        FUN_00375a18(param_1 + 0xc0,0,1,1000,0);
        if (fVar7 < *(float *)(param_1 + 0xc4)) {
          *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - DAT_0012f4ec;
        }
      }
    }
    else {
      FUN_0035e7b4(param_1,(int)*(short *)(param_1 + 0xbe),param_1 + 0xbc);
      if (1 < *(byte *)(param_1 + 0x639)) {
        *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + 0x7fff;
      }
    }
  }
LAB_0012f49c:
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar6;
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x660);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x660);
  return;
}
