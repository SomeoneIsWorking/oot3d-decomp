// OoT3D decomp @ 00289dd0  name=FUN_00289dd0  size=1560

void FUN_00289dd0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  short sVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;

  *(short *)(param_1 + 0xd30) = *(short *)(param_1 + 0xd30) + 1;
  if (*(short *)(param_1 + 0xd28) != 0) {
    *(short *)(param_1 + 0xd28) = *(short *)(param_1 + 0xd28) + -1;
  }
  if (*(short *)(param_1 + 0xd38) != 0) {
    *(short *)(param_1 + 0xd38) = *(short *)(param_1 + 0xd38) + -1;
  }
  if (*(short *)(param_1 + 0xd3a) != 0) {
    *(short *)(param_1 + 0xd3a) = *(short *)(param_1 + 0xd3a) + -1;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  iVar10 = FUN_0037571c(param_2);
  if (iVar10 == 0) goto LAB_00289fec;
  iVar10 = 0;
  if (*(short *)(param_2 + 0x104) == 0x3b) {
    iVar13 = (int)*(short *)(*DAT_0028a16c + 0x110);
    uVar12 = (uint)*(ushort *)(param_2 + 0x22b8);
    fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
    if ((((int)(DAT_0028a174 / fVar20 + DAT_0028a170) == uVar12) ||
        (fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3),
        (int)(DAT_0028a178 / fVar20 + DAT_0028a170) == uVar12)) ||
       ((fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3),
        (int)(DAT_0028a17c / fVar20 + DAT_0028a170) == uVar12 ||
        (fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3),
        (int)(DAT_0028a180 / fVar20 + DAT_0028a170) == uVar12)))) {
      iVar10 = 1;
    }
    if (uVar12 != 0x65) {
LAB_00289fb8:
      if (iVar10 == 1) {
        FUN_00375bcc(param_1,DAT_0028a194);
        goto LAB_00289fec;
      }
      if (iVar10 != 2) goto LAB_00289fec;
    }
  }
  else {
    iVar13 = (int)*(short *)(*DAT_0028a16c + 0x110);
    uVar12 = (uint)*(ushort *)(param_2 + 0x22b8);
    fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
    if ((((int)(DAT_0028a184 / fVar20 + DAT_0028a170) == uVar12) ||
        (fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3),
        (int)(DAT_0028a188 / fVar20 + DAT_0028a170) == uVar12)) ||
       (fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3),
       (int)(DAT_0028a18c / fVar20 + DAT_0028a170) == uVar12)) {
      iVar10 = 1;
    }
    fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_0028a190 / fVar20 + DAT_0028a170) != uVar12) goto LAB_00289fb8;
  }
  FUN_00375bcc(param_1,DAT_0028a198);
LAB_00289fec:
  if ((*(short *)(param_1 + 0xd38) == 0) && (*(int *)(param_1 + 0x1a4) != DAT_0028a19c)) {
    *(short *)(param_1 + 0xd32) = *(short *)(param_1 + 0xd32) + 1;
    *(short *)(param_1 + 0xd34) = *(short *)(param_1 + 0xd34) + 1;
    if (2 < *(short *)(param_1 + 0xd32)) {
      *(undefined2 *)(param_1 + 0xd34) = 0;
      uVar2 = DAT_0028a1a0;
      *(undefined2 *)(param_1 + 0xd32) = 0;
      fVar20 = (float)FUN_00371e50(uVar2);
      *(short *)(param_1 + 0xd38) = (short)(int)fVar20 + 0x14;
    }
  }
  FUN_00376864(param_1);
  local_58 = param_1 + 0xc00;
  *(float *)(param_1 + 0xd68) = *(float *)(param_1 + 0xd48) * DAT_0028a1a4;
  FUN_0037322c(param_1);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0xd68);
  local_a0 = 2.40351e-41;
  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xd68),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0xd74,param_1 + 0xd7a);
  fVar9 = DAT_0028a1cc;
  fVar8 = DAT_0028a1c8;
  fVar7 = DAT_0028a1c4;
  fVar6 = DAT_0028a1c0;
  uVar5 = DAT_0028a1bc;
  uVar2 = DAT_0028a1b8;
  fVar4 = DAT_0028a1b4;
  fVar3 = DAT_0028a1b0;
  fVar20 = DAT_0028a1ac;
  iVar10 = *(int *)(DAT_0028a1a8 + param_2);
  pcVar14 = (char *)(param_1 + 0xde0);
  sVar15 = 0;
  do {
    if (*pcVar14 != '\0') {
      *(float *)(pcVar14 + 0x40) = *(float *)(pcVar14 + 0x40) + fVar20;
      if (*(short *)(pcVar14 + 0x36) == 0) {
        *(float *)(pcVar14 + 4) = *(float *)(pcVar14 + 4) + *(float *)(pcVar14 + 0x10);
        *(float *)(pcVar14 + 8) = *(float *)(pcVar14 + 8) + *(float *)(pcVar14 + 0x14);
        *(float *)(pcVar14 + 0xc) = *(float *)(pcVar14 + 0xc) + *(float *)(pcVar14 + 0x18);
        *(float *)(pcVar14 + 0x10) = *(float *)(pcVar14 + 0x10) + *(float *)(pcVar14 + 0x1c);
        *(float *)(pcVar14 + 0x14) = *(float *)(pcVar14 + 0x14) + *(float *)(pcVar14 + 0x20);
        *(float *)(pcVar14 + 0x18) = *(float *)(pcVar14 + 0x18) + *(float *)(pcVar14 + 0x24);
      }
      else {
        FUN_00375bcc(param_1,DAT_0028a44c);
        local_64 = *(float *)(iVar10 + 0x28);
        local_60 = *(float *)(iVar10 + 0x2c) - fVar3;
        local_5c = *(float *)(iVar10 + 0x30) - fVar4;
        uVar11 = FUN_003758b0(SQRT((local_64 - *(float *)(pcVar14 + 4)) *
                                   (local_64 - *(float *)(pcVar14 + 4)) +
                                   (local_5c - *(float *)(pcVar14 + 0xc)) *
                                   (local_5c - *(float *)(pcVar14 + 0xc))),
                              *(float *)(pcVar14 + 8) - local_60);
        uVar21 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
        uVar11 = FUN_003758b0(local_5c - *(float *)(pcVar14 + 0xc),
                              local_64 - *(float *)(pcVar14 + 4));
        uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00373500(uVar21,uVar5,uVar2,pcVar14 + 0x38);
        FUN_00373500(uVar11,uVar5,uVar2,pcVar14 + 0x3c);
        fVar22 = *(float *)(pcVar14 + 0x3c) * fVar6;
        uVar12 = in_fpscr & 0xfffffff | (uint)(fVar22 == fVar7) << 0x1e;
        fVar17 = fVar8;
        fVar16 = fVar7;
        if (!SUB41(uVar12 >> 0x1e,0)) {
          fVar16 = (float)FUN_003727f0(fVar22);
          fVar17 = (float)FUN_00372674(fVar22);
        }
        local_9c = fVar7;
        local_94 = fVar7;
        local_80 = -fVar16;
        local_8c = fVar8;
        local_90 = fVar7;
        local_88 = fVar7;
        local_84 = fVar7;
        local_7c = fVar7;
        local_74 = fVar7;
        fVar22 = *(float *)(pcVar14 + 0x38) * fVar6;
        in_fpscr = uVar12 & 0xfffffff | (uint)(fVar22 == fVar7) << 0x1e;
        local_a0 = fVar17;
        local_98 = fVar16;
        local_78 = fVar17;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar18 = (float)FUN_003727f0(fVar22);
          fVar19 = (float)FUN_00372674(fVar22);
          fVar17 = local_98 * fVar18;
          local_98 = local_98 * fVar19 - local_9c * fVar18;
          fVar16 = local_88 * fVar18;
          local_88 = local_88 * fVar19 - local_8c * fVar18;
          fVar22 = local_78 * fVar18;
          local_78 = local_78 * fVar19 - local_7c * fVar18;
          local_9c = local_9c * fVar19 + fVar17;
          local_8c = local_8c * fVar19 + fVar16;
          local_7c = local_7c * fVar19 + fVar22;
        }
        local_5c = fVar9;
        local_60 = fVar9;
        local_64 = fVar9;
        FUN_003735ac(&local_70,&local_a0,&local_64);
        *(float *)(pcVar14 + 4) = *(float *)(pcVar14 + 4) + local_70;
        *(float *)(pcVar14 + 8) = *(float *)(pcVar14 + 8) + local_6c;
        *(float *)(pcVar14 + 0xc) = *(float *)(pcVar14 + 0xc) + local_68;
      }
    }
    if (*(short *)(pcVar14 + 0x34) == 0) {
      sVar1 = *(short *)(pcVar14 + 0x2e);
      *(short *)(pcVar14 + 0x2e) = sVar1 + -0x1e;
      if ((short)(sVar1 + -0x1e) < 1) {
        pcVar14[0x2e] = '\0';
        pcVar14[0x2f] = '\0';
        *pcVar14 = '\0';
        if (*(undefined1 **)(pcVar14 + 0x44) != (undefined1 *)0x0) {
          **(undefined1 **)(pcVar14 + 0x44) = 2;
        }
        pcVar14[0x44] = '\0';
        pcVar14[0x45] = '\0';
        pcVar14[0x46] = '\0';
        pcVar14[0x47] = '\0';
      }
    }
    else {
      *(short *)(pcVar14 + 0x34) = *(short *)(pcVar14 + 0x34) + -1;
      sVar1 = *(short *)(pcVar14 + 0x2e);
      *(short *)(pcVar14 + 0x2e) = sVar1 + 0x1e;
      if (0xff < (short)(sVar1 + 0x1e)) {
        pcVar14[0x2e] = -1;
        pcVar14[0x2f] = '\0';
      }
    }
    sVar15 = sVar15 + 1;
    pcVar14 = pcVar14 + 0x48;
  } while (sVar15 < 200);
  FUN_0037572c(*(undefined4 *)(local_58 + 0x148),param_1);
  return;
}
