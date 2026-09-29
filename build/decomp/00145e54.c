// OoT3D decomp @ 00145e54  name=FUN_00145e54  size=1980

void FUN_00145e54(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 auStack_94 [11];
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;

  fVar18 = DAT_001466a4;
  uVar20 = DAT_001461a8;
  iVar5 = DAT_00146180;
  fVar19 = DAT_0014617c;
  fVar23 = DAT_00146178;
  fVar21 = DAT_00146174;
  fVar16 = DAT_00146170;
  iVar13 = *(int *)(DAT_0014616c + param_2);
  if (*(short *)(param_1 + 0x1c) != 100) {
    if (*(short *)(param_1 + 0x1c) != 0x65) {
      return;
    }
    pcVar12 = (char *)(DAT_00146180 + 3);
    if (*(short *)(param_1 + 0x1d0) != 0) {
      if (*(short *)(param_1 + 0x1d0) == 1) {
        *(undefined1 *)(DAT_00146180 + 2) = 0;
      }
      if (*pcVar12 == '\x02') {
        *(undefined2 *)(param_1 + 0x1d0) = 0;
      }
      FUN_00375bcc(param_1,DAT_00146184);
      iVar7 = *(int *)(iVar5 + 0x90);
      fVar21 = *(float *)(iVar7 + 0x514) - *(float *)(iVar13 + 0x28);
      fVar16 = *(float *)(iVar7 + 0x51c) - *(float *)(iVar13 + 0x30);
      if ((((*(char *)(DAT_00146188 + iVar13) == '\0') && ((*(ushort *)(iVar13 + 0x90) & 1) != 0))
          && ((int)ABS(*(float *)(iVar7 + 0x518) - *(float *)(iVar13 + 0x2c)) < DAT_0014618c)) &&
         (SQRT(fVar21 * fVar21 + fVar16 * fVar16) < *(float *)(iVar7 + 0x210) * DAT_00146190)) {
        FUN_0035d8d8(iVar13,param_2,0);
        if (*(short *)(param_1 + 0x1c0) == 0) {
          FUN_0036f59c(iVar13,DAT_00146198 +
                              (uint)*(ushort *)(*(int *)(DAT_00146194 + iVar13) + 0xf4));
          *(undefined2 *)(param_1 + 0x1c0) = 0x28;
        }
        *(undefined2 *)(*(int *)(iVar5 + 0x94) + 0x1d4) = 0x96;
      }
      FUN_00373500(DAT_001461a4,DAT_001461a0,DAT_0014619c,*(int *)(iVar5 + 0x90) + 0x210);
      return;
    }
    fVar23 = DAT_0014617c;
    if (*pcVar12 == '\x02') {
      fVar23 = DAT_001466a4;
    }
    FUN_00373500(DAT_00146174,DAT_0014617c,fVar23 * DAT_00146178,
                 *(int *)(DAT_00146180 + 0x90) + 0x200);
    FUN_00373500(fVar21,fVar19,fVar23 * fVar16,*(int *)(iVar5 + 0x90) + 0x20c);
    FUN_00373500(fVar21,fVar19,fVar23 * fVar18,*(int *)(iVar5 + 0x90) + 0x204);
    FUN_00373500(fVar21,fVar19,fVar23 * DAT_001466a8,*(int *)(iVar5 + 0x90) + 0x208);
    if (fVar21 < *(float *)(*(int *)(iVar5 + 0x90) + 0x204)) {
      return;
    }
LAB_0014668c:
    FUN_00374428(param_1);
    return;
  }
  sVar6 = *(short *)(param_1 + 0x498);
  puVar11 = (undefined4 *)(param_1 + 0x28);
  if (sVar6 == 0) {
    FUN_0037572c(DAT_00146170,param_1);
    *(undefined2 *)(param_1 + 0x498) = 1;
    fVar25 = *(float *)(iVar13 + 0x28) - *(float *)(param_1 + 0x28);
    fVar18 = *(float *)(iVar13 + 0x2c) + DAT_001461ac;
    fVar22 = *(float *)(param_1 + 0x2c);
    fVar24 = *(float *)(iVar13 + 0x30) - *(float *)(param_1 + 0x30);
    fVar17 = (float)FUN_003696ec(fVar25,fVar24);
    fVar16 = DAT_001461b0;
    *(short *)(param_1 + 0x36) = (short)(int)(fVar17 * DAT_001461b0);
    fVar18 = (float)FUN_003696ec(fVar18 - fVar22,SQRT(fVar25 * fVar25 + fVar24 * fVar24));
    iVar7 = 0;
    *(short *)(param_1 + 0x34) = (short)(int)(fVar18 * fVar16);
    *(undefined4 *)(param_1 + 0x6c) = uVar20;
    iVar5 = 0;
    do {
      iVar8 = iVar7 + 1;
      iVar9 = param_1 + iVar7 * 0xc;
      uVar14 = *(undefined4 *)(param_1 + 0x2c);
      uVar10 = *(undefined4 *)(param_1 + 0x30);
      iVar5 = iVar5 + 2;
      *(undefined4 *)(iVar9 + 0x240) = *puVar11;
      *(undefined4 *)(iVar9 + 0x244) = uVar14;
      *(undefined4 *)(iVar9 + 0x248) = uVar10;
      iVar7 = iVar7 + 2;
      iVar8 = param_1 + iVar8 * 0xc;
      uVar14 = *(undefined4 *)(param_1 + 0x2c);
      uVar10 = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar8 + 0x240) = *puVar11;
      *(undefined4 *)(iVar8 + 0x244) = uVar14;
      *(undefined4 *)(iVar8 + 0x248) = uVar10;
    } while (iVar5 < 0x32);
    *(undefined4 *)(param_1 + 0x204) = DAT_001461b4;
  }
  else if (sVar6 != 1) {
    if (sVar6 == 2) {
      FUN_00373500(DAT_00146174,DAT_0014617c,DAT_001466a0,param_1 + 0x204);
      if (*(short *)(param_1 + 0x1d0) != 0) {
        return;
      }
      goto LAB_0014668c;
    }
    if (sVar6 != 10) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x5bd) = 1;
  uVar14 = DAT_0014656c;
  if (*(short *)(param_1 + 0x1d0) == 0) {
    FUN_00365860(param_1);
    FUN_0036b96c(param_1);
    FUN_00375bcc(param_1,DAT_001461b8);
    fVar18 = (float)FUN_00368280(param_1 + 0x28);
    uVar14 = DAT_001461bc;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar18 < fVar21) << 0x1f;
    uVar15 = uVar1 | (uint)(NAN(fVar18) || NAN(fVar21)) << 0x1c;
    *(float *)(param_1 + 0x55c) = fVar18;
    uVar3 = DAT_001465a4;
    fVar19 = DAT_001465a0;
    uVar2 = DAT_0014659c;
    uVar10 = DAT_00146598;
    fVar16 = DAT_00146594;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar15 >> 0x1c) & 1)) {
      if (fVar18 == 35.0) {
        sVar6 = 0;
        do {
          local_50 = (float)FUN_003738a8(uVar20);
          local_4c = (float)FUN_003738a8(uVar20);
          local_48 = (float)FUN_003738a8(uVar20);
          local_5c = fVar21;
          local_58 = fVar21;
          local_54 = fVar21;
          fVar19 = (float)FUN_00371e50(fVar23);
          FUN_00368498(fVar19 + fVar16,param_2,param_1 + 0x28,&local_50,&local_5c,
                       (int)*(short *)(param_1 + 0x5be));
          sVar6 = sVar6 + 1;
        } while (sVar6 < 0x32);
        *(undefined4 *)(param_2 + 0x3258) = uVar14;
      }
      else {
        *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x30);
        FUN_00368008(param_1,param_2,1);
      }
      *(undefined2 *)(param_1 + 0x498) = 2;
      *(undefined2 *)(param_1 + 0x1d0) = 0x1e;
      return;
    }
    local_5c = fVar21;
    local_58 = fVar21;
    local_54 = fVar21;
    local_68 = fVar21;
    local_64 = fVar21;
    local_60 = fVar21;
    sVar6 = 0;
    do {
      fVar16 = (float)FUN_00371e50(uVar10);
      iVar5 = param_1 + (short)(int)fVar16 * 0xc;
      local_50 = *(float *)(iVar5 + 0x240);
      local_4c = *(float *)(iVar5 + 0x244);
      local_48 = *(float *)(iVar5 + 0x248);
      fVar16 = (float)FUN_003738a8(uVar2);
      local_50 = fVar16 + local_50;
      fVar16 = (float)FUN_003738a8(uVar2);
      local_4c = fVar16 + local_4c;
      fVar16 = (float)FUN_003738a8(uVar2);
      local_48 = fVar16 + local_48;
      local_64 = fVar19;
      local_68 = (float)FUN_003738a8(uVar14);
      local_60 = (float)FUN_003738a8(uVar14);
      fVar16 = (float)FUN_00371e50(uVar3);
      uVar20 = VectorSignedToFloat((short)(int)fVar16 + 8,(byte)(uVar15 >> 0x15) & 3);
      auStack_94[0] = 0x4b;
      FUN_0035ec30(uVar20,param_2,&local_50,&local_5c,&local_68,1);
      sVar6 = sVar6 + 1;
    } while (sVar6 < 10);
    return;
  }
  uVar20 = *(undefined4 *)(iVar13 + 0x23ec);
  uVar10 = *(undefined4 *)(iVar13 + 0x23f0);
  *puVar11 = *(undefined4 *)(iVar13 + 0x23e8);
  *(undefined4 *)(param_1 + 0x2c) = uVar20;
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(undefined4 *)(param_1 + 0x2c) = uVar14;
  FUN_003624c8(iVar13 + 0x243c,&local_64,0);
  local_64._0_2_ = -(short)local_64;
  local_64._2_2_ = local_64._2_2_ + -0x8000;
  FUN_00370084(param_1 + 0x57c,(int)(short)local_64,10,0x800);
  FUN_00370084(param_1 + 0x57e,(int)local_64._2_2_,10,0x800);
  iVar5 = DAT_00146180;
  if (*(short *)(param_1 + 0x1d0) == 0x4b) {
    *(undefined1 *)(DAT_00146180 + 0xb) = 10;
    *(undefined2 *)(iVar5 + 0x14) = 7;
    *(float *)(param_2 + 0x3258) = fVar19;
  }
  if (*(short *)(param_1 + 0x1d0) < 0x4c) {
    FUN_00375bcc(param_1,DAT_001461b8);
    FUN_00375bcc(param_1,DAT_00146570);
    fVar19 = DAT_00146578;
    fVar16 = DAT_00146574;
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x57e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar18 * DAT_00146574 * DAT_00146578,auStack_94,0);
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x57c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_00369014(fVar18 * fVar16 * fVar19,auStack_94,1);
    local_5c = fVar21;
    local_58 = fVar21;
    local_54 = DAT_0014657c;
    FUN_003735ac(&local_50,auStack_94,&local_5c);
    fVar16 = DAT_00146580;
    sVar6 = *(short *)(param_1 + 0x1d0) * 10;
    if (0xff < sVar6) {
      sVar6 = 0xff;
    }
    pcVar12 = *(char **)(DAT_00146584 + param_2);
    sVar4 = 0;
    do {
      if (*pcVar12 == '\0') {
        *pcVar12 = '\b';
        fVar21 = DAT_0014658c;
        uVar20 = *(undefined4 *)(iVar13 + 0x23ec);
        uVar14 = *(undefined4 *)(iVar13 + 0x23f0);
        *(undefined4 *)(pcVar12 + 4) = *(undefined4 *)(iVar13 + 0x23e8);
        *(undefined4 *)(pcVar12 + 8) = uVar20;
        *(undefined4 *)(pcVar12 + 0xc) = uVar14;
        puVar11 = DAT_00146588;
        *(float *)(pcVar12 + 0x10) = local_50;
        *(float *)(pcVar12 + 0x14) = local_4c;
        *(float *)(pcVar12 + 0x18) = local_48;
        uVar20 = puVar11[1];
        uVar14 = puVar11[2];
        *(undefined4 *)(pcVar12 + 0x1c) = *puVar11;
        *(undefined4 *)(pcVar12 + 0x20) = uVar20;
        *(undefined4 *)(pcVar12 + 0x24) = uVar14;
        *(float *)(pcVar12 + 0x30) = fVar23 * fVar21;
        *(float *)(pcVar12 + 0x34) = fVar16 * fVar21;
        pcVar12[0x2c] = '\x01';
        pcVar12[0x2d] = '\0';
        pcVar12[0x2e] = '\0';
        uVar20 = DAT_00146590;
        pcVar12[0x2f] = '\0';
        *(short *)(pcVar12 + 2) = sVar6;
        fVar16 = (float)FUN_00371e50(uVar20);
        pcVar12[1] = (char)(int)fVar16;
        uVar20 = FUN_00371178(*(undefined4 *)(DAT_00146180 + 0x20),0,6);
        *(undefined4 *)(pcVar12 + 0x44) = uVar20;
        break;
      }
      sVar4 = sVar4 + 1;
      pcVar12 = pcVar12 + 0x48;
    } while (sVar4 < 0x96);
  }
  iVar5 = DAT_00146180;
  if (*(short *)(param_1 + 0x1d0) == 1) {
    *(undefined1 *)(DAT_00146180 + 2) = 0;
    *(char *)(iVar5 + 4) = *(char *)(iVar5 + 4) + '\x01';
    FUN_00374428(param_1);
  }
  return;
}
