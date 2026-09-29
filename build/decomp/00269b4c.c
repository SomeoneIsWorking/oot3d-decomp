// OoT3D decomp @ 00269b4c  name=FUN_00269b4c  size=896

void FUN_00269b4c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;

  iVar7 = DAT_00269e78;
  psVar6 = DAT_00269e74;
  iVar5 = DAT_00269e70;
  uVar4 = DAT_00269e6c;
  uVar3 = DAT_00269e68;
  uVar11 = DAT_00269e64;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 10) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c1) & 2) == 0) {
    if (*(char *)(DAT_00269e88 + param_2) == '\0') goto LAB_00269da8;
    if ((*(short *)(param_1 + 0x116) != 0) && (*(char *)(param_1 + 2) == '\x05')) {
      sVar2 = 0;
      if (sVar1 != 0) {
        sVar2 = *DAT_00269e74;
      }
      if (sVar1 == 0 || sVar2 == 2) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa | 9;
        FUN_00375d3c(param_2,param_2 + 0x208c,param_1,1);
      }
    }
    FUN_00374a58(uVar11,param_1 + 0x5b0,*(undefined4 *)(psVar6 + 6));
    uVar11 = DAT_00269e84;
    *(undefined4 *)(param_1 + 500) = uVar3;
    FUN_00375bcc(param_1,uVar11);
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfe;
    sVar1 = *(short *)(param_1 + 0x1c);
    uVar9 = (int)sVar1 - 1;
    bVar13 = uVar9 == 2;
    if (uVar9 < 3) {
      bVar13 = *(char *)(param_1 + 2) == '\x05';
    }
    if (!bVar13) goto LAB_00269da4;
    if (*psVar6 == -4) {
      *psVar6 = 0;
    }
    sVar2 = *psVar6;
    iVar10 = (int)sVar2;
    iVar12 = iVar10 + 1;
    if (sVar1 != iVar12) goto joined_r0x00269d94;
LAB_00269ca4:
    *psVar6 = (short)iVar12;
  }
  else {
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0x1c8,1);
    if (**(short **)(param_1 + 0x1b8) != 0x193) {
      FUN_00374a58(DAT_00269e7c,param_1 + 0x5b0,*(undefined4 *)(psVar6 + 4));
      FUN_00375bcc(param_1,DAT_00269e80);
      *(int *)(param_1 + 0x1a4) = iVar5;
      goto LAB_00269da8;
    }
    if ((*(short *)(param_1 + 0x116) != 0) && (*(char *)(param_1 + 2) == '\x05')) {
      bVar13 = *(short *)(param_1 + 0x1c) != 0;
      sVar1 = 0;
      if (bVar13) {
        sVar1 = *psVar6;
      }
      if (!bVar13 || sVar1 == 2) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa | 9;
        FUN_00375d3c(param_2,param_2 + 0x208c,param_1,1);
      }
    }
    FUN_00374a58(uVar11,param_1 + 0x5b0,*(undefined4 *)(psVar6 + 6));
    uVar11 = DAT_00269e84;
    *(undefined4 *)(param_1 + 500) = uVar3;
    FUN_00375bcc(param_1,uVar11);
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfe;
    sVar1 = *(short *)(param_1 + 0x1c);
    uVar9 = (int)sVar1 - 1;
    bVar13 = uVar9 == 2;
    if (uVar9 < 3) {
      bVar13 = *(char *)(param_1 + 2) == '\x05';
    }
    if (!bVar13) {
LAB_00269da4:
      *(undefined4 *)(param_1 + 0x1a4) = uVar4;
      goto LAB_00269da8;
    }
    if (*psVar6 == -4) {
      *psVar6 = 0;
    }
    sVar2 = *psVar6;
    iVar10 = (int)sVar2;
    iVar12 = iVar10 + 1;
    if (sVar1 == iVar12) goto LAB_00269ca4;
joined_r0x00269d94:
    if (0 < iVar10) {
      *psVar6 = -sVar2;
    }
    *psVar6 = *psVar6 + -1;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  *(int *)(param_1 + 0x1a4) = iVar7;
LAB_00269da8:
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  fVar8 = DAT_00269e90;
  if (*(int *)(param_1 + 0x1a4) != DAT_00269e8c && *(int *)(param_1 + 0x1a4) != iVar7) {
    FUN_00376864(param_1);
    FUN_00376340(fVar8,*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500),param_2,
                 param_1,0x1d);
  }
  FUN_0037632c(param_1,param_1 + 0x1b0);
  if ((*(byte *)(param_1 + 0x1c1) & 1) != 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
  }
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x1a4) == DAT_00269e94) {
    FUN_0037322c(*(undefined4 *)(param_1 + 0x5ec),param_1);
    return;
  }
  if (*(int *)(param_1 + 0x1a4) != iVar5) {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x2c) + fVar8;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x38);
    return;
  }
  fVar14 = *(float *)(param_1 + 0x5ec);
  uVar11 = FUN_0036ae14(param_1 + 0x5b0,*(undefined4 *)(psVar6 + 4));
  fVar15 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0037322c(fVar8 - (fVar14 * fVar8) / fVar15,param_1);
  return;
}
