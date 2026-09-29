// OoT3D decomp @ 00445688  name=FUN_00445688  size=4928

void FUN_00445688(void)

{
  char cVar1;
  byte bVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char local_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  float local_64 [4];
  float local_54 [4];
  float fStack_44;
  float fStack_40;

  local_54[0] = *DAT_004459f4;
  local_54[1] = DAT_004459f4[1];
  local_54[2] = DAT_004459f4[2];
  local_54[3] = DAT_004459f4[3];
  fStack_44 = DAT_004459f4[4];
  fStack_40 = DAT_004459f4[5];
  local_64[0] = DAT_004459f4[6];
  local_64[1] = DAT_004459f4[7];
  local_64[2] = DAT_004459f4[8];
  local_64[3] = DAT_004459f4[9];
  FUN_002f9484(auStack_68,auStack_6c,local_70);
  fVar5 = DAT_00445a10;
  fVar4 = DAT_00445a0c;
  fVar16 = DAT_00445a08;
  uVar14 = DAT_00445a04;
  fVar15 = DAT_004459fc;
  puVar3 = DAT_004459f8;
  iVar12 = DAT_00445a00 + 0x8c;
  iVar10 = DAT_00445a00 + 0x1370;
  switch(*(undefined4 *)(DAT_004459f8 + 0x1c)) {
  case 1:
    FUN_0037547c(DAT_00445a1c,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
    FUN_002e64bc(local_54[*(int *)(puVar3 + 0x3c)],local_64[*(int *)(puVar3 + 0x3e)],
                 *(undefined4 *)(puVar3 + 0x26));
    FUN_002f8d74(*(undefined4 *)(puVar3 + 0x20),0,0x7a);
    FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),0,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                 (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x2a,0x2a);
    iVar12 = DAT_00445a20;
    if (*(int *)(DAT_00445a20 + 4) == 0) {
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),1,400,0,0x2a,0x2a);
    }
    else {
      FUN_002f8d74(*(undefined4 *)(puVar3 + 0x20),1,4);
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),1,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4)
                   ,(int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x2a,0x2a);
    }
    if (*(int *)(iVar12 + 8) == 0) {
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),2,400,0,0x2a,0x2a);
    }
    else {
      FUN_002f8d74(*(undefined4 *)(puVar3 + 0x20),2,0xc);
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),2,
                   (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                   (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x2a,0x2a);
    }
    if (*(int *)(iVar12 + 0xc) == 0) {
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),3,400,0,0x2a,0x2a);
    }
    else {
      FUN_002f8d74(*(undefined4 *)(puVar3 + 0x20),3,0x12);
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),3,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4)
                   ,(int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x2a,0x2a);
    }
    cVar1 = *(char *)((uint)*(byte *)(DAT_00445a24 + 3) + iVar10);
    if (cVar1 == '\x03') {
      puVar3[0x50] = 0;
      puVar3[0x51] = 0;
      puVar3[0x4e] = 0;
      puVar3[0x4f] = 0;
    }
    else if (cVar1 == '8') {
      puVar3[0x50] = 0;
      puVar3[0x51] = 0;
      puVar3[0x4e] = 1;
      puVar3[0x4f] = 0;
    }
    else {
      if (cVar1 == '9') {
        puVar3[0x4e] = 0;
        puVar3[0x4f] = 0;
      }
      else {
        if (cVar1 != ':') goto LAB_004459ac;
        puVar3[0x4e] = 1;
        puVar3[0x4f] = 0;
      }
      puVar3[0x50] = 1;
      puVar3[0x51] = 0;
    }
LAB_004459ac:
    puVar3[0x38] = 0xffff;
    puVar3[0x39] = 0xffff;
    FUN_002f8b80(fVar15,DAT_00445a28,*(undefined4 *)(puVar3 + 0x12),0x25,0);
    puVar3[0x1c] = 2;
    puVar3[0x1d] = 0;
    FUN_0033c25c(1);
    FUN_002eb72c(0,1);
    break;
  case 2:
    bVar11 = false;
    bVar13 = false;
    if (*(int *)(DAT_004459f8 + 0x38) == -1) {
      uVar6 = VectorFloatToUnsigned(local_64[*(int *)(DAT_004459f8 + 0x3e)],3);
      uVar9 = VectorFloatToUnsigned(local_54[*(int *)(DAT_004459f8 + 0x3c)],3);
      iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,0);
      if (iVar10 == 0) {
        uVar6 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)],3);
        uVar9 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar4,3);
        iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,0);
        if (iVar10 == 0) {
          uVar6 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar4,3);
          uVar9 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)],3);
          iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,0);
          if (iVar10 == 0) {
            uVar6 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar4,3);
            uVar9 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar4,3);
            iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,0);
            if (iVar10 == 0) {
              if (local_70[0] != '\0') {
                uVar9 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] - DAT_00445eb8,3);
                uVar6 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] - DAT_00445eb8,3);
                iVar10 = FUN_0033f428(uVar6 & 0xffff,uVar9 & 0xffff,0x78,0x78,0);
                bVar13 = iVar10 == 0;
              }
              goto code_r0x00445dcc;
            }
            puVar3[0x38] = 3;
            puVar3[0x39] = 0;
            puVar3[0x4e] = 1;
            puVar3[0x4f] = 0;
          }
          else {
            puVar3[0x38] = 2;
            puVar3[0x39] = 0;
            puVar3[0x4e] = 0;
            puVar3[0x4f] = 0;
          }
          puVar3[0x50] = 1;
          puVar3[0x51] = 0;
          goto code_r0x00445dcc;
        }
        puVar3[0x38] = 1;
        puVar3[0x39] = 0;
        puVar3[0x4e] = 1;
        puVar3[0x4f] = 0;
      }
      else {
        puVar3[0x38] = 0;
        puVar3[0x39] = 0;
        puVar3[0x4e] = 0;
        puVar3[0x4f] = 0;
      }
      puVar3[0x50] = 0;
      puVar3[0x51] = 0;
    }
    else {
      uVar6 = VectorFloatToUnsigned(local_64[*(int *)(DAT_004459f8 + 0x3e)],3);
      uVar9 = VectorFloatToUnsigned(local_54[*(int *)(DAT_004459f8 + 0x3c)],3);
      iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,2);
      if (iVar10 == 0) {
        uVar6 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)],3);
        uVar9 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar4,3);
        iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,2);
        if (iVar10 == 0) {
          uVar6 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar4,3);
          uVar9 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)],3);
          iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,2);
          if (iVar10 == 0) {
            uVar6 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar4,3);
            uVar9 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar4,3);
            iVar10 = FUN_0033f428(uVar9 & 0xffff,uVar6 & 0xffff,0x30,0x30,2);
            if ((iVar10 != 0) && (*(int *)(puVar3 + 0x38) == 3)) goto LAB_00445db4;
          }
          else if (*(int *)(puVar3 + 0x38) == 2) {
LAB_00445db4:
            bVar11 = true;
          }
        }
        else if (*(int *)(puVar3 + 0x38) == 1) goto LAB_00445db4;
      }
      else if (*(int *)(puVar3 + 0x38) == 0) goto LAB_00445db4;
      if (local_70[0] == '\0') {
        puVar3[0x38] = 0xffff;
        puVar3[0x39] = 0xffff;
      }
    }
code_r0x00445dcc:
    uVar6 = FUN_0033b5d0();
    if (((uVar6 & 0x40) != 0) && (*(int *)(puVar3 + 0x50) == 1)) {
      FUN_0037547c(DAT_00445ebc,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
      puVar3[0x50] = 0;
      puVar3[0x51] = 0;
      if (*(int *)(DAT_00445a20 + *(int *)(puVar3 + 0x4e) * 4) == 0) {
        FUN_002eb72c(0,0xffffffff);
      }
      else {
        FUN_002eb72c(0,1);
      }
    }
    uVar6 = FUN_0033b5d0();
    if (((uVar6 & 0x80) != 0) && (*(int *)(puVar3 + 0x50) == 0)) {
      FUN_0037547c(DAT_00445ebc,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
      puVar3[0x50] = 1;
      puVar3[0x51] = 0;
      if (*(int *)(DAT_00445a20 + *(int *)(puVar3 + 0x4e) * 4 + 8) == 0) {
        FUN_002eb72c(0,0xffffffff);
      }
      else {
        FUN_002eb72c(0,1);
      }
    }
    uVar6 = FUN_0033b5d0();
    if (((uVar6 & 0x10) != 0) && (*(int *)(puVar3 + 0x4e) == 0)) {
      FUN_0037547c(DAT_00445ebc,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
      puVar3[0x4e] = 1;
      puVar3[0x4f] = 0;
      if (*(int *)(DAT_00445a20 + *(int *)(puVar3 + 0x50) * 8 + 4) == 0) {
        FUN_002eb72c(0,0xffffffff);
      }
      else {
        FUN_002eb72c(0,1);
      }
    }
    uVar6 = FUN_0033b5d0();
    if (((uVar6 & 0x20) != 0) && (*(int *)(puVar3 + 0x4e) == 1)) {
      FUN_0037547c(DAT_00445ebc,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
      puVar3[0x4e] = 0;
      puVar3[0x4f] = 0;
      if (*(int *)(DAT_00445a20 + *(int *)(puVar3 + 0x50) * 8) == 0) {
        FUN_002eb72c(0,0xffffffff);
      }
      else {
        FUN_002eb72c(0,1);
      }
    }
    uVar6 = FUN_0033b5ec();
    uVar14 = DAT_00446328;
    if ((uVar6 & 1) != 0 || bVar11) {
      iVar10 = *(int *)(puVar3 + 0x4e);
      iVar7 = *(int *)(puVar3 + 0x50);
      if (iVar10 == 0 && iVar7 == 0) {
        if (*(char *)((uint)*(byte *)(DAT_00445a24 + 3) + iVar12) == '\x03') {
LAB_00446368:
          bVar13 = true;
        }
        else {
          FUN_0037547c(DAT_00445a1c,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
          FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,0x7a);
          FUN_002f8ce0(uVar14,*(undefined4 *)(puVar3 + 0x22),0);
          FUN_002f8d40(*(undefined4 *)(puVar3 + 0x22),0,
                       (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                       (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x2a,0x2a);
          uVar14 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar16,3);
          puVar3[10] = (ushort)uVar14;
          uVar14 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar16,3);
          puVar3[0xb] = (ushort)uVar14;
          puVar3[0x48] = 3;
          puVar3[0x49] = 0;
          puVar3[0x40] = 0;
          puVar3[0x41] = 0;
          puVar3[0x1c] = 3;
          puVar3[0x1d] = 0;
          FUN_002eb72c(0,1);
        }
      }
      else if (iVar10 == 1) {
        if (iVar7 == 0) {
          if (*(int *)(DAT_00445a20 + 4) == 0) goto LAB_0044645c;
          if (*(char *)((uint)*(byte *)(DAT_00445a24 + 3) + iVar12) == '8') goto LAB_00446368;
          FUN_0037547c(DAT_0044632c,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
          FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,4);
          FUN_002f8ce0(uVar14,*(undefined4 *)(puVar3 + 0x22),0);
          FUN_002f8d40(*(undefined4 *)(puVar3 + 0x22),0,
                       (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4),
                       (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x2a,0x2a);
          uVar14 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar4,3);
          puVar3[10] = (ushort)uVar14;
          uVar14 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar16,3);
          puVar3[0xb] = (ushort)uVar14;
          puVar3[0x48] = 0x38;
          puVar3[0x49] = 0;
          puVar3[0x1c] = 3;
          puVar3[0x1d] = 0;
          puVar3[0x40] = 0;
          puVar3[0x41] = 0;
          FUN_002eb72c(0,1);
        }
        else {
LAB_0044633c:
          if ((iVar7 != 1) || (*(int *)(DAT_00445a20 + 0xc) == 0)) goto LAB_0044645c;
          if (*(char *)((uint)*(byte *)(DAT_00445a24 + 3) + iVar12) == ':') goto LAB_00446368;
          FUN_0037547c(DAT_004467c8,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
          FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,0x12);
          FUN_002f8ce0(uVar14,*(undefined4 *)(puVar3 + 0x22),0);
          FUN_002f8d40(*(undefined4 *)(puVar3 + 0x22),0,
                       (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4),
                       (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x2a,0x2a);
          uVar14 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar4,3);
          puVar3[10] = (ushort)uVar14;
          uVar14 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar5,3);
          puVar3[0xb] = (ushort)uVar14;
          puVar3[0x48] = 0x3a;
          puVar3[0x49] = 0;
          puVar3[0x1c] = 3;
          puVar3[0x1d] = 0;
          puVar3[0x40] = 0;
          puVar3[0x41] = 0;
          FUN_002eb72c(0,1);
        }
      }
      else {
        if (iVar10 == 0) {
          if ((iVar7 == 1) && (*(int *)(DAT_00445a20 + 8) != 0)) {
            if (*(char *)((uint)*(byte *)(DAT_00445a24 + 3) + iVar12) == '9') goto LAB_00446368;
            FUN_0037547c(DAT_00446330,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
            FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,0xc);
            FUN_002f8ce0(uVar14,*(undefined4 *)(puVar3 + 0x22),0);
            FUN_002f8d40(*(undefined4 *)(puVar3 + 0x22),0,
                         (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                         (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x2a,0x2a);
            uVar14 = VectorFloatToUnsigned(local_54[*(int *)(puVar3 + 0x3c)] + fVar16,3);
            puVar3[10] = (ushort)uVar14;
            uVar14 = VectorFloatToUnsigned(local_64[*(int *)(puVar3 + 0x3e)] + fVar5,3);
            puVar3[0xb] = (ushort)uVar14;
            puVar3[0x48] = 0x39;
            puVar3[0x49] = 0;
            puVar3[0x1c] = 3;
            puVar3[0x1d] = 0;
            puVar3[0x40] = 0;
            puVar3[0x41] = 0;
            FUN_002eb72c(0,1);
            goto LAB_00446468;
          }
        }
        else if (iVar10 == 1) goto LAB_0044633c;
LAB_0044645c:
        FUN_002eb72c(0,0xffffffff);
      }
LAB_00446468:
      FUN_0033c25c(1);
    }
    uVar6 = FUN_0033b5ec();
    if ((uVar6 & 2) != 0 || bVar13) {
      FUN_0037547c(DAT_004467cc,0,4,DAT_00445a18,DAT_00445a18,DAT_00445a14);
      uVar14 = DAT_004467d0;
      FUN_002e64bc(DAT_004467d4,DAT_004467d0,*(undefined4 *)(puVar3 + 0x26));
      iVar10 = 0;
      do {
        FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),iVar10,0,0,0,0);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 4);
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      FUN_002f8b80(fVar15,fVar15,*(undefined4 *)(puVar3 + 0x12),0x25,0);
      FUN_0033c25c(1);
      FUN_002eb72c(*(undefined4 *)(puVar3 + 0x32),0);
      puVar3[0x44] = 0xffff;
      puVar3[0x45] = 0xffff;
      puVar3[0x46] = 0xffff;
      puVar3[0x47] = 0xffff;
      FUN_002f7af4(DAT_004467dc,uVar14,DAT_004467d8[1]);
      puVar3[0x1a] = 1;
      puVar3[0x1b] = 0;
      return;
    }
    fVar15 = (float)VectorSignedToFloat(*(int *)(puVar3 + 0x50) * 0x2e,(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar17 = (float)VectorSignedToFloat(*(int *)(puVar3 + 0x4e) * 0x2d,(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_002f7af4(local_54[*(int *)(puVar3 + 0x3c)] + fVar17 + DAT_004467e0,
                 local_64[*(int *)(puVar3 + 0x3e)] + fVar15 + DAT_004467e0,
                 *(undefined4 *)(puVar3 + 0x14));
    FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),0,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                 (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x2a,0x2a);
    iVar10 = DAT_00445a20;
    if (*(int *)(DAT_00445a20 + 4) != 0) {
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),1,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4)
                   ,(int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x2a,0x2a);
    }
    if (*(int *)(iVar10 + 8) != 0) {
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),2,
                   (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                   (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x2a,0x2a);
    }
    if (*(int *)(iVar10 + 0xc) != 0) {
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x20),3,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4)
                   ,(int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x2a,0x2a);
    }
    iVar10 = *(int *)(puVar3 + 0x4e) + *(int *)(puVar3 + 0x50) * 2;
    if (iVar10 == 0) {
      FUN_002eb3d8(*(undefined4 *)(puVar3 + 0x20),0,
                   (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                   (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x34,0x34,0xfffffffb,0xfffffffb
                  );
      return;
    }
    if (iVar10 == 1) {
      FUN_002eb3d8(*(undefined4 *)(puVar3 + 0x20),1,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4)
                   ,(int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar16),0x34,0x34,0xfffffffb,
                   0xfffffffb);
      return;
    }
    if (iVar10 == 2) {
      FUN_002eb3d8(*(undefined4 *)(puVar3 + 0x20),2,
                   (int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar16),
                   (int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x34,0x34,0xfffffffb,0xfffffffb)
      ;
      return;
    }
    if (iVar10 == 3) {
      FUN_002eb3d8(*(undefined4 *)(puVar3 + 0x20),3,(int)(local_54[*(int *)(puVar3 + 0x3c)] + fVar4)
                   ,(int)(local_64[*(int *)(puVar3 + 0x3e)] + fVar5),0x34,0x34,0xfffffffb,0xfffffffb
                  );
      return;
    }
    break;
  case 3:
    uVar6 = (uint)DAT_004459f8[10] + (int)((uint)*DAT_004459f8 - (uint)DAT_004459f8[10]) / 2;
    DAT_004459f8[10] = (ushort)uVar6;
    uVar9 = (uint)puVar3[0xb] + (int)((uint)puVar3[1] - (uint)puVar3[0xb]) / 2;
    puVar3[0xb] = (ushort)uVar9;
    FUN_002f8d40(*(undefined4 *)(puVar3 + 0x22),0,uVar6 & 0xffff,uVar9 & 0xffff,0x2a,0x2a);
    iVar7 = *(int *)(puVar3 + 0x40);
    *(int *)(puVar3 + 0x40) = iVar7 + 1;
    if (5 < iVar7 + 1) {
      uVar8 = *(undefined4 *)(puVar3 + 0x48);
      bVar2 = *(byte *)(DAT_00445a24 + 3);
      *(char *)((uint)bVar2 + iVar12) = (char)uVar8;
      *(char *)((uint)bVar2 + iVar10) = (char)uVar8;
      FUN_0033c25c(1);
      *(undefined4 *)(*DAT_004467d8 + 0x34) = uVar14;
      FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,*(undefined4 *)(puVar3 + 0x48));
      FUN_002f8d40(*(undefined4 *)(puVar3 + 0x22),0,puVar3[10],puVar3[0xb],0x2a,0x2a);
      puVar3[0x1c] = 4;
      puVar3[0x1d] = 0;
      puVar3[0x40] = 0;
      puVar3[0x41] = 0;
      return;
    }
    break;
  case 4:
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(DAT_004459f8 + 0x40),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_002f8ce0(DAT_004459fc - fVar15 * DAT_00446a44,*(undefined4 *)(DAT_004459f8 + 0x22),0);
    iVar12 = *(int *)(puVar3 + 0x40) * -3;
    iVar10 = *(int *)(puVar3 + 0x40) * 6;
    fVar15 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002f8d40(*(undefined4 *)(puVar3 + 0x22),0,iVar12 + (uint)puVar3[10],
                 iVar12 + (uint)puVar3[0xb],(int)(fVar16 + DAT_00446a48),
                 (int)(fVar15 + DAT_00446a48));
    iVar10 = *(int *)(puVar3 + 0x40);
    *(int *)(puVar3 + 0x40) = iVar10 + 1;
    if (4 < iVar10 + 1) {
      FUN_002f8ce0(DAT_00446a4c,*(undefined4 *)(puVar3 + 0x22),0);
      puVar3[0x1c] = 2;
      puVar3[0x1d] = 0;
      *(undefined4 *)(*DAT_004467d8 + 0x34) = uVar14;
      return;
    }
  }
  return;
}
