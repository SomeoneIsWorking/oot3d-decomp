// OoT3D decomp @ 00464b0c  name=FUN_00464b0c  size=728

void FUN_00464b0c(float param_1,float param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar4 = DAT_00464d3c;
  fVar13 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (float)VectorUnsignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorUnsignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorUnsignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * DAT_00464d38;
  fVar15 = fVar15 * DAT_00464d38;
  fVar16 = fVar16 * DAT_00464d38;
  fVar17 = fVar17 * DAT_00464d38;
  if (*param_3 != 0) {
    uVar3 = in_fpscr & 0xfffffff | (uint)(*(float *)(DAT_00464d3c + 0x24) == fVar13) << 0x1e;
    bVar12 = false;
    if (SUB41(uVar3 >> 0x1e,0)) {
      uVar3 = in_fpscr & 0xfffffff | (uint)(*(float *)(DAT_00464d3c + 0x28) == fVar15) << 0x1e;
      bVar12 = SUB41(uVar3 >> 0x1e,0);
    }
    bVar11 = false;
    if (bVar12) {
      uVar3 = uVar3 & 0xfffffff | (uint)(*(float *)(DAT_00464d3c + 0x2c) == fVar16) << 0x1e;
      bVar11 = SUB41(uVar3 >> 0x1e,0);
    }
    bVar12 = false;
    if (bVar11) {
      uVar3 = uVar3 & 0xfffffff | (uint)(*(float *)(DAT_00464d3c + 0x30) == fVar17) << 0x1e;
      bVar12 = SUB41(uVar3 >> 0x1e,0);
    }
    if (!bVar12) {
      *(float *)(DAT_00464d3c + 0x24) = fVar13;
      *(float *)(iVar4 + 0x28) = fVar15;
      *(float *)(iVar4 + 0x2c) = fVar16;
      *(float *)(iVar4 + 0x30) = fVar17;
      iVar5 = *param_3;
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + 0x28);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar4 + 0x2c);
    }
    iVar4 = FUN_004706ac(param_3 + 1,param_4,0x40);
    if (iVar4 != 0) {
      iVar4 = param_4[1];
      iVar5 = param_4[2];
      iVar6 = param_4[3];
      iVar7 = param_4[4];
      iVar8 = param_4[5];
      iVar9 = param_4[6];
      param_3[1] = *param_4;
      param_3[2] = iVar4;
      param_3[3] = iVar5;
      param_3[4] = iVar6;
      param_3[5] = iVar7;
      param_3[6] = iVar8;
      param_3[7] = iVar9;
      iVar4 = param_4[8];
      iVar5 = param_4[9];
      iVar6 = param_4[10];
      iVar7 = param_4[0xb];
      iVar8 = param_4[0xc];
      iVar9 = param_4[0xd];
      param_3[8] = param_4[7];
      param_3[9] = iVar4;
      param_3[10] = iVar5;
      param_3[0xb] = iVar6;
      param_3[0xc] = iVar7;
      param_3[0xd] = iVar8;
      param_3[0xe] = iVar9;
      iVar4 = param_4[0xf];
      param_3[0xf] = param_4[0xe];
      param_3[0x10] = iVar4;
      *(undefined1 *)((int)param_3 + 0x45) = 1;
    }
    fVar13 = (float)VectorSignedToFloat((int)*(float *)(*param_3 + 0x14),(byte)(uVar3 >> 0x15) & 3);
    uVar1 = uVar3 & 0xfffffff | (uint)(fVar13 == param_1) << 0x1e;
    if (!SUB41(uVar1 >> 0x1e,0)) {
      uVar14 = VectorSignedToFloat((int)param_1,(byte)(uVar1 >> 0x15) & 3);
      *(undefined4 *)(*param_3 + 0x14) = uVar14;
      *(undefined1 *)((int)param_3 + 0x45) = 1;
    }
    fVar13 = (float)VectorSignedToFloat((int)*(float *)(*param_3 + 0x18),(byte)(uVar1 >> 0x15) & 3);
    uVar3 = uVar3 & 0xfffffff | (uint)(fVar13 == param_2) << 0x1e;
    if (!SUB41(uVar3 >> 0x1e,0)) {
      uVar14 = VectorSignedToFloat((int)param_2,(byte)(uVar3 >> 0x15) & 3);
      *(undefined4 *)(*param_3 + 0x18) = uVar14;
      *(undefined1 *)((int)param_3 + 0x45) = 1;
    }
    bVar12 = param_2 - param_1 != DAT_00464d88;
    if ((bool)(char)param_3[0x11] != bVar12) {
      *(bool *)(param_3 + 0x11) = bVar12;
    }
    return;
  }
  *(float *)(DAT_00464d3c + 0x24) = fVar13;
  *(float *)(iVar4 + 0x28) = fVar15;
  *(float *)(iVar4 + 0x2c) = fVar16;
  *(float *)(iVar4 + 0x30) = fVar17;
  *(int *)(iVar4 + 0x34) = (int)param_1;
  *(int *)(iVar4 + 0x38) = (int)param_2;
  *(undefined1 *)(param_3 + 0x11) = 1;
  iVar4 = param_4[1];
  iVar5 = param_4[2];
  iVar6 = param_4[3];
  iVar7 = param_4[4];
  iVar8 = param_4[5];
  iVar9 = param_4[6];
  iVar10 = param_4[7];
  param_3[1] = *param_4;
  param_3[2] = iVar4;
  param_3[3] = iVar5;
  param_3[4] = iVar6;
  param_3[5] = iVar7;
  param_3[6] = iVar8;
  param_3[7] = iVar9;
  param_3[8] = iVar10;
  iVar4 = param_4[9];
  iVar5 = param_4[10];
  iVar6 = param_4[0xb];
  iVar7 = param_4[0xc];
  iVar8 = param_4[0xd];
  iVar9 = param_4[0xe];
  iVar10 = param_4[0xf];
  param_3[9] = param_4[8];
  param_3[10] = iVar4;
  param_3[0xb] = iVar5;
  param_3[0xc] = iVar6;
  param_3[0xd] = iVar7;
  param_3[0xe] = iVar8;
  param_3[0xf] = iVar9;
  param_3[0x10] = iVar10;
  iVar5 = (**(code **)(*(int *)*DAT_00464d80 + 0xc))
                    ((int *)*DAT_00464d80,DAT_00464d84,s_d__home_queen_dailyBuild_game_us_00464d40,
                     0x54);
  iVar4 = 0;
  if (iVar5 != 0) {
    iVar4 = FUN_0047fdd8(iVar5,DAT_00464d3c);
  }
  *param_3 = iVar4;
  FUN_002d4554(iVar4,param_4);
  iVar4 = DAT_0047fdd0;
  param_3 = (int *)*param_3;
  iVar5 = *param_3;
  param_3[1] = *(int *)(iVar5 + 0x24);
  param_3[2] = *(int *)(iVar5 + 0x28);
  param_3[3] = *(int *)(iVar5 + 0x2c);
  param_3[4] = iVar4;
  iVar4 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  param_3[5] = iVar4;
  iVar4 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  param_3[6] = iVar4;
  piVar2 = DAT_0047fdd4;
  if (*(char *)(iVar5 + 0x41) == '\0') {
    param_3[9] = *DAT_0047fdd4;
    FUN_002cdbfc(param_3);
    iVar4 = 0;
    do {
      uVar3 = FUN_002cdb60(param_3[iVar4 + 0x9a]);
      iVar5 = FUN_002cdb0c(param_3[iVar4 + 0x1a]);
      iVar6 = iVar4 + 1;
      param_3[iVar4 + 0x11a] = uVar3 | iVar5 << 0xd;
      iVar4 = iVar6;
    } while (iVar6 < 0x80);
    *piVar2 = *piVar2 + 1;
  }
  return;
}

