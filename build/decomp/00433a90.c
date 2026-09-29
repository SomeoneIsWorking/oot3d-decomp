// OoT3D decomp @ 00433a90  name=FUN_00433a90  size=4396

/* WARNING: Type propagation algorithm not settling */

void FUN_00433a90(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int unaff_r5;
  int *piVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  char local_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  float local_34;
  float local_30;

  puVar6 = DAT_00434194;
  if (*(int *)(DAT_00434194 + 0x1a) == 0) {
    return;
  }
  iVar14 = 0;
  if ((*(char *)(param_1 + 0x100) == '\x03') && (iVar14 = param_1, param_1 != 0)) {
    unaff_r5 = *(int *)(DAT_00434198 + param_1);
  }
  FUN_002f9484(auStack_38,auStack_3c,local_40);
  piVar9 = DAT_004341bc;
  switch(*(undefined4 *)(puVar6 + 0x1a)) {
  default:
    goto code_r0x00434b64;
  case 1:
    if (local_40[0] != '\0') goto code_r0x00434b64;
    iVar14 = 2;
    break;
  case 2:
    *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x2a) = 0xffffffff;
    FUN_002ec3e4();
    uVar10 = FUN_0033b5ec();
    if ((uVar10 & 0x200) != 0) {
      iVar14 = FUN_0035b164();
      if (iVar14 != 0) goto code_r0x00433ca0;
      *(undefined4 *)(puVar6 + 0x52) = 1;
    }
    uVar10 = FUN_0033b5ec();
    if ((uVar10 & 0x100) != 0) {
      *(undefined4 *)(puVar6 + 0x54) = 1;
    }
    iVar14 = FUN_002eba9c(1);
    if (iVar14 != 0) {
      *(undefined4 *)(puVar6 + 0x32) = *(undefined4 *)(puVar6 + 0x28);
      FUN_002eb72c(*(undefined4 *)(puVar6 + 0x28),0);
      *(undefined4 *)(puVar6 + 0x1a) = 7;
    }
    iVar14 = FUN_0033f428(4,0xcc,0x34,0x20,1);
    if (iVar14 != 0) {
      *(undefined4 *)(puVar6 + 0x1a) = 3;
    }
    iVar14 = FUN_0033f428(0xb6,0xc6,0x48,0x2a,1);
    if (iVar14 != 0) {
      *(undefined4 *)(puVar6 + 0x1a) = 6;
    }
    iVar14 = FUN_0033f428(0x42,0xcc,0x36,0x22,1);
    if (iVar14 != 0 || *(int *)(puVar6 + 0x54) != 0) {
      *(undefined4 *)(puVar6 + 0x1a) = 4;
    }
    iVar14 = FUN_0033f428(0x7c,0xce,0x36,0x22,1);
    if ((iVar14 == 0 && *(int *)(puVar6 + 0x52) == 0) || (iVar14 = FUN_0035b164(), iVar14 == 1))
    goto code_r0x00434b64;
    iVar14 = 5;
    break;
  case 3:
    iVar14 = FUN_0033f428(4,0xcc,0x34,0x20,2);
    goto joined_r0x00433d1c;
  case 4:
    iVar14 = FUN_0033f428(0x42,0xcc,0x36,0x22,2);
    if (iVar14 != 0 || *(int *)(puVar6 + 0x54) != 0) {
code_r0x00433ca0:
      FUN_002eb628();
      FUN_002f0444(0);
      FUN_0037547c(DAT_004341a4,0,4,DAT_004341a0,DAT_004341a0,DAT_0043419c);
      FUN_00343270(*(undefined4 *)(puVar6 + 0x12));
      return;
    }
    goto joined_r0x00433d28;
  case 5:
    iVar14 = FUN_0033f428(0x7c,0xce,0x36,0x22,2);
    if (iVar14 != 0 || *(int *)(puVar6 + 0x52) != 0) {
      FUN_002eb628();
      FUN_002f8708(0);
      FUN_0037547c(DAT_004341a4,0,4,DAT_004341a0,DAT_004341a0,DAT_0043419c);
      FUN_00343270(*(undefined4 *)(puVar6 + 0x12));
      return;
    }
    goto joined_r0x00433d28;
  case 6:
    iVar14 = FUN_0033f428(0xb6,0xc6,0x48,0x2a,2);
joined_r0x00433d1c:
    if (iVar14 != 0) {
      FUN_002fd84c(0,1);
      *(undefined4 *)(puVar6 + 0x30) = 0;
      *(undefined4 *)(puVar6 + 0x1a) = 0xe;
      return;
    }
joined_r0x00433d28:
    if (local_40[0] != '\0') goto code_r0x00434b64;
LAB_0043418c:
    iVar14 = 1;
    break;
  case 7:
    if (local_40[0] == '\0') {
      *(undefined4 *)(puVar6 + 0x2e) = 0;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      FUN_002f8ce0(DAT_004341a8,*(undefined4 *)(puVar6 + 0x22),0);
      if (*(int *)(DAT_004341ac + 4) == 0) {
        bVar1 = *(byte *)(*(int *)(puVar6 + 0x28) + DAT_004341ac + 0x13a2);
      }
      else {
        bVar1 = *(byte *)(*(int *)(puVar6 + 0x28) + DAT_004341ac + 0x138a);
      }
      FUN_002f8d74(*(undefined4 *)(puVar6 + 0x22),0,
                   *(undefined1 *)((uint)bVar1 + DAT_004341ac + 0x8c));
      FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x22),0,*puVar6,puVar6[1],0x34,0x34,0xfffffffb,
                   0xfffffffb);
      uVar8 = DAT_004341a0;
      uVar7 = DAT_0043419c;
      *(undefined4 *)(puVar6 + 0x1a) = 8;
      FUN_0037547c(DAT_004341b0,0,4,uVar8,uVar8,uVar7);
    }
    goto code_r0x00434b64;
  case 8:
    iVar14 = *(int *)(puVar6 + 0x2e);
    *(int *)(puVar6 + 0x2e) = iVar14 + 1;
    if (iVar14 + 1 < 0x10) {
      uVar10 = *(uint *)(puVar6 + 0x2c);
    }
    else {
      *(undefined4 *)(puVar6 + 0x2e) = 0;
      uVar10 = *(uint *)(puVar6 + 0x2c) ^ 1;
      *(uint *)(puVar6 + 0x2c) = uVar10;
    }
    if (uVar10 == 0) {
      fVar18 = (float)VectorSignedToFloat(*(int *)(puVar6 + 0x2e),(byte)(in_fpscr >> 0x15) & 3);
    }
    else {
      fVar18 = (float)VectorSignedToFloat(0x10 - *(int *)(puVar6 + 0x2e),
                                          (byte)(in_fpscr >> 0x15) & 3);
    }
    FUN_002f8ce0(fVar18 * DAT_004341b4,*(undefined4 *)(puVar6 + 0x22),0);
    FUN_002ec3e4();
    FUN_002eb304(*(undefined4 *)(puVar6 + 0x28),&local_30,&local_34);
    FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x1e),*(undefined4 *)(puVar6 + 0x28),(int)local_30,
                 (int)local_34,0x34,0x34,0xfffffffb,0xfffffffb);
    iVar14 = FUN_002eba9c(2);
    if (iVar14 != 0) {
      iVar14 = FUN_002eb210();
      if (iVar14 != 0) {
        FUN_002f8ce0(DAT_004341b8,*(undefined4 *)(puVar6 + 0x22),0);
        *(undefined4 *)(*DAT_004341bc + 0x34) = DAT_004341c0;
        *(undefined4 *)(puVar6 + 0x1a) = 0xc;
        *(undefined4 *)(puVar6 + 0x1c) = 1;
        goto code_r0x00434b64;
      }
      uVar4 = *puVar6;
      if (*(int *)(puVar6 + 0x2a) == *(int *)(puVar6 + 0x28)) {
        FUN_002f8d40(*(undefined4 *)(puVar6 + 0x1e),*(int *)(puVar6 + 0x28),uVar4,puVar6[1],0x2a,
                     0x2a);
        piVar9 = DAT_004341bc;
        *(undefined4 *)(puVar6 + 0x44) = 0xffffffff;
        *(undefined4 *)(puVar6 + 0x46) = 0xffffffff;
        FUN_002f7af4(DAT_004341c8,DAT_004341c4,piVar9[1]);
        uVar8 = DAT_004341a0;
        uVar7 = DAT_0043419c;
        *(undefined4 *)(puVar6 + 0x1a) = 2;
        FUN_0037547c(DAT_004341cc,0,4,uVar8,uVar8,uVar7);
        FUN_002eb1bc(1,0);
        FUN_002f8ce0(DAT_004341b8,*(undefined4 *)(puVar6 + 0x22),0);
        *(undefined4 *)(*piVar9 + 0x34) = DAT_004341c0;
        goto code_r0x00434b64;
      }
      puVar6[6] = uVar4;
      puVar6[10] = uVar4;
      uVar7 = DAT_004341c4;
      piVar9 = DAT_004341bc;
      puVar6[7] = puVar6[1];
      puVar6[0xb] = puVar6[1];
      uVar8 = DAT_004341c8;
      puVar6[8] = puVar6[4];
      puVar6[0xc] = puVar6[4];
      puVar6[9] = puVar6[5];
      puVar6[0xd] = puVar6[5];
      *(undefined4 *)(puVar6 + 0x44) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x46) = 0xffffffff;
      FUN_002f7af4(uVar8,uVar7,piVar9[1]);
      *(undefined4 *)(puVar6 + 0x2e) = 0;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      iVar14 = FUN_002eb0d8();
      uVar8 = DAT_004341a0;
      uVar7 = DAT_0043419c;
      if (iVar14 == 0) {
        FUN_002f8ce0(DAT_004341b8,*(undefined4 *)(puVar6 + 0x22),0);
        *(undefined4 *)(*piVar9 + 0x34) = DAT_004341c0;
        FUN_0033c25c(1);
        goto LAB_0043418c;
      }
      *(undefined4 *)(puVar6 + 0x1a) = 9;
      FUN_0037547c(DAT_004341b0,0,4,uVar8,uVar8,uVar7);
    }
    iVar14 = FUN_0033f428(4,0xcc,0x34,0x20,0);
    if (iVar14 == 0) {
      iVar14 = FUN_0033f428(0xb6,0xc6,0x48,0x2a,0);
      if (iVar14 == 0) {
        iVar14 = FUN_0033f428(0x42,0xcc,0x36,0x22,0);
        if (iVar14 == 0 && *(int *)(puVar6 + 0x54) == 0) {
          iVar14 = FUN_0033f428(0x7c,0xce,0x36,0x22,0);
          if (iVar14 == 0 && *(int *)(puVar6 + 0x52) == 0) goto code_r0x00434b64;
          *(undefined4 *)(puVar6 + 0x44) = 0xffffffff;
          *(undefined4 *)(puVar6 + 0x46) = 0xffffffff;
          FUN_002f7af4(DAT_004341c8,DAT_004341c4,DAT_004341bc[1]);
          *(undefined4 *)(puVar6 + 0x4a) = *(undefined4 *)(puVar6 + 0x3c);
          *(undefined4 *)(puVar6 + 0x4c) = *(undefined4 *)(puVar6 + 0x3e);
          FUN_0033c25c(1);
          iVar14 = 5;
        }
        else {
          *(undefined4 *)(puVar6 + 0x44) = 0xffffffff;
          *(undefined4 *)(puVar6 + 0x46) = 0xffffffff;
          FUN_002f7af4(DAT_004341c8,DAT_004341c4,DAT_004341bc[1]);
          *(undefined4 *)(puVar6 + 0x4a) = *(undefined4 *)(puVar6 + 0x3c);
          *(undefined4 *)(puVar6 + 0x4c) = *(undefined4 *)(puVar6 + 0x3e);
          FUN_0033c25c(1);
          iVar14 = 4;
        }
      }
      else {
        *(undefined4 *)(puVar6 + 0x44) = 0xffffffff;
        *(undefined4 *)(puVar6 + 0x46) = 0xffffffff;
        FUN_002f7af4(DAT_004341c8,DAT_004341c4,DAT_004341bc[1]);
        *(undefined4 *)(puVar6 + 0x4a) = *(undefined4 *)(puVar6 + 0x3c);
        *(undefined4 *)(puVar6 + 0x4c) = *(undefined4 *)(puVar6 + 0x3e);
        FUN_0033c25c(1);
        iVar14 = 6;
      }
    }
    else {
      *(undefined4 *)(puVar6 + 0x44) = 0xffffffff;
      *(undefined4 *)(puVar6 + 0x46) = 0xffffffff;
      FUN_002f7af4(DAT_004341c8,DAT_004341c4,DAT_004341bc[1]);
      *(undefined4 *)(puVar6 + 0x4a) = *(undefined4 *)(puVar6 + 0x3c);
      *(undefined4 *)(puVar6 + 0x4c) = *(undefined4 *)(puVar6 + 0x3e);
      FUN_0033c25c(1);
      iVar14 = 3;
    }
    break;
  case 9:
    uVar10 = (uint)(ushort)puVar6[10] +
             (int)((uint)(ushort)puVar6[8] - (uint)(ushort)puVar6[10]) / 2;
    puVar6[10] = (short)uVar10;
    uVar11 = (uint)(ushort)puVar6[0xb] +
             (int)((uint)(ushort)puVar6[9] - (uint)(ushort)puVar6[0xb]) / 2;
    puVar6[0xb] = (short)uVar11;
    FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x1e),*(undefined4 *)(puVar6 + 0x28),uVar10 & 0xffff,
                 uVar11 & 0xffff,0x34,0x34,0xfffffffb,0xfffffffb);
    FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x22),0,puVar6[10],puVar6[0xb],0x34,0x34,0xfffffffb,
                 0xfffffffb);
    FUN_002f8ce0(DAT_004347d0,*(undefined4 *)(puVar6 + 0x22),0);
    uVar10 = (uint)(ushort)puVar6[0xc] +
             (int)((uint)(ushort)puVar6[6] - (uint)(ushort)puVar6[0xc]) / 2;
    puVar6[0xc] = (short)uVar10;
    uVar11 = (uint)(ushort)puVar6[0xd] +
             (int)((uint)(ushort)puVar6[7] - (uint)(ushort)puVar6[0xd]) / 2;
    puVar6[0xd] = (short)uVar11;
    FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x1e),*(undefined4 *)(puVar6 + 0x2a),uVar10 & 0xffff,
                 uVar11 & 0xffff,0x34,0x34,0xfffffffb,0xfffffffb);
    iVar12 = *(int *)(puVar6 + 0x2e);
    iVar14 = iVar12;
    if (4 < iVar12) {
      iVar14 = 10;
    }
    *(int *)(puVar6 + 0x2e) = iVar12 + 1;
    if (iVar12 < 5) goto code_r0x00434b64;
    break;
  case 10:
    FUN_00446a50();
    iVar12 = DAT_004341ac;
    iVar13 = *(int *)(puVar6 + 0x28);
    bVar16 = *(int *)(DAT_004341ac + 4) == 0;
    if (bVar16) {
      bVar1 = *(byte *)(DAT_004341ac + iVar13 + 0x13a2);
    }
    else {
      bVar1 = *(byte *)(DAT_004341ac + iVar13 + 0x138a);
    }
    if (bVar16) {
      bVar2 = *(byte *)(*(int *)(puVar6 + 0x2a) + DAT_004341ac + 0x13a2);
    }
    else {
      bVar2 = *(byte *)(*(int *)(puVar6 + 0x2a) + DAT_004341ac + 0x138a);
    }
    uVar5 = (*(ushort *)(DAT_004341ac + 0x8a) & *(ushort *)(DAT_004347d4 + 6)) >>
            (uint)*(byte *)(DAT_004347d8 + 3);
    if ((((iVar13 == 5 || iVar13 == 0x17) || iVar13 == 0xb) || iVar13 == 0x11) && (bVar1 != 0xff)) {
      iVar13 = DAT_004341ac + (uint)bVar1;
      if (*(char *)(iVar13 + 0x8c) == 'E') {
        if (uVar5 != 2) goto LAB_004345a4;
        FUN_0033187c(3,1);
        *(undefined4 *)(DAT_004347dc + unaff_r5) = 0;
        FUN_0034913c(iVar14,unaff_r5);
      }
      if (*(char *)(iVar13 + 0x8c) == 'F' && uVar5 == 3) {
        FUN_0033187c(3,1);
        *(undefined4 *)(DAT_004347dc + unaff_r5) = 0;
        FUN_0034913c(iVar14,unaff_r5);
      }
    }
LAB_004345a4:
    iVar13 = *(int *)(puVar6 + 0x2a);
    if ((((iVar13 == 5 || iVar13 == 0x17) || iVar13 == 0xb) || iVar13 == 0x11) && (bVar2 != 0xff)) {
      iVar13 = iVar12 + (uint)bVar2;
      if (*(char *)(iVar13 + 0x8c) == 'E') {
        if (uVar5 != 2) goto LAB_00434634;
        FUN_0033187c(3,1);
        *(undefined4 *)(DAT_004347dc + unaff_r5) = 0;
        FUN_0034913c(iVar14,unaff_r5);
      }
      if (*(char *)(iVar13 + 0x8c) == 'F' && uVar5 == 3) {
        FUN_0033187c(3,1);
        *(undefined4 *)(DAT_004347dc + unaff_r5) = 0;
        FUN_0034913c(iVar14,unaff_r5);
      }
    }
LAB_00434634:
    if (*(int *)(iVar12 + 4) == 0) {
      *(byte *)(*(int *)(puVar6 + 0x28) + iVar12 + 0x13a2) = bVar2;
    }
    else {
      *(byte *)(*(int *)(puVar6 + 0x28) + iVar12 + 0x138a) = bVar2;
    }
    if (*(int *)(iVar12 + 4) == 0) {
      *(byte *)(*(int *)(puVar6 + 0x2a) + iVar12 + 0x13a2) = bVar1;
    }
    else {
      *(byte *)(*(int *)(puVar6 + 0x2a) + iVar12 + 0x138a) = bVar1;
    }
    FUN_0033c25c(1);
    *(undefined4 *)(puVar6 + 0x32) = *(undefined4 *)(puVar6 + 0x2a);
    if (*(int *)(puVar6 + 0x3a) != -1) {
      *(int *)(puVar6 + 0x32) = *(int *)(puVar6 + 0x3a);
      *(undefined4 *)(puVar6 + 0x3a) = 0xffffffff;
    }
    FUN_002eb72c(*(undefined4 *)(puVar6 + 0x32),1);
    piVar9 = DAT_004341bc;
    *(undefined4 *)(*DAT_004341bc + 0x34) = DAT_004347e0;
    uVar7 = DAT_004347e4;
    FUN_002f8ce0(DAT_004347e4,*(undefined4 *)(puVar6 + 0x22),0);
    FUN_002f8ce0(uVar7,*(undefined4 *)(puVar6 + 0x24),0);
    *(undefined4 *)(puVar6 + 0x40) = 0;
    piVar15 = piVar9 + 2;
    if (-1 < *piVar15) {
      FUN_002f8ce0(DAT_004347e8,*(undefined4 *)(puVar6 + 0x22),0);
      if (*(int *)(iVar12 + 4) == 0) {
        bVar1 = *(byte *)(*piVar15 + iVar12 + 0x13a2);
      }
      else {
        bVar1 = *(byte *)(*piVar15 + iVar12 + 0x138a);
      }
      FUN_002f8d74(*(undefined4 *)(puVar6 + 0x22),0,*(undefined1 *)((uint)bVar1 + iVar12 + 0x8c));
      FUN_002eb304(*piVar15,&local_30,&local_34);
      FUN_002f8d40(*(undefined4 *)(puVar6 + 0x22),0,(int)local_30,(int)local_34,0,0);
    }
    if (-1 < piVar9[3]) {
      FUN_002f8ce0(DAT_004347e8,*(undefined4 *)(puVar6 + 0x24),0);
      if (*(int *)(iVar12 + 4) == 0) {
        bVar1 = *(byte *)(piVar9[3] + iVar12 + 0x13a2);
      }
      else {
        bVar1 = *(byte *)(piVar9[3] + iVar12 + 0x138a);
      }
      FUN_002f8d74(*(undefined4 *)(puVar6 + 0x24),0,*(undefined1 *)((uint)bVar1 + iVar12 + 0x8c));
      FUN_002eb304(piVar9[3],&local_30,&local_34);
      FUN_002f8d40(*(undefined4 *)(puVar6 + 0x24),0,(int)local_30,(int)local_34,0,0);
    }
    iVar14 = *piVar15;
    bVar16 = iVar14 < 0;
    if (bVar16) {
      iVar14 = piVar9[3];
    }
    if (bVar16 && iVar14 < 0) {
      FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x1e),*(undefined4 *)(puVar6 + 0x2a),puVar6[4],puVar6[5]
                   ,0x2a,0x2a,0,0);
      iVar14 = 1;
      *(undefined4 *)(puVar6 + 0x56) = 1;
    }
    else {
      *(float *)(*piVar9 + 0x34) = DAT_004347e8;
      iVar14 = 0xb;
    }
    break;
  case 0xb:
    fVar18 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 0x40),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar21 = DAT_004347e8 - fVar18 * DAT_00434c30;
    fVar18 = (float)VectorSignedToFloat(*(undefined4 *)(puVar6 + 0x40),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(float *)(*DAT_004341bc + 0x34) = DAT_004347e8 - fVar18 * DAT_00434c34;
    piVar15 = piVar9 + 2;
    if (-1 < *piVar15) {
      FUN_002f8ce0(fVar21,*(undefined4 *)(puVar6 + 0x22),0);
      FUN_002eb304(*piVar15,&local_30,&local_34);
      iVar12 = *(int *)(puVar6 + 0x40) * 3;
      iVar14 = *(int *)(puVar6 + 0x40) * 6;
      fVar19 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar20 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002f8d40(*(undefined4 *)(puVar6 + 0x22),0,(int)(local_30 - fVar17),
                   (int)(local_34 - fVar18),(int)(fVar20 + DAT_00434c38),
                   (int)(fVar19 + DAT_00434c38));
    }
    if (-1 < piVar9[3]) {
      FUN_002f8ce0(fVar21,*(undefined4 *)(puVar6 + 0x24),0);
      FUN_002eb304(piVar9[3],&local_30,&local_34);
      iVar12 = *(int *)(puVar6 + 0x40) * 3;
      iVar14 = *(int *)(puVar6 + 0x40) * 6;
      fVar17 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar19 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002f8d40(*(undefined4 *)(puVar6 + 0x24),0,(int)(local_30 - fVar21),
                   (int)(local_34 - fVar18),(int)(fVar19 + DAT_00434c38),
                   (int)(fVar17 + DAT_00434c38));
    }
    iVar14 = *(int *)(puVar6 + 0x40);
    *(int *)(puVar6 + 0x40) = iVar14 + 1;
    uVar7 = DAT_004347e4;
    if (iVar14 + 1 == 6) {
      FUN_002f8ce0(DAT_004347e4,*(undefined4 *)(puVar6 + 0x22),0);
      FUN_002f8ce0(uVar7,*(undefined4 *)(puVar6 + 0x24),0);
      FUN_002eb304(*piVar15,&local_30,&local_34);
      fVar18 = (float)VectorSignedToFloat(*(int *)(puVar6 + 0x40) * 3,(byte)(in_fpscr >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat(*(int *)(puVar6 + 0x40) * 3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002f8d40(*(undefined4 *)(puVar6 + 0x22),0,(int)(local_30 - fVar21),
                   (int)(local_34 - fVar18),0,0);
      FUN_002eb304(piVar9[3],&local_30,&local_34);
      fVar18 = (float)VectorSignedToFloat(*(int *)(puVar6 + 0x40) * 3,(byte)(in_fpscr >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat(*(int *)(puVar6 + 0x40) * 3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002f8d40(*(undefined4 *)(puVar6 + 0x24),0,(int)(local_30 - fVar21),
                   (int)(local_34 - fVar18),0,0);
      *piVar15 = -1;
      piVar9[3] = -1;
      *(undefined4 *)(puVar6 + 0x1a) = 2;
      FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x1e),*(undefined4 *)(puVar6 + 0x2a),puVar6[4],puVar6[5]
                   ,0x2a,0x2a,0,0);
      *(undefined4 *)(puVar6 + 0x56) = 1;
    }
    *(undefined4 *)(*piVar9 + 0x34) = DAT_004347e0;
    goto code_r0x00434b64;
  case 0xc:
    FUN_00445688();
    goto code_r0x00434b64;
  case 0xd:
    iVar14 = FUN_002eb4e4();
    if (iVar14 == 0) goto code_r0x00434b64;
    FUN_00343270(*(undefined4 *)(puVar6 + 0x12));
    goto LAB_0043418c;
  case 0xe:
    iVar14 = FUN_00445298();
    if (iVar14 != 0) {
      FUN_002eb628();
      FUN_002f87ec(1);
      return;
    }
    goto code_r0x00434b64;
  }
  *(int *)(puVar6 + 0x1a) = iVar14;
code_r0x00434b64:
  FUN_004453c8();
  FUN_00446af0();
  FUN_00446e78();
  if (*(int *)(puVar6 + 0x1a) < 9) {
    iVar14 = DAT_004341ac + *(int *)(puVar6 + 0x32);
    if (*(int *)(DAT_004341ac + 4) == 0) {
      cVar3 = *(char *)(iVar14 + 0x13a2);
    }
    else {
      cVar3 = *(char *)(iVar14 + 0x138a);
    }
    if ((cVar3 != -1) && (*(int *)(puVar6 + 0x56) == 0)) {
      FUN_002eb304(*(int *)(puVar6 + 0x32),&local_30,&local_34);
      FUN_002eb3d8(*(undefined4 *)(puVar6 + 0x1e),*(undefined4 *)(puVar6 + 0x32),(int)local_30,
                   (int)local_34,0x34,0x34,0xfffffffb,0xfffffffb);
    }
  }
  FUN_002f8160(*(undefined4 *)(puVar6 + 0x1e));
  FUN_002f8160(*(undefined4 *)(puVar6 + 0x22));
  FUN_002f8160(*(undefined4 *)(puVar6 + 0x24));
  FUN_002f94a8(*(undefined4 *)(puVar6 + 0x18));
  FUN_002f8160(*(undefined4 *)(puVar6 + 0x20));
  return;
}
