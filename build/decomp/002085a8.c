// OoT3D decomp @ 002085a8  name=FUN_002085a8  size=1868

undefined4 FUN_002085a8(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_r6;
  int iVar13;
  int iVar14;
  char cVar15;
  bool bVar16;
  uint in_fpscr;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;

  local_48 = param_1 + 0x1200;
  if ((((*(char *)(param_1 + 0x12a4) == '\0') || ((*(uint *)(param_1 + 0x29b8) & 0x1000000) != 0))
      || (((*(uint *)(param_1 + 0x1710) & 0x800) != 0 &&
          ((*(short **)(param_1 + 0x1224) == (short *)0x0 ||
           (**(short **)(param_1 + 0x1224) != 0xa1)))))) ||
     (((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *DAT_002089d4) == 0 &&
      (*(int *)(param_1 + 0x1708) != DAT_002089d8)))) {
    return 0;
  }
  iVar12 = *(int *)(param_1 + 0x12a8);
  if (*(char *)(param_1 + 0x12a4) < '\0') {
    *(undefined2 *)(iVar12 + 0x116) = 0xd0;
    FUN_00336bbc(param_2,iVar12);
    return 0;
  }
  iVar14 = (int)*(char *)(param_1 + 0x12a5);
  fVar18 = (float)FUN_00338f60((int)*(short *)(iVar12 + 0xbe));
  fVar19 = (float)FUN_002cfca0((int)*(short *)(iVar12 + 0xbe));
  fVar2 = DAT_002089e0;
  uVar10 = DAT_002089dc;
  local_4c = param_2 + 0x5000;
  local_50 = param_2 + 0x4c00;
  if (*(char *)(local_48 + 0xa4) == '\x02') {
    iVar5 = FUN_0033de14(0x80);
    local_60 = 4.48416e-44;
    iVar6 = FUN_00360084(param_2 + 0x208c,DAT_002089e4,0,iVar5);
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        iVar13 = *(int *)(iVar5 + iVar7 * 4);
        iVar11 = *(int *)(iVar13 + 0x5c0);
        if (-1 < iVar11) {
          FUN_0035a008(param_2,(int)(short)iVar11);
          *(undefined4 *)(iVar13 + 0x5c0) = 0xffffffff;
          FUN_0033ddd4(iVar5);
          return 0;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    FUN_0033ddd4(iVar5);
    uVar9 = DAT_002089e8;
    sVar4 = *(short *)(iVar12 + 0x16);
    *(short *)(param_1 + 0x2220) = sVar4;
    if (0 < iVar14) {
      *(short *)(param_1 + 0x2220) = sVar4 + -0x8000;
    }
    uVar8 = DAT_002089f0;
    sVar4 = *(short *)(param_1 + 0x2220);
    *(short *)(param_1 + 0xbe) = sVar4;
    fVar3 = DAT_002089ec;
    uVar17 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x221c) == fVar2) << 0x1e |
             (uint)(fVar2 <= *(float *)(param_1 + 0x221c)) << 0x1d;
    bVar1 = (byte)(uVar17 >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      *(undefined4 *)(param_1 + 0x221c) = uVar9;
    }
    FUN_0036055c(param_2,param_1,uVar8,0);
    FUN_0036b0fc(param_2,param_1);
    *(undefined1 *)(param_1 + 0x2237) = 1;
    *(undefined2 *)(param_1 + 0x2238) = 1;
    fVar20 = (float)FUN_002cfca0((int)sVar4);
    *(float *)(param_1 + 0x12c8) = *(float *)(param_1 + 0x28) + fVar3 * fVar20;
    fVar20 = (float)FUN_00338f60((int)sVar4);
    *(float *)(param_1 + 0x12d0) = *(float *)(param_1 + 0x30) + fVar3 * fVar20;
    uVar8 = FUN_0034d628(param_1);
    FUN_003604f0(param_1 + 0x254,param_2,uVar8);
    fVar20 = DAT_002089fc;
    fVar3 = DAT_002089f8;
    fVar21 = (float)VectorSignedToFloat(iVar14,(byte)(uVar17 >> 0x15) & 3);
    *(short *)(param_1 + 0x224a) = (short)*(undefined4 *)(DAT_002089f4 + 0x84);
    *(undefined1 *)(param_1 + 0x2237) = 0;
    *(undefined1 *)(param_1 + 0x12bf) = *(undefined1 *)(param_1 + 0x12a4);
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
    fVar22 = (float)VectorSignedToFloat(iVar14,(byte)(uVar17 >> 0x15) & 3);
    *(float *)(param_1 + 0x12c8) = *(float *)(param_1 + 0x28) + fVar21 * fVar3 * fVar19;
    *(float *)(param_1 + 0x12d0) = *(float *)(param_1 + 0x30) + fVar21 * fVar3 * fVar18;
    *(float *)(param_1 + 0x12d4) = *(float *)(param_1 + 0x28) + fVar22 * fVar20 * fVar19;
    *(float *)(param_1 + 0x12dc) = *(float *)(param_1 + 0x30) + fVar22 * fVar20 * fVar18;
    *(undefined2 *)(iVar12 + 0x1bc) = 1;
    iVar5 = DAT_00208a00;
    *(undefined4 *)(iVar12 + 0x21c) = 1;
    *(float *)(param_1 + 0x6c) = fVar2;
    *(float *)(param_1 + 0x221c) = fVar2;
    *(undefined1 *)(param_1 + 0x1749) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = uVar10;
    *(undefined1 *)(iVar5 + 0xd4) = 0;
    if (*(short *)(local_48 + 0xa6) == 0) {
      *(undefined4 *)(param_1 + 0x221c) = uVar9;
    }
    else {
      *(undefined2 *)(param_1 + 0x2238) = 0;
      *(undefined2 *)(param_1 + 0x224a) = 0;
      uVar9 = FUN_0034d628(param_1);
      uVar10 = DAT_00208a04;
      uVar8 = FUN_003603c0(param_1 + 0x254,uVar9);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar17 >> 0x15) & 3);
      FUN_00360190(DAT_00208a08,fVar2,uVar8,uVar10,param_1 + 0x254,param_2,uVar9,2);
      *(float *)(param_1 + 0x29c) = fVar2;
    }
    if (*(char *)(iVar12 + 2) == '\n') {
      *(short *)(local_48 + 0xe2) =
           (short)*(char *)(*(int *)(local_4c + 0xb8c) +
                            (uint)(*(ushort *)(iVar12 + 0x1c) >> 10) * 0x10 +
                           (uint)(iVar14 < 1) * 2 + 1);
      FUN_003513c0(param_2);
    }
  }
  else {
    if (iVar14 < 0) {
      cVar15 = *(int *)(DAT_00208a0c + 4) != 0;
    }
    else if (*(int *)(DAT_00208a0c + 4) == 0) {
      cVar15 = '\x02';
    }
    else {
      cVar15 = '\x03';
    }
    if (*(char *)(local_48 + 0xa4) == '\x03') {
      *(char *)(iVar12 + 0x904) = cVar15;
      *(undefined1 *)(iVar12 + 0x905) = 1;
    }
    else {
      *(char *)(iVar12 + 0x3ea) = cVar15;
      *(undefined1 *)(iVar12 + 0x3eb) = 1;
    }
    if (cVar15 == '\0') {
      iVar5 = DAT_00208a10 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
      if (*(short *)(param_2 + 0x104) == 4) {
        unaff_r6 = *(undefined4 *)(iVar5 + 0x138);
      }
      else {
        unaff_r6 = *(undefined4 *)(iVar5 + 0xd8);
      }
    }
    else if (cVar15 == '\x01') {
      unaff_r6 = *(undefined4 *)(DAT_00208a10 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0xf0);
    }
    else if (cVar15 == '\x02') {
      iVar5 = DAT_00208a10 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
      if (*(short *)(param_2 + 0x104) == 4) {
        unaff_r6 = *(undefined4 *)(iVar5 + 0x150);
      }
      else {
        unaff_r6 = *(undefined4 *)(iVar5 + 0x108);
      }
    }
    else if (cVar15 == '\x03') {
      iVar5 = DAT_00208a10 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
      if (*(short *)(param_2 + 0x104) == 4) {
        unaff_r6 = *(undefined4 *)(iVar5 + 0x168);
      }
      else {
        unaff_r6 = *(undefined4 *)(iVar5 + 0x120);
      }
    }
    FUN_0036055c(param_2,param_1,DAT_00208d34,0);
    if ('\x01' < *(char *)(DAT_00208d38 + param_1)) {
      FUN_0034d688(param_2,param_1,0xff);
    }
    fVar20 = DAT_00208d40;
    fVar3 = DAT_00208d3c;
    sVar4 = *(short *)(iVar12 + 0xbe);
    if (-1 < iVar14) {
      sVar4 = sVar4 + -0x8000;
    }
    fVar22 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0xbe) = sVar4;
    *(short *)(param_1 + 0x2220) = sVar4;
    fVar21 = DAT_00208d44;
    iVar5 = DAT_002089f4;
    fVar22 = fVar22 * fVar3;
    *(float *)(param_1 + 0x28) = *(float *)(iVar12 + 0x28) + fVar22 * fVar19;
    *(float *)(param_1 + 0x30) = *(float *)(iVar12 + 0x30) + fVar22 * fVar18;
    FUN_00358dfc(*(float *)(iVar5 + 0x2c) * fVar20 * fVar21,param_1 + 0x254,param_2,unaff_r6);
    uVar9 = DAT_00208d48;
    iVar6 = DAT_00208a00;
    if (*(short *)(local_48 + 0xa6) != 0) {
      *(float *)(param_1 + 0x29c) = fVar2;
    }
    *(float *)(param_1 + 0x6c) = fVar2;
    *(float *)(param_1 + 0x221c) = fVar2;
    *(undefined1 *)(param_1 + 0x1749) = 0;
    *(undefined4 *)(iVar6 + 0xcc) = uVar10;
    *(undefined1 *)(iVar6 + 0xd4) = 0;
    FUN_003603f8(param_2,param_1,uVar9);
    if (*(int *)(iVar12 + 0x124) != 0) {
      iVar14 = -iVar14;
    }
    if (*(char *)(local_48 + 0xa4) == '\x03') goto LAB_00208d04;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
    FUN_003513c0(param_2);
    fVar3 = DAT_00208d4c;
    if (((uint)*(ushort *)(iVar12 + 0x1c) << 0x16) >> 0x1d == 3) {
      local_60 = *(float *)(iVar12 + 0x28) - fVar22 * fVar19;
      local_5c = *(float *)(iVar12 + 0x2c) + DAT_00208d4c;
      local_58 = *(float *)(iVar12 + 0x30) - fVar22 * fVar18;
      FUN_003586a4(param_2 + 0xa98,&local_54,&local_60);
      iVar6 = FUN_003365b0(param_2,param_1,local_54,0x32);
      iVar5 = DAT_00208d58;
      if (iVar6 != 0) {
        *(float *)(DAT_00208d50 + 0x144) = fVar20;
        *(undefined4 *)(iVar5 + 0x548) = DAT_00208d54;
      }
    }
    else {
      uVar10 = FUN_0036c5bc(param_2,0);
      fVar18 = *(float *)(iVar5 + 0x30);
      local_5c = (float)(int)(short)(int)(fVar18 * fVar3);
      local_60 = (float)(int)(short)(int)(fVar18 * DAT_00208d5c);
      FUN_00336434(fVar2,uVar10,iVar12,
                   (int)*(char *)(*(int *)(local_4c + 0xb8c) +
                                  (uint)(*(ushort *)(iVar12 + 0x1c) >> 10) * 0x10 +
                                 (uint)(iVar14 < 1) * 2 + 1),
                   (int)(short)(int)(fVar18 * DAT_00208d60));
    }
  }
  if ((((*(char *)(local_48 + 0xa4) != '\x03') && (*(char *)(iVar12 + 2) == '\n')) &&
      (iVar14 = (int)*(char *)(*(int *)(local_4c + 0xb8c) +
                              (uint)(*(ushort *)(iVar12 + 0x1c) >> 10) * 0x10 +
                              (uint)(iVar14 < 1) * 2), -1 < iVar14)) &&
     (*(char *)(local_50 + 0x30) != iVar14)) {
    while (iVar5 = FUN_0033b6bc(param_2,param_2 + 0x4c30,iVar14), iVar5 == 0) {
      software_interrupt(10);
    }
  }
LAB_00208d04:
  *(undefined1 *)(iVar12 + 3) = *(undefined1 *)(local_50 + 0x30);
  iVar14 = *(int *)(iVar12 + 0x128);
  bVar16 = iVar14 == 0;
  if (bVar16) {
    iVar14 = *(int *)(iVar12 + 0x124);
  }
  if (!bVar16 || iVar14 != 0) {
    *(undefined1 *)(iVar14 + 3) = *(undefined1 *)(local_50 + 0x30);
  }
  return 1;
}
