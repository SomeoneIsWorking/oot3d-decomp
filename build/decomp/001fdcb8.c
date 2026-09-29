// OoT3D decomp @ 001fdcb8  name=FUN_001fdcb8  size=1628

void FUN_001fdcb8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  short sVar14;
  char *pcVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;

  uVar26 = DAT_001fe09c;
  uVar27 = DAT_001fe098;
  iVar10 = DAT_001fe094;
  if ((*(byte *)(param_1 + 0xf9d) & 2) == 0) {
    return;
  }
  local_64 = VectorSignedToFloat((int)*(short *)(param_1 + 0xfb2),(byte)(in_fpscr >> 0x15) & 3);
  local_50 = param_1 + 0xc00;
  local_60 = VectorSignedToFloat((int)*(short *)(param_1 + 0xfb4),(byte)(in_fpscr >> 0x15) & 3);
  local_5c = VectorSignedToFloat((int)*(short *)(param_1 + 0xfb6),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined2 *)(param_1 + 0xc08) = 3;
  iVar16 = DAT_001fe090;
  *(byte *)(param_1 + 0xf9d) = *(byte *)(param_1 + 0xf9d) & 0xfd;
  uVar4 = DAT_001fe0d0;
  uVar3 = DAT_001fe0cc;
  fVar21 = DAT_001fe0c8;
  fVar20 = DAT_001fe0c4;
  uVar2 = DAT_001fe0c0;
  uVar8 = DAT_001fe0bc;
  iVar1 = DAT_001fe0a4;
  iVar7 = *(int *)(param_1 + 0xac0);
  puVar17 = *(uint **)(param_1 + 0xfc8);
  iVar9 = iVar16;
  if (iVar7 != iVar16) {
    iVar9 = DAT_001fe0a0;
  }
  local_54 = param_2 + 0x3a58;
  local_58 = param_2;
  if (iVar7 != iVar16 && iVar7 != iVar9) {
    if ((iVar7 != iVar10) || (*(short *)(param_1 + 0xaee) < 3)) {
      if ((*puVar17 & DAT_001fe384) == 0) {
        return;
      }
      iVar10 = 0;
      do {
        iVar9 = 1;
        do {
          uVar27 = FUN_003738a8(uVar8);
          *(undefined4 *)(*(int *)(iVar1 + 0x44) + iVar10 * 0x1c8 + iVar9 * 0xc + 0x2d0) = uVar27;
          uVar27 = FUN_003738a8(uVar8);
          *(undefined4 *)(*(int *)(iVar1 + 0x44) + iVar10 * 0x1c8 + iVar9 * 0xc + 0x2d8) = uVar27;
          iVar9 = (int)(short)((short)iVar9 + 1);
        } while (iVar9 < 0xc);
        iVar10 = (int)(short)((short)iVar10 + 1);
      } while (iVar10 < 0xc);
      FUN_003741e4(local_58,*puVar17,1,&local_64,0);
      FUN_00375f90(local_58,&local_64,8);
      return;
    }
    uVar11 = *puVar17;
    if ((uVar11 & 0x80) == 0) {
      sVar14 = 0;
      do {
        uVar22 = FUN_003738a8(uVar26);
        uVar23 = FUN_003738a8(uVar26);
        uVar24 = FUN_003738a8(uVar26);
        fVar25 = (float)FUN_00371e50(uVar2);
        pcVar15 = *(char **)(param_2 + 0x5c28);
        sVar6 = 0;
        do {
          if (*pcVar15 == '\0') {
            *pcVar15 = '\x01';
            uVar12 = *(undefined4 *)(param_1 + 0xb34);
            uVar13 = *(undefined4 *)(param_1 + 0xb38);
            *(undefined4 *)(pcVar15 + 4) = *(undefined4 *)(param_1 + 0xb30);
            *(undefined4 *)(pcVar15 + 8) = uVar12;
            *(undefined4 *)(pcVar15 + 0xc) = uVar13;
            puVar5 = DAT_001fe0d4;
            *(undefined4 *)(pcVar15 + 0x10) = uVar22;
            *(undefined4 *)(pcVar15 + 0x14) = uVar23;
            *(undefined4 *)(pcVar15 + 0x18) = uVar24;
            uVar22 = puVar5[1];
            uVar23 = puVar5[2];
            *(undefined4 *)(pcVar15 + 0x1c) = *puVar5;
            *(undefined4 *)(pcVar15 + 0x20) = uVar22;
            *(undefined4 *)(pcVar15 + 0x24) = uVar23;
            *(float *)(pcVar15 + 0x34) = (fVar25 + fVar20) * fVar21;
            fVar25 = (float)FUN_00371e50(uVar3);
            *(short *)(pcVar15 + 0x2e) = (short)(int)fVar25 + 200;
            pcVar15[0x30] = '\x1e';
            pcVar15[0x31] = '\0';
            fVar25 = (float)FUN_00371e50(uVar4);
            *(short *)(pcVar15 + 2) = (short)(int)fVar25;
            break;
          }
          sVar6 = sVar6 + 1;
          pcVar15 = pcVar15 + 0x4c;
        } while (sVar6 < 0x96);
        sVar14 = sVar14 + 1;
        if (0x1d < sVar14) {
          iVar10 = FUN_003656fc(param_2,*puVar17);
          bVar19 = iVar10 == 0;
          if (bVar19) {
            iVar10 = 2;
          }
          bVar18 = *(char *)(param_1 + 0xb7) == '\x02';
          if (*(char *)(param_1 + 0xb7) < '\x03') {
            bVar18 = bVar19;
          }
          if ((bVar18) || (iVar10 == 0)) {
            FUN_003741e4(local_58,*puVar17,1,&local_64,0);
          }
          else {
            *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) - (char)iVar10;
            FUN_003741e4(local_58,*puVar17,0,&local_64,0);
          }
          iVar10 = DAT_001fe0a4;
          iVar9 = 0;
          do {
            iVar16 = 1;
            do {
              uVar26 = FUN_003738a8(uVar8);
              *(undefined4 *)(*(int *)(iVar10 + 0x44) + iVar9 * 0x1c8 + iVar16 * 0xc + 0x2d0) =
                   uVar26;
              uVar26 = FUN_003738a8(uVar8);
              iVar1 = local_54;
              *(undefined4 *)(*(int *)(iVar10 + 0x44) + iVar9 * 0x1c8 + iVar16 * 0xc + 0x2d8) =
                   uVar26;
              iVar16 = (int)(short)((short)iVar16 + 1);
            } while (iVar16 < 0xc);
            iVar9 = (int)(short)((short)iVar9 + 1);
          } while (iVar9 < 0xc);
          if (*(char *)(param_1 + 0xb7) < '\x01') {
            uVar26 = FUN_00363c10(local_54,DAT_001fe35c);
            iVar10 = FUN_00373074(iVar1,uVar26);
            if (iVar10 != 0) {
              *(undefined4 *)(param_1 + 0xac0) = DAT_001fe360;
              *(undefined2 *)(param_1 + 0x1000) = 0;
              *(undefined4 *)(param_1 + 0xffc) = 0;
              *(undefined1 *)(param_1 + 0xac4) = 1;
              *(undefined4 *)(param_1 + 0x1a4) = uVar26;
              FUN_00374a58(uVar27,param_1 + 0x1a8,2);
              uVar26 = FUN_0036ae14(param_1 + 0x1a8,2);
              uVar26 = VectorSignedToFloat(uVar26,(byte)(in_fpscr >> 0x15) & 3);
              *(undefined4 *)(param_1 + 0xaf8) = uVar26;
              *(undefined4 *)(local_50 + 0x284) = uVar27;
            }
            FUN_00375bcc(param_1,DAT_001fe364);
            FUN_00375bcc(param_1,DAT_001fe368);
            FUN_0037547c(DAT_001fe374,DAT_001fe0d4,4,DAT_001fe370,DAT_001fe370,DAT_001fe36c);
            FUN_003655d0(0,1);
            *(undefined2 *)(param_1 + 0xaf0) = 4;
            return;
          }
          FUN_00375bcc(param_1,DAT_001fe378);
          FUN_00375bcc(param_1,DAT_001fe37c);
          uVar26 = FUN_00363c10(local_54,0x17c);
          *(undefined4 *)(param_1 + 0x1a4) = uVar26;
          uVar26 = FUN_0036ae14(param_1 + 0x1a8,0x19);
          uVar26 = VectorSignedToFloat(uVar26,(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0xaf8) = uVar26;
          FUN_00374a58(uVar27,param_1 + 0x1a8,0x19);
          *(undefined4 *)(param_1 + 0xac0) = DAT_001fe380;
          *(undefined2 *)(param_1 + 0xad2) = 0x17;
          *(undefined1 *)(*(int *)(iVar10 + 0x44) + 0x175c) = 1;
          return;
        }
      } while( true );
    }
  }
  else {
    uVar11 = *puVar17;
    if ((uVar11 & 0x2000) != 0) {
      if (iVar7 != iVar10) {
        uVar8 = FUN_00363c10(local_54,0x17c);
        *(undefined4 *)(param_1 + 0x1a4) = uVar8;
        uVar8 = FUN_0036ae14(param_1 + 0x1a8,0x23);
        uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(param_1 + 0xaf8) = uVar8;
        FUN_00374a58(uVar27,param_1 + 0x1a8,0x23);
        uVar2 = DAT_001fe0b4;
        iVar9 = *(int *)(DAT_001fe0a4 + 0x44);
        *(undefined4 *)(iVar9 + 0x1714) = uVar27;
        *(undefined4 *)(iVar9 + 0x1718) = uVar27;
        *(int *)(param_1 + 0xac0) = iVar10;
        *(undefined4 *)(param_1 + 0x68) = uVar27;
        *(undefined4 *)(param_1 + 100) = uVar27;
        *(undefined4 *)(param_1 + 0x60) = uVar27;
        uVar8 = DAT_001fe0a8;
        *(undefined2 *)(param_1 + 0xaee) = 0;
        *(undefined4 *)(iVar9 + 0x1708) = uVar8;
        sVar14 = 0;
        *(undefined4 *)(iVar9 + 0x170c) = DAT_001fe0ac;
        *(undefined4 *)(iVar9 + 0x1710) = DAT_001fe0b0;
        *(undefined4 *)(iVar9 + 0x1728) = uVar26;
        do {
          fVar20 = (float)FUN_003738a8(uVar2);
          sVar6 = *(short *)(param_1 + 0x92);
          fVar21 = (float)FUN_003738a8(uVar2);
          FUN_0036aa20(*(undefined4 *)(param_1 + 0xb30),*(undefined4 *)(param_1 + 0xb34),
                       *(undefined4 *)(param_1 + 0xb38),param_2 + 0x208c,param_1,param_2,0xe8,
                       (int)(short)(int)fVar21,(int)(short)(sVar6 + (short)(int)fVar20),0,
                       (int)(short)(sVar14 + 200));
          sVar14 = sVar14 + 1;
        } while (sVar14 < 10);
        *(undefined2 *)(param_1 + 0xad0) = 0;
        *(undefined4 *)(param_1 + 0xbbc) = uVar27;
        *(undefined4 *)(param_1 + 0xbc4) = uVar27;
        *(undefined4 *)(param_1 + 3000) = uVar27;
        *(undefined4 *)(param_1 + 0xbc0) = uVar27;
      }
      *(undefined2 *)(param_1 + 0xae6) = 0;
      FUN_00375bcc(param_1,DAT_001fe0b8);
      *(undefined2 *)(param_1 + 0xad2) = 0x17;
      return;
    }
  }
  FUN_003741e4(param_2,uVar11,1,&local_64,0);
  return;
}
