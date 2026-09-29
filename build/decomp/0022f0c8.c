// OoT3D decomp @ 0022f0c8  name=FUN_0022f0c8  size=2360

void FUN_0022f0c8(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  int local_5c;

  puVar11 = (uint *)(param_1 + 0x2a58);
  iVar12 = *(int *)(param_2 + 0x20ac);
  *puVar11 = 0;
  cVar1 = *(char *)(param_1 + 0x2a9d);
  if (cVar1 == '\0') {
    FUN_00193740(param_1,param_2,puVar11);
  }
  else if (cVar1 == '\x01') {
    FUN_00192d38(param_1,param_2,puVar11);
  }
  else if (cVar1 == '\x02') {
    iVar8 = *(byte *)(param_1 + 0x2aa4) - 9;
    if (iVar8 < 1) {
      *(undefined1 *)(param_1 + 0x2aa4) = 0;
      FUN_00374428(param_1);
    }
    else {
      *(char *)(param_1 + 0x2aa4) = (char)iVar8;
      *(char *)(param_1 + 0xd0) = *(char *)(param_1 + 0xd0) + -9;
    }
  }
  else if (cVar1 == '\x03') {
    FUN_001e2f1c(param_1,param_2,puVar11);
  }
  fVar3 = DAT_0022f518;
  if (*(char *)(param_1 + 0x1a9) == '\0') {
    *(undefined1 *)(param_1 + 0x1a9) = 3;
  }
  if (*(char *)(param_1 + 0x2a9d) != '\0') {
    if (*(short *)(DAT_0022f51c + 0x80) == 3) {
      iVar8 = iVar12 + 0x2200;
      bVar13 = *(char *)(iVar12 + 0x2227) == '\0';
      if (!bVar13) {
        iVar8 = (int)*(char *)(iVar12 + 0x2226);
      }
      if ((bVar13 || iVar8 < 0x18) || (0x1b < iVar8)) {
        *(float *)(param_1 + 0x2a88) = fVar3;
        *(undefined2 *)(param_1 + 0x2a64) = 0;
        *(undefined2 *)(param_1 + 0x2a66) = 0;
        *puVar11 = 0x100;
      }
    }
    if (((*(char *)(param_1 + 0x2a9d) == '\x01') && (*(int *)(param_1 + 0x98) <= DAT_0022f520)) &&
       (*(char *)(param_1 + 0x2a99) != '\0')) {
      *puVar11 = *puVar11 | 0x200;
    }
  }
  uVar9 = (*(uint *)(param_1 + 0x2a68) ^ *puVar11) & 0xffff;
  *(uint *)(param_1 + 0x2a5c) = *puVar11 & uVar9;
  if ((*puVar11 & 0x100) != 0) {
    cVar1 = *(char *)(param_1 + 0x2a9f);
    bVar13 = cVar1 == '\0';
    if (bVar13) {
      cVar1 = *(char *)(param_1 + 0x2227);
    }
    if (bVar13 && cVar1 == '\0') {
      *puVar11 = 0x100;
    }
    else {
      *puVar11 = *puVar11 ^ 0x100;
    }
  }
  fVar19 = DAT_0022f524;
  *(uint *)(param_1 + 0x2a60) = *(uint *)(param_1 + 0x2a68) & uVar9;
  *(uint *)(param_1 + 0x2a68) = *puVar11 & DAT_0022f528;
  *(uint **)(param_1 + 0x29c8) = puVar11;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2a64),(byte)(in_fpscr >> 0x15) & 3
                                     );
  uVar18 = VectorSignedToFloat((int)(short)(int)(fVar17 * fVar19),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2a78) = uVar18;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x29c8) + 0xe),
                                      (byte)(in_fpscr >> 0x15) & 3);
  uVar18 = VectorSignedToFloat((int)(short)(int)(fVar17 * fVar19),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x29c8) + 0x24) = uVar18;
  iVar8 = *(int *)(param_1 + 0x29c8);
  *(float *)(iVar8 + 0x28) =
       (*(float *)(iVar8 + 0x20) - *(float *)(iVar8 + 0x28)) + *(float *)(iVar8 + 0x28);
  iVar8 = *(int *)(param_1 + 0x29c8);
  *(float *)(iVar8 + 0x2c) =
       (*(float *)(iVar8 + 0x24) - *(float *)(iVar8 + 0x2c)) + *(float *)(iVar8 + 0x2c);
  if (*(char *)(param_1 + 0x2aa5) != '\0') {
    *(char *)(param_1 + 0x2aa5) = *(char *)(param_1 + 0x2aa5) + -1;
  }
  if (*(char *)(param_1 + 0x2aa6) != '\0') {
    *(char *)(param_1 + 0x2aa6) = *(char *)(param_1 + 0x2aa6) + -1;
  }
  if (*(char *)(param_1 + 0x2aa5) != '\0') {
    *puVar11 = *puVar11 & 0xfffffffe;
  }
  if (*(char *)(param_1 + 0x2aa6) != '\0') {
    *puVar11 = *puVar11 & 0xfffffffd;
  }
  puVar10 = *(undefined4 **)(param_1 + 0x29c8);
  puVar10[4] = *puVar10;
  puVar10[5] = puVar10[1];
  puVar10[6] = puVar10[2];
  puVar10[7] = puVar10[3];
  if ((*(char *)(param_1 + 0xb7) == '\0') && (*(char *)(param_1 + 0x2a9a) != '\0')) {
    *(undefined1 *)(param_1 + 0x12bc) = 0x18;
    iVar8 = DAT_0022f52c;
    *(int *)(param_1 + 0x12c0) = iVar12;
    *(undefined2 *)(iVar8 + param_1) = 1;
    *(undefined1 *)(param_1 + 0x2a9a) = 0;
  }
  if (*(char *)(param_1 + 0x2aa0) != '\0') {
    if (*(char *)(param_1 + 0x2aa0) == '\x01') {
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0022f530 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x2488) = (char)(int)(DAT_0022f534 / fVar19 + DAT_0022f538);
    }
    if (*(char *)(param_1 + 0x2488) < '\x01') {
      *(undefined1 *)(param_1 + 0x2aa0) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x2aa0) = 2;
    }
  }
  if (*(char *)(param_1 + 0x2488) == '\0') {
    bVar13 = *(char *)(param_1 + 0xb7) != '\0';
    bVar2 = 0;
    if (bVar13) {
      bVar2 = *(byte *)(param_1 + 0x1321);
    }
    if (((bVar13 && (bVar2 & 2) != 0) && ((*(uint *)(param_1 + 0x1710) & 0x4000000) == 0)) &&
       (((*(byte *)(param_1 + 0x1378) & 2) == 0 && ((*(byte *)(param_1 + 0x13f8) & 2) == 0)))) {
      iVar8 = FUN_00375eb8(param_1);
      uVar18 = DAT_0022f53c;
      if (iVar8 == 0) {
        FUN_00373d0c();
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
        *(undefined1 *)(param_1 + 0x2290) = *(undefined1 *)(param_1 + 0xb8);
        *(undefined1 *)(param_1 + 0x2291) = 2;
        *(undefined4 *)(param_1 + 0x2294) = uVar18;
        *(short *)(param_1 + 0x2292) = *(short *)(param_1 + 0x92) + -0x8000;
        *(undefined4 *)(param_1 + 0x2298) = uVar18;
        *(char *)(param_1 + 0x2a9a) = *(char *)(param_1 + 0x2a9a) + '\x01';
        *(undefined1 *)(param_1 + 0x2a9d) = 2;
        FUN_00375b70(param_2,param_1);
        FUN_00374444(param_2,param_1,param_1 + 0x28,0xc0);
        *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xfb;
      }
      else {
        FUN_0034f724(param_2);
        uVar4 = DAT_0022f994;
        if (*(char *)(param_1 + 0xb9) == '\x01') {
          if (*(char *)(param_1 + 0x2aa4) == -1) {
            FUN_00375ed8(param_1,0,0xff);
          }
          else {
            FUN_00375ed8(param_1,0,0xff,0x200000);
          }
        }
        else {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          *(undefined1 *)(param_1 + 0x2290) = *(undefined1 *)(param_1 + 0xb8);
          *(undefined1 *)(param_1 + 0x2291) = 1;
          *(undefined4 *)(param_1 + 0x2294) = uVar4;
          *(short *)(param_1 + 0x2292) = *(short *)(param_1 + 0x92) + -0x8000;
          *(undefined4 *)(param_1 + 0x2298) = uVar18;
          FUN_00375fd0(param_1,param_1 + 0x1328,1);
          *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xfb | 1;
          *(undefined1 *)(param_1 + 0x2a9d) = 3;
          if (*(char *)(param_1 + 0x2aa4) == -1) {
            FUN_00375ed8(param_1,0x400000,0xff,0);
          }
          else {
            FUN_00375ed8(param_1,0x400000,0xff,0x200000);
          }
        }
      }
      *(undefined1 *)(param_1 + 0xb8) = 0;
      *(undefined1 *)(param_1 + 0x2290) = 0;
    }
  }
  if ((*(short *)(param_1 + 0x11a) == 0) || ((*(uint *)(param_1 + 0x11c) & 0x400000) != 0)) {
    if ((*(byte *)(param_1 + 0x172a) & 4) != 0) {
      *(undefined1 *)(param_1 + 0x2aa6) = 2;
    }
    *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xfb;
  }
  else {
    *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) | 4;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfbffffff;
    *(undefined1 *)(param_1 + 0x2488) = 0;
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xfffdffff;
    if (*(char *)(param_1 + 0x2227) != '\0') {
      *(undefined1 *)(param_1 + 0x2227) = 0;
    }
    *(undefined4 *)(param_1 + 0x22a4) = 0;
    *(undefined4 *)(param_1 + 0x22d8) = 0;
    *(undefined4 *)(param_1 + 0x230c) = 0;
    *puVar11 = 0;
    *(undefined4 *)(param_1 + 0x2a5c) = 0;
    *(float *)(param_1 + 0x221c) = fVar3;
  }
  bVar13 = false;
  *(undefined2 *)(param_1 + 0x2a8e) = 0;
  if (((*(byte *)(param_1 + 0x172a) & 4) != 0) && (*(char *)(param_1 + 0x2a98) == '\0')) {
    bVar13 = true;
    *(undefined2 *)(param_1 + 0x2a8e) = 1;
    local_5c = (int)*(short *)(param_1 + 0xbe);
  }
  (**(code **)(param_2 + 0x5b94))(param_1,param_2,puVar11);
  if ((bVar13) && (*(short *)(param_1 + 0xbe) != local_5c)) {
    *(short *)(param_1 + 0xbe) = (short)local_5c;
  }
  uVar16 = DAT_0022f9b0;
  uVar6 = DAT_0022f9ac;
  fVar19 = DAT_0022f9a8;
  uVar4 = DAT_0022f9a4;
  uVar18 = DAT_0022f9a0;
  iVar5 = DAT_0022f99c;
  iVar8 = DAT_0022f998;
  if (*(int *)(param_1 + 0x221c) == DAT_0022f998) {
    uVar14 = FUN_003738a8(DAT_0022f9b0);
    iVar15 = VectorFloatToUnsigned(uVar14,3);
    uVar9 = iVar15 + 6;
    if (*(short *)(DAT_0022f9b4 + 0x44) < 0x50) {
      uVar16 = FUN_003738a8(uVar16);
      iVar15 = VectorFloatToUnsigned(uVar16,3);
      uVar9 = iVar15 + 3;
    }
    if (iVar5 < *(int *)(param_1 + 0x98)) {
      *(undefined4 *)(param_1 + 0x221c) = uVar18;
    }
    else if (*(int *)(param_1 + 0x98) < DAT_0022f9b8) {
      *(undefined4 *)(param_1 + 0x221c) = uVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0x221c) = uVar6;
    }
    uVar16 = DAT_0022f9bc;
    if ((uVar9 & 0xff) < (uint)*(byte *)(param_1 + 0x2aa1)) {
      *(float *)(param_1 + 0x294) = *(float *)(param_1 + 0x294) * fVar19;
      FUN_0036aeb4(param_1 + 0x28,uVar16);
      *(undefined1 *)(param_1 + 0x2aa2) = 0;
      *(undefined1 *)(param_1 + 0x2aa1) = 0;
    }
  }
  if (*(int *)(iVar12 + 0x221c) == iVar8) {
    if (iVar5 < *(int *)(param_1 + 0x98)) {
      *(undefined4 *)(iVar12 + 0x221c) = uVar18;
    }
    else if (*(int *)(param_1 + 0x98) < DAT_0022f9b8) {
      *(undefined4 *)(iVar12 + 0x221c) = uVar4;
    }
    else {
      *(undefined4 *)(iVar12 + 0x221c) = uVar6;
    }
  }
  if ((*(char *)(param_1 + 0x2a9f) != '\0') && (*(char *)(param_1 + 0x2a9f) == '\x01')) {
    if (*(char *)(param_1 + 0x2227) == '\0') {
      *(undefined1 *)(param_1 + 0x2a9f) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x2a9f) = 2;
      *(float *)(param_1 + 0x290) = *(float *)(iVar12 + 0x290) - *(float *)(iVar12 + 0x294);
      *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(iVar12 + 0x294);
      FUN_0036b4ec(param_1 + 0x254,param_2);
      FUN_003328ec(param_2,param_1 + 0x1368);
      FUN_003328ec(param_2,param_1 + 0x13e8);
    }
  }
  cVar1 = *(char *)(param_1 + 0x2aa2);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x2aa2) = cVar1 + -1, cVar1 == '\x01')) {
    *(undefined1 *)(param_1 + 0x2a9f) = 0;
    *(undefined1 *)(param_1 + 0x2aa1) = 0;
  }
  uVar7 = 5;
  if (*(char *)(param_1 + 0x2488) == '\0') {
    *(undefined1 *)(param_1 + 0x1324) = 5;
    uVar7 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1324) = 10;
  }
  *(undefined1 *)(param_1 + 0x133c) = uVar7;
  if (*(char *)(param_1 + 0x2a98) == '\0') {
    if (*(float *)(param_1 + 0x2a90) != fVar3) {
      *(float *)(param_1 + 0x2c) =
           *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x2a90) * DAT_0022fa60;
      *(float *)(param_1 + 0x2a90) = fVar3;
    }
  }
  else {
    iVar12 = FUN_0036f57c(*(undefined4 *)(param_2 + 0x20ac),0x10);
    FUN_0036e168(((*(float *)(iVar12 + 4) + *DAT_0022f9c0) - *(float *)(param_1 + 0x2c)) *
                 DAT_0022f9c4,uVar6,DAT_0022f9c8,fVar3,param_1 + 0x2a90);
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) - fVar19;
  }
  if ((*(char *)(param_1 + 0x2a9d) == '\0') || (*(char *)(param_1 + 0x2488) < '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0x2a99) = uVar7;
  fVar3 = DAT_0022fa64;
  if (*(char *)(param_1 + 0x2a9b) != '\0') {
    *(char *)(param_1 + 0x2a9b) = *(char *)(param_1 + 0x2a9b) + -1;
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar3;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x2a90);
  return;
}
