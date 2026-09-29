// OoT3D decomp @ 0011976c  name=FUN_0011976c  size=2036

void FUN_0011976c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  short sVar16;
  undefined4 uVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  int iStack_a4;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  int local_5c;
  int local_58;

  FUN_003731e0(param_1 + 0x1a8);
  fVar18 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xace) * 0x500));
  fVar20 = *(float *)(param_1 + 0xafc);
  fVar19 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xace) * 0x700));
  uVar14 = DAT_00119aac;
  fVar21 = *(float *)(param_1 + 0xafc);
  FUN_00373500(fVar18 * fVar20,DAT_00119aac,*(undefined4 *)(param_1 + 0xaf4),param_1 + 0x28);
  FUN_00373500(fVar19 * fVar21,uVar14,*(undefined4 *)(param_1 + 0xaf4),param_1 + 0x30);
  uVar1 = DAT_00119ab8;
  uVar17 = DAT_00119ab4;
  FUN_00373500(DAT_00119ab8,DAT_00119ab4,DAT_00119ab0,param_1 + 0xafc);
  uVar2 = DAT_00119abc;
  FUN_00373500(DAT_00119abc,uVar14,*(undefined4 *)(param_1 + 100),param_1 + 0x2c);
  fVar18 = DAT_00119ac0;
  FUN_00373500(DAT_00119ac0,uVar17,uVar17,param_1 + 100);
  uVar7 = DAT_0011a000;
  uVar6 = DAT_00119ad8;
  uVar5 = DAT_00119ad4;
  uVar4 = DAT_00119ad0;
  iVar15 = DAT_00119acc;
  uVar3 = DAT_00119ac8;
  uVar14 = DAT_00119ac4;
  local_58 = param_1 + 0xc04;
  local_5c = param_1 + 3000;
  switch(*(undefined2 *)(param_1 + 0xaee)) {
  case 0:
    if (*(short *)(param_1 + 0xae2) == 0) {
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,0x14);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
      FUN_00374a58(uVar1,param_1 + 0x1a8,0x14);
      *(undefined2 *)(param_1 + 0xaee) = 1;
    }
    break;
  case 1:
    iVar15 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),uVar17,param_1 + 0x1a8);
    if (iVar15 != 0) {
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,0x18);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
      FUN_00370350(uVar1,param_1 + 0x1a8,0x18);
      *(undefined2 *)(param_1 + 0xaee) = 2;
      *(undefined2 *)(param_1 + 0xae2) = 0x96;
      return;
    }
    break;
  case 2:
    *(undefined1 *)(param_1 + 0xacc) = 2;
    FUN_00375bcc(param_1,uVar6);
    uVar14 = DAT_00119ae0;
    fVar19 = DAT_00119adc;
    *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0xc20);
    uVar7 = DAT_00119ae8;
    uVar6 = DAT_00119ae4;
    *(float *)(param_1 + 0xbb0) = *(float *)(param_1 + 0xc24) + fVar19;
    *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_1 + 0xc28);
    FUN_00373500(uVar7,uVar6,uVar14,local_5c);
    uVar8 = DAT_00119aec;
    FUN_00373500(DAT_00119aec,uVar17,DAT_00119aec,param_1 + 0xbbc);
    FUN_00373500(uVar7,uVar6,uVar14,param_1 + 0xbc0);
    if ((int)*(short *)(param_1 + 0xae2) - 0x1fU < 0x3b) {
      FUN_00373500(uVar8,uVar17,DAT_00119af0,param_1 + 0xbc4);
    }
    if (*(short *)(param_1 + 0xae2) == 0) {
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,0x11);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
      FUN_00374a58(uVar1,param_1 + 0x1a8,0x11);
      *(undefined2 *)(param_1 + 0xaee) = 3;
      *(undefined2 *)(param_1 + 0xae2) = 9;
      *(undefined2 *)(param_1 + 0xae4) = 0x17;
      FUN_00375bcc(param_1,DAT_00119af4);
      return;
    }
    FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,1000);
    if (*(short *)(param_1 + 0xae2) < -6) {
      iVar15 = 0;
      do {
        FUN_00373500(uVar1,uVar17,uVar5,param_1 + iVar15 * 4 + 0xbc8);
        iVar15 = (int)(short)((short)iVar15 + 1);
      } while (iVar15 < 0xf);
    }
    else if ((int)*(short *)(param_1 + 0xae2) - 0xbU < 0x1c) {
      iVar15 = 0;
      if (*(short *)(param_1 + 0xad8) < 0xf) {
        *(short *)(param_1 + 0xad8) = *(short *)(param_1 + 0xad8) + 1;
      }
      if (0 < *(short *)(param_1 + 0xad8)) {
        do {
          FUN_00373500(uVar2,uVar17,uVar5,param_1 + iVar15 * 4 + 0xbc8);
          iVar15 = (int)(short)((short)iVar15 + 1);
        } while (iVar15 < *(short *)(param_1 + 0xad8));
      }
    }
    if (*(short *)(param_1 + 0xae2) < 0x2e) {
      FUN_00373500(DAT_00119e70,uVar3,DAT_00119e6c,local_5c);
      *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_1 + 3000);
      if (*(short *)(param_1 + 0xae2) < 0x2e) {
        FUN_00373500(DAT_00119e74,uVar6,uVar4,local_58);
        *(undefined2 *)(DAT_00119e78 + param_1) = 1;
        *(undefined1 *)(param_1 + 0xff4) = 2;
        puVar9 = DAT_00119e7c;
        uVar14 = *(undefined4 *)(param_1 + 0xbb0);
        uVar17 = *(undefined4 *)(param_1 + 0xbb4);
        *DAT_00119e7c = *(undefined4 *)(param_1 + 0xbac);
        puVar9[1] = uVar14;
        puVar9[2] = uVar17;
      }
    }
    sVar16 = *(short *)(param_1 + 0xae2);
    if (sVar16 == 0x47) {
      *(undefined1 *)(param_1 + 0xba8) = 1;
    }
    else if (sVar16 == 0x45) {
      *(undefined1 *)(param_1 + 0xba8) = 2;
    }
    else {
      if (sVar16 == 0x44) {
        uVar11 = 3;
      }
      else if (sVar16 == 0x42) {
        uVar11 = 4;
      }
      else if (sVar16 == 0x41) {
        uVar11 = 5;
      }
      else {
        if (sVar16 != 0x3f) {
          if (sVar16 < 0x2e) {
            return;
          }
          goto LAB_00119c10;
        }
        uVar11 = 6;
      }
      *(undefined1 *)(param_1 + 0xba8) = uVar11;
    }
LAB_00119c10:
    local_74 = uVar1;
    local_70 = (float)FUN_00371e50(uVar4);
    local_70 = local_70 + DAT_00119e80;
    local_6c = uVar1;
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3
                                       );
    FUN_003735e8(fVar19 * DAT_00119e84 * DAT_00119e88,&local_b0,0);
    FUN_00371e50(DAT_00119e8c);
    FUN_00371234(&local_b0,1);
    FUN_003735ac(&local_80,&local_b0,&local_74);
    fVar19 = *(float *)(param_1 + 0xbac);
    sVar16 = 0;
    fVar20 = *(float *)(param_1 + 0xbb0);
    fVar21 = *(float *)(param_1 + 0xbb4);
    pcVar12 = *(char **)(DAT_00119e90 + param_2);
    do {
      if (*pcVar12 == '\0') {
        *pcVar12 = '\b';
        fVar10 = DAT_00119e98;
        *(float *)(pcVar12 + 4) = fVar19 + local_80;
        *(float *)(pcVar12 + 8) = fVar20 + local_7c;
        *(float *)(pcVar12 + 0xc) = fVar21 + local_78;
        puVar9 = DAT_00119e94;
        uVar14 = DAT_00119e94[1];
        uVar17 = DAT_00119e94[2];
        *(undefined4 *)(pcVar12 + 0x10) = *DAT_00119e94;
        *(undefined4 *)(pcVar12 + 0x14) = uVar14;
        *(undefined4 *)(pcVar12 + 0x18) = uVar17;
        uVar14 = puVar9[1];
        uVar17 = puVar9[2];
        *(undefined4 *)(pcVar12 + 0x1c) = *puVar9;
        *(undefined4 *)(pcVar12 + 0x20) = uVar14;
        *(undefined4 *)(pcVar12 + 0x24) = uVar17;
        *(undefined4 *)(pcVar12 + 0x38) = uVar1;
        *(float *)(pcVar12 + 0x34) = fVar18 * fVar10;
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12[0x2c] = '\0';
        pcVar12[0x2d] = '\0';
        pcVar12[0x2e] = '\0';
        pcVar12[0x2f] = '\0';
        return;
      }
      sVar16 = sVar16 + 1;
      pcVar12 = pcVar12 + 0x4c;
    } while (sVar16 < 0x96);
    return;
  case 3:
    iVar13 = 0;
    *(undefined1 *)(param_1 + 0xacc) = 2;
    do {
      FUN_00373500(uVar1,uVar17,uVar5,param_1 + iVar13 * 4 + 0xbc8);
      uVar2 = DAT_00119ea0;
      iVar13 = (int)(short)((short)iVar13 + 1);
    } while (iVar13 < 0xf);
    if (*(short *)(param_1 + 0xae2) == 1) {
      *(undefined4 *)(*(int *)(iVar15 + 0x44) + 0x1718) = DAT_00119e9c;
      FUN_00375bcc(param_1,uVar2);
    }
    if (*(short *)(param_1 + 0xae2) == 0) {
      FUN_0036fc20(uVar17,DAT_00119ea4,local_5c);
      *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_1 + 3000);
      FUN_0036fc20(uVar17,uVar4,local_58);
      FUN_00373500(*(undefined4 *)(param_1 + 0xb30),uVar3,uVar14,(undefined4 *)(param_1 + 0xbac));
      FUN_00373500(*(undefined4 *)(param_1 + 0xb34),uVar3,uVar14,param_1 + 0xbb0);
      FUN_00373500(*(undefined4 *)(param_1 + 0xb38),uVar3,uVar14,param_1 + 0xbb4);
    }
    if (*(short *)(param_1 + 0xae4) == 0) {
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,0x12);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
      FUN_00370350(uVar1,param_1 + 0x1a8,0x12);
      *(undefined2 *)(param_1 + 0xaee) = 4;
      *(undefined4 *)(param_1 + 0xbbc) = uVar1;
      *(undefined4 *)(param_1 + 0xbc4) = uVar1;
      *(undefined4 *)(param_1 + 3000) = uVar1;
      *(undefined4 *)(param_1 + 0xbc0) = uVar1;
      return;
    }
    break;
  case 4:
    *(undefined1 *)(param_1 + 0xacc) = 2;
    iVar13 = FUN_003736fc(uVar7,uVar17,param_1 + 0x1a8);
    if (iVar13 != 0) {
      sVar16 = 0;
      do {
        local_ac = (int)*(short *)(param_1 + 0x92);
        iStack_a4 = (int)(short)(sVar16 + 0x104);
        local_a8 = 0;
        local_b0 = 0;
        FUN_0036aa20(*(undefined4 *)(param_1 + 0xb30),*(undefined4 *)(param_1 + 0xb34),
                     *(undefined4 *)(param_1 + 0xb38),param_2 + 0x208c,param_1,param_2,0xe8);
        sVar16 = sVar16 + 1;
      } while (sVar16 < 5);
      FUN_00375bcc(param_1,DAT_0011a004);
      FUN_00375bcc(param_1,DAT_0011a008);
    }
    iVar13 = FUN_003736fc(DAT_0011a00c,uVar17,param_1 + 0x1a8);
    uVar14 = DAT_00119ea0;
    if (iVar13 != 0) {
      *(undefined4 *)(*(int *)(iVar15 + 0x44) + 0x171c) = DAT_0011a010;
      FUN_00375bcc(param_1,uVar14);
    }
    iVar15 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),uVar17,param_1 + 0x1a8);
    if (iVar15 != 0) {
      uVar14 = FUN_0036ae14(param_1 + 0x1a8,0x13);
      uVar14 = VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar14;
      FUN_00370350(uVar1,param_1 + 0x1a8,0x13);
      *(undefined2 *)(param_1 + 0xaee) = 5;
      return;
    }
    break;
  case 5:
    *(undefined1 *)(param_1 + 0xacc) = 2;
    iVar15 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),uVar17,param_1 + 0x1a8);
    if (iVar15 != 0) {
      FUN_0036e288(param_1,param_2);
      return;
    }
  }
  return;
}
