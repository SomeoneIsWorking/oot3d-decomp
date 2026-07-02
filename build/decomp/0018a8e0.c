// OoT3D decomp @ 0018a8e0  name=FUN_0018a8e0  size=1848

void FUN_0018a8e0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  int *piVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint in_fpscr;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_4c [4];
  
  iVar16 = *(int *)(param_2 + 0x20ac);
  local_4c[3] = param_2;
  FUN_003510b0(param_1,DAT_0018ac44);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (local_4c[2] = local_4c[3] + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_0018ac48 + local_4c[2]) != 0)) {
    local_4c[2] = local_4c[2] + 0x3a5c;
  }
  else {
    local_4c[2] = 0;
  }
  local_4c[2] = local_4c[2] + 0x10;
  uVar7 = FUN_00358ef8(local_4c[2],10);
  fVar20 = DAT_0018ac4c;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(float *)(param_1 + 0x920) = fVar20;
  *(float *)(param_1 + 0x924) = fVar20;
  *(undefined2 *)(param_1 + 0x99c) = 0;
  FUN_00358ea8(local_4c[2],param_2,param_1 + 0x1a4,uVar7,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x228,param_1 + 0x59c,0x11);
  iVar11 = DAT_0018ac54;
  iVar14 = 1;
  local_4c[0] = *DAT_0018ac50;
  local_4c[1] = DAT_0018ac50[1];
  do {
    uVar7 = FUN_00372c90(local_4c[2],iVar14);
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(undefined2 *)(local_4c[iVar14] + 0x22) = 2;
    }
    else {
      *(undefined2 *)(local_4c[iVar14] + 0x22) = 1;
    }
    iVar8 = (**(code **)(*(int *)*DAT_0018ac90 + 0xc))
                      ((int *)*DAT_0018ac90,0x1b8,s_d__home_queen_dailyBuild_game_us_0018ac58,
                       DAT_0018ac94);
    uVar9 = 0;
    if (iVar8 != 0) {
      uVar9 = FUN_00348f34(iVar8,local_4c[iVar14]);
    }
    iVar8 = param_1 + iVar14 * 4;
    *(undefined4 *)(iVar8 + 0x910) = uVar9;
    FUN_00348be4();
    FUN_00348a64(*(undefined4 *)(iVar8 + 0x910),0,uVar7,DAT_0018ac9c,DAT_0018ac9c,DAT_0018ac98,
                 DAT_0018ac98);
    if (((*DAT_0018aca0 & 1) == 0) && (iVar10 = FUN_003679b4(DAT_0018aca0), iVar10 != 0)) {
      FUN_0036788c(DAT_0018aca4);
    }
    iVar10 = FUN_0034897c(*(undefined4 *)(iVar11 + 0x47c),*(undefined4 *)(iVar8 + 0x910),
                          *(undefined4 *)(param_1 + 0x178),0);
    *(int *)(iVar8 + 0x918) = iVar10;
    iVar14 = iVar14 + -1;
    *(undefined4 *)(iVar10 + 0x170) = 0;
    fVar4 = DAT_0018acb4;
  } while (-1 < iVar14);
  FUN_00372d4c(DAT_0018acb4,DAT_0018acb0,param_1 + 0xbc);
  *(undefined1 *)(param_1 + 0xd0) = 0xff;
  FUN_0036f410(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x948,0xff,0xff,0xff,0,0);
  uVar7 = FUN_0034faa8(param_2,local_4c[3] + 0xa70,param_1 + 0x948);
  *(undefined4 *)(param_1 + 0x960) = uVar7;
  FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x964,0xff,0xff,0xff,0,0);
  uVar7 = FUN_0034faa8(param_2,local_4c[3] + 0xa70,param_1 + 0x964);
  piVar5 = DAT_0018acb8;
  *(undefined4 *)(param_1 + 0x97c) = uVar7;
  *(undefined2 *)(param_1 + 0x9c4) = 0;
  *(float *)(param_1 + 0x998) = fVar4;
  fVar6 = DAT_0018acc4;
  fVar19 = DAT_0018acc0;
  iVar11 = *piVar5;
  iVar14 = 0;
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x9c2) = (short)(int)(DAT_0018acbc / fVar18 + DAT_0018acc0);
  uVar13 = DAT_0018b020;
  uVar9 = DAT_0018b01c;
  uVar7 = DAT_0018acc8;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    *(undefined1 *)(param_1 + 3) = 0xff;
    *(undefined4 *)(param_1 + 0x9cc) = uVar7;
    FUN_003616fc(param_1,0);
    uVar1 = DAT_0018acd4;
    uVar7 = DAT_0018accc;
    *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) | 4;
    *(undefined4 *)(param_1 + 0x13c) = uVar7;
    *(undefined2 *)(param_1 + 0x99c) = 0;
    *(undefined4 *)(param_1 + 0x98c) = 0;
    *(undefined1 *)(param_1 + 0x9c7) = 0x14;
    if (uVar1 <= *(ushort *)(DAT_0018acd0 + 0x4c) - 0x1194) {
      *(undefined2 *)(DAT_0018acd0 + 0x4c) = 0;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x9cc) = DAT_0018b010;
    fVar18 = *(float *)(iVar16 + 0x28) - *(float *)(param_1 + 0x28);
    fVar20 = *(float *)(iVar16 + 0x30) - *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x9b8) = SQRT(fVar18 * fVar18 + fVar20 * fVar20);
    fVar20 = DAT_0018b014;
    *(undefined2 *)(param_1 + 0x9ac) = *(undefined2 *)(iVar16 + 0xbe);
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x9b0) = (short)(int)(fVar20 / fVar18 + fVar19);
    *(float *)(param_1 + 0x984) = *(float *)(param_1 + 0x2c) - *(float *)(iVar16 + 0x2c);
    *(float *)(param_1 + 0x9b4) = fVar4;
    goto LAB_0018ad84;
  case 3:
    fVar19 = (float)FUN_00371e50(DAT_0018b044);
    *(undefined4 *)(param_1 + 0x9cc) = DAT_0018b048;
    iVar14 = (int)(fVar19 + fVar20);
    FUN_003616fc(param_1,0);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x9cc) = DAT_0018b04c;
    FUN_003616fc(param_1,8);
    *(undefined1 *)(param_1 + 0x9a4) = 0;
    fVar20 = DAT_0018b050;
    iVar16 = 0;
    iVar11 = local_4c[3] + 0x208c;
    do {
      iVar8 = FUN_003738d0(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) - fVar20,
                           *(undefined4 *)(param_1 + 0x30),iVar11,local_4c[3],0x18,0,0,0,6,1);
      iVar16 = iVar16 + 1;
      if (iVar8 != 0) {
        *(int *)(iVar8 + 0x9a0) = param_1;
      }
    } while (iVar16 < 8);
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x9cc) = DAT_0018b018;
    *(float *)(param_1 + 0x9b8) = fVar4;
    *(undefined2 *)(param_1 + 0x9ac) = *(undefined2 *)(iVar16 + 0xbe);
    *(undefined2 *)(param_1 + 0x9b0) = 0;
    *(float *)(param_1 + 0x984) = *(float *)(param_1 + 0x2c) - *(float *)(iVar16 + 0x2c);
    *(undefined4 *)(param_1 + 0x9b4) = uVar9;
LAB_0018ad84:
    iVar14 = -1;
    *(undefined2 *)(param_1 + 0x9aa) = 0;
    break;
  case 7:
    *(undefined2 *)(param_1 + 0x9c4) = 0x200;
    *(undefined4 *)(param_1 + 200) = uVar13;
  case 2:
    *(ushort *)(param_1 + 0x9c4) = *(ushort *)(param_1 + 0x9c4) | 0x100;
  case 6:
    fVar20 = DAT_0018b028;
    iVar14 = -1;
    *(undefined4 *)(param_1 + 0x9cc) = DAT_0018b024;
    fVar18 = (float)FUN_00371e50(fVar20);
    *(float *)(param_1 + 0x9b4) = fVar18 + fVar20;
    uVar7 = DAT_0018b02c;
    *(undefined2 *)(param_1 + 0x9aa) = 0;
    fVar20 = (float)FUN_00371e50(uVar7);
    uVar7 = DAT_0018b030;
    fVar20 = (float)VectorSignedToFloat((short)(int)fVar20 + 0x200,(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x9ae) = (short)(int)((fVar20 * fVar6) / fVar18 + fVar19);
    *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_1 + 0x30);
    fVar20 = (float)FUN_003738a8(uVar7);
    *(short *)(param_1 + 0x9bc) = (short)(int)fVar20;
    *(undefined4 *)(param_1 + 0x9c8) = DAT_0018b034;
    fVar18 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x980);
    fVar20 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x988);
    fVar20 = fVar18 * fVar18 + fVar20 * fVar20;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar20 < DAT_0018b038) << 0x1f |
            (uint)(fVar20 == DAT_0018b038) << 0x1e;
    uVar17 = uVar1 | (uint)(NAN(fVar20) || NAN(DAT_0018b038)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar17 >> 0x1c) & 1)) {
      FUN_0021a5ac(param_1,local_4c[3]);
    }
    else {
      *(undefined2 *)(param_1 + 0x9a8) = 0;
      uVar7 = DAT_0018b03c;
      *(undefined2 *)(param_1 + 0x9ac) = 0x200;
      *(undefined4 *)(param_1 + 0x9b8) = uVar7;
    }
    *(undefined2 *)(param_1 + 0x9c0) = 0;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),(byte)(uVar17 >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x9c2) = (short)(int)(DAT_0018b040 / fVar20 + fVar19);
  }
  puVar12 = DAT_0018b054;
  *(float *)(param_1 + 0x994) = fVar6;
  uVar7 = DAT_0018b05c;
  fVar20 = DAT_0018b058;
  uVar9 = puVar12[1];
  uVar13 = puVar12[2];
  uVar15 = puVar12[3];
  *(undefined4 *)(param_1 + 0x928) = *puVar12;
  *(undefined4 *)(param_1 + 0x92c) = uVar9;
  *(undefined4 *)(param_1 + 0x930) = uVar13;
  *(undefined4 *)(param_1 + 0x934) = uVar15;
  uVar9 = DAT_0018b068;
  iVar16 = DAT_0018b064;
  if ((*(ushort *)(param_1 + 0x9c4) & 0x200) == 0) {
    if (iVar14 < 1) {
      puVar12 = puVar12 + iVar14 * -4;
      uVar7 = puVar12[1];
      uVar9 = puVar12[2];
      uVar13 = puVar12[3];
      *(undefined4 *)(param_1 + 0x928) = *puVar12;
      *(undefined4 *)(param_1 + 0x92c) = uVar7;
      *(undefined4 *)(param_1 + 0x930) = uVar9;
      *(undefined4 *)(param_1 + 0x934) = uVar13;
      puVar12 = (undefined4 *)(DAT_0018b128 + iVar14 * -0x10);
      uVar7 = puVar12[1];
      uVar9 = puVar12[2];
      uVar13 = puVar12[3];
      *(undefined4 *)(param_1 + 0x938) = *puVar12;
      *(undefined4 *)(param_1 + 0x93c) = uVar7;
      *(undefined4 *)(param_1 + 0x940) = uVar9;
      *(undefined4 *)(param_1 + 0x944) = uVar13;
    }
    else {
      cVar2 = *(char *)(DAT_0018b064 + iVar14 * 3);
      if (cVar2 == '\x01') {
        fVar19 = (float)FUN_00371e50(DAT_0018b068);
        fVar19 = fVar19 + fVar20;
      }
      else {
        fVar19 = fVar4;
        if (cVar2 == '\x02') {
          fVar19 = (float)FUN_00371e50(uVar7);
        }
      }
      iVar16 = iVar14 * 3 + iVar16;
      *(float *)(param_1 + 0x938) = fVar19;
      cVar2 = *(char *)(iVar16 + 1);
      if (cVar2 == '\x01') {
        fVar19 = (float)FUN_00371e50(uVar9);
        fVar19 = fVar19 + fVar20;
      }
      else {
        fVar19 = fVar4;
        if (cVar2 == '\x02') {
          fVar19 = (float)FUN_00371e50(uVar7);
        }
      }
      *(float *)(param_1 + 0x93c) = fVar19;
      cVar2 = *(char *)(iVar16 + 2);
      if (cVar2 == '\x01') {
        fVar19 = (float)FUN_00371e50(uVar9);
        fVar20 = fVar19 + fVar20;
      }
      else {
        fVar20 = fVar4;
        if (cVar2 == '\x02') {
          fVar20 = (float)FUN_00371e50(uVar7);
        }
      }
      *(float *)(param_1 + 0x940) = fVar20;
      *(float *)(param_1 + 0x944) = fVar4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x928) = DAT_0018b060;
    *(undefined4 *)(param_1 + 0x92c) = uVar7;
    *(float *)(param_1 + 0x930) = fVar20;
    *(undefined4 *)(param_1 + 0x934) = uVar7;
    *(undefined4 *)(param_1 + 0x938) = uVar7;
    *(undefined4 *)(param_1 + 0x93c) = uVar7;
    *(float *)(param_1 + 0x940) = fVar4;
    *(undefined4 *)(param_1 + 0x944) = uVar7;
  }
  return;
}

