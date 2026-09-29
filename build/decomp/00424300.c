// OoT3D decomp @ 00424300  name=FUN_00424300  size=2152

/* WARNING: Type propagation algorithm not settling */

void FUN_00424300(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char local_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;

  iVar1 = DAT_0042486c;
  if (*(int *)(DAT_0042486c + 0x18) == 0) {
    return;
  }
  FUN_002f9484(auStack_34,auStack_38,local_3c);
  fVar13 = DAT_0042487c;
  uVar7 = DAT_00424870;
  switch(*(undefined4 *)(iVar1 + 0x18)) {
  case 1:
    if (local_3c[0] != '\0') goto switchD_00424334_default;
    uVar7 = 2;
    break;
  case 2:
    uVar5 = FUN_0033b5ec();
    if ((uVar5 & 0x200) != 0) {
      *(undefined4 *)(iVar1 + 0x30) = 1;
    }
    uVar5 = FUN_0033b5ec();
    if ((uVar5 & 0x100) != 0) {
      iVar8 = FUN_0035b164();
      if (iVar8 != 0) goto code_r0x004248e0;
      *(undefined4 *)(iVar1 + 0x34) = 1;
    }
    iVar8 = FUN_0033f428(4,0xca,0x34,0x20,1);
    if (iVar8 == 0) {
      iVar8 = FUN_0033f428(0x42,0xc6,0x48,0x2a,1);
      if (iVar8 == 0) {
        iVar8 = FUN_0033f428(200,0xce,0x36,0x22,1);
        if (iVar8 != 0 || *(int *)(iVar1 + 0x30) != 0) {
          *(undefined4 *)(iVar1 + 0x18) = 6;
          goto switchD_00424334_default;
        }
        iVar8 = FUN_0033f428(0x8e,0xce,0x36,0x22,1);
        if (iVar8 == 0 && *(int *)(iVar1 + 0x34) == 0) {
          FUN_00438f00();
          if (*(int *)(iVar1 + 0x28) == -1) {
            if (local_3c[0] != '\0') goto switchD_00424334_default;
          }
          else {
            if (local_3c[0] != '\0') goto switchD_00424334_default;
            *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
          }
          FUN_00438720();
          goto switchD_00424334_default;
        }
        iVar8 = FUN_0035b164();
        if (iVar8 == 1) goto switchD_00424334_default;
        uVar7 = 7;
      }
      else {
        uVar7 = 5;
      }
    }
    else {
      uVar7 = 8;
    }
    break;
  case 3:
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + 1;
    local_2c = uVar7;
    fVar13 = (float)VectorSignedToFloat(*(int *)(iVar1 + 0x44) * 0x32,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x48),(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x48),(byte)(in_fpscr >> 0x15) & 3);
    iVar8 = (int)(fVar14 + (fVar13 - fVar15) * DAT_00424874);
    *(int *)(iVar1 + 0x48) = iVar8;
    local_30 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002f9430(*DAT_00424878,&local_30,1,*(undefined4 *)(iVar1 + 0x40));
    *(float *)(*(int *)(iVar1 + 0x14) + 0x34) = DAT_0042487c;
    if (*(int *)(iVar1 + 0x38) != 4) goto switchD_00424334_default;
    FUN_0037547c(DAT_00424888,0,4,DAT_00424884,DAT_00424884,DAT_00424880);
    iVar8 = FUN_00313ce0(DAT_0042488c);
    uVar7 = 0;
    if (iVar8 != 0) {
      uVar7 = FUN_002f8ee4(iVar8,1,7);
    }
    *(undefined4 *)(iVar1 + 0x54) = uVar7;
    iVar8 = *(int *)(iVar1 + 0x40);
    bVar12 = iVar8 != 0;
    if (!bVar12) {
      iVar8 = *(int *)(iVar1 + 0x20);
    }
    if (bVar12 || iVar8 != 2) {
LAB_00424610:
      FUN_002f8d74(uVar7,0,*(undefined4 *)(iVar1 + 0x4c));
    }
    else if (*(char *)(DAT_00424890 + 0x52) == '\0') {
      if (((uint)*(ushort *)(DAT_00424890 + 0xb6) & *(uint *)(DAT_00424894 + 0xc)) == 0)
      goto LAB_00424610;
      FUN_002f8d74(uVar7,0,0x55);
    }
    else {
      FUN_002f8d74(uVar7,0,0x7b);
    }
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x54),0,
                 *(undefined4 *)(DAT_00424898 + -0xc + *(int *)(iVar1 + 0x44) * 4),
                 *(undefined4 *)(DAT_00424898 + *(int *)(iVar1 + 0x40) * 4),0x2a,0x2a);
    *(undefined4 *)(iVar1 + 0x38) = 0;
    uVar7 = 4;
    break;
  case 4:
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = DAT_0042487c - fVar14 * DAT_0042489c;
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(*(int *)(iVar1 + 0x14) + 0x34) = DAT_0042487c - fVar14 * DAT_004248a0;
    FUN_002f8ce0(fVar16,*(undefined4 *)(iVar1 + 0x54),0);
    iVar3 = DAT_00424898;
    iVar6 = *(int *)(iVar1 + 0x38) * -3;
    iVar8 = *(int *)(iVar1 + 0x38) * 6;
    iVar11 = DAT_00424898 + -0xc;
    fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x54),0,
                 *(int *)(iVar11 + *(int *)(iVar1 + 0x44) * 4) + iVar6,
                 *(int *)(DAT_00424898 + *(int *)(iVar1 + 0x40) * 4) + iVar6,
                 (int)(fVar15 + DAT_004248a4),(int)(fVar14 + DAT_004248a4));
    puVar2 = DAT_00424878;
    local_30 = VectorSignedToFloat(*(int *)(iVar1 + 0x44) * 0x32,(byte)(in_fpscr >> 0x15) & 3);
    local_2c = VectorSignedToFloat(*(int *)(iVar1 + 0x40) * 0x30,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002f9430(DAT_00424878[1],&local_30,1);
    FUN_002f8b80(fVar16,fVar13,puVar2[1],1,*(undefined4 *)(iVar1 + 0x40));
    iVar8 = *(int *)(iVar1 + 0x38);
    local_44 = VectorSignedToFloat(0xa8 - iVar8,(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = iVar8 * 2 + 0x2c;
    local_40 = VectorSignedToFloat(8 - iVar8,(byte)(in_fpscr >> 0x15) & 3);
    local_4c = VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    local_48 = VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002fc534(puVar2[1],&local_44,&local_4c,1,*(undefined4 *)(iVar1 + 0x40));
    iVar8 = *(int *)(iVar1 + 0x38) + 1;
    *(int *)(iVar1 + 0x38) = iVar8;
    if (iVar8 != 6) goto switchD_00424334_default;
    if (*(int *)(iVar1 + 0x54) != 0) {
      FUN_00305830();
      FUN_003525d4();
    }
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x34) = DAT_004248a8;
    local_30 = DAT_004248ac;
    local_2c = DAT_004248b0;
    FUN_002f9430(puVar2[1],&local_30,1,*(undefined4 *)(iVar1 + 0x40));
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x4c),
                 *(undefined4 *)(iVar11 + *(int *)(iVar1 + 0x44) * 4),
                 *(undefined4 *)(iVar3 + *(int *)(iVar1 + 0x40) * 4),0x2a,0x2a);
    *(undefined4 *)(iVar1 + 0x50) = 1;
    uVar7 = 2;
    break;
  case 5:
    iVar8 = FUN_0033f428(0x42,0xc6,0x48,0x2a,2);
    goto joined_r0x0042495c;
  case 6:
    iVar8 = FUN_0033f428(200,0xce,0x36,0x22,2);
    if (iVar8 != 0 || *(int *)(iVar1 + 0x30) != 0) {
code_r0x004248e0:
      FUN_002f8af4();
      FUN_002f8a34(0);
      FUN_0037547c(DAT_00424bdc,0,4,DAT_00424884,DAT_00424884,DAT_00424880);
      FUN_00343270(*(undefined4 *)(iVar1 + 0xc));
      return;
    }
    goto joined_r0x00424968;
  case 7:
    iVar8 = FUN_0033f428(0x8e,0xce,0x36,0x22,2);
    if (iVar8 != 0 || *(int *)(iVar1 + 0x34) != 0) {
      FUN_002f8af4();
      FUN_0037547c(DAT_00424bdc,0,4,DAT_00424884,DAT_00424884,DAT_00424880);
      FUN_002f8708(0);
      FUN_00343270(*(undefined4 *)(iVar1 + 0xc));
      return;
    }
    goto joined_r0x00424968;
  case 8:
    iVar8 = FUN_0033f428(4,0xca,0x34,0x20,2);
joined_r0x0042495c:
    if (iVar8 != 0) {
      FUN_002fd84c(0,1);
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 10;
      return;
    }
joined_r0x00424968:
    if (local_3c[0] != '\0') goto switchD_00424334_default;
    uVar7 = 1;
    break;
  case 9:
    iVar8 = FUN_002f88e0();
    if (iVar8 == 0) goto switchD_00424334_default;
    FUN_00343270(*(undefined4 *)(iVar1 + 0xc));
    uVar7 = 1;
    break;
  case 10:
    iVar8 = FUN_004385e0();
    if (iVar8 != 0) {
      FUN_002f8af4();
      FUN_002f87ec(2);
      return;
    }
  default:
    goto switchD_00424334_default;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar7;
switchD_00424334_default:
  FUN_00438c38();
  FUN_002f8160(*(undefined4 *)(iVar1 + 0x10));
  if (*(int *)(iVar1 + 0x54) != 0) {
    FUN_002f8160();
  }
  FUN_002f7b44();
  FUN_002f7af4(*(undefined4 *)(DAT_00424be4 + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(DAT_00424be0 + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(iVar1 + 0x14));
  FUN_002f79b4(*(undefined4 *)(DAT_00424bec + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(DAT_00424be8 + *(int *)(iVar1 + 0x20) * 4),
               *(undefined4 *)(iVar1 + 0x14));
  iVar11 = DAT_00424bf8;
  iVar3 = DAT_00424bf4;
  iVar6 = DAT_00424bf0;
  uVar4 = DAT_004248b0;
  iVar8 = DAT_00424890;
  puVar2 = DAT_00424878;
  uVar7 = DAT_00424870;
  if (*(int *)(iVar1 + 0x18) != 3) {
    iVar10 = 0;
    do {
      iVar9 = (ushort)((*(ushort *)(iVar8 + 0x8a) & *(ushort *)(iVar6 + iVar10 * 2)) >>
                      *(sbyte *)(iVar3 + iVar10)) - 1;
      *(int *)(iVar11 + iVar10 * 4) = iVar9;
      if (iVar9 < 0) {
        local_44 = uVar4;
      }
      else {
        local_44 = VectorSignedToFloat(iVar9 * 0x32,(byte)(in_fpscr >> 0x15) & 3);
        local_40 = uVar7;
      }
      FUN_002f9430(*puVar2,&local_44,1,iVar10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
  }
  FUN_002f78c0();
  FUN_002fcb04(*(undefined4 *)(iVar1 + 8),(int)*(short *)(DAT_00424890 + 0xe8),0);
  FUN_00438964();
  return;
}
