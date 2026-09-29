// OoT3D decomp @ 003e3838  name=FUN_003e3838  size=1660

void FUN_003e3838(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  short local_44;
  short local_42;

  fVar4 = DAT_003e3c40;
  uVar3 = DAT_003e3c3c;
  fVar2 = DAT_003e3c38;
  iVar1 = DAT_003e3c34;
  iVar11 = *(int *)(DAT_003e3c30 + param_2);
  if ((*(char *)(param_1 + 0xb6) == -1) && (DAT_003e3c34 < *(int *)(param_1 + 0x98))) {
    FUN_0036e168(*(float *)(param_1 + 0xc) + DAT_003e3c44,param_1 + 0x2c);
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_0036e168(*(float *)(param_1 + 0xc) + fVar2,param_1 + 0x2c);
  }
  iVar6 = DAT_003e3c50;
  puVar9 = (undefined4 *)(param_1 + 0xb58);
  *puVar9 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0x30);
  uVar5 = DAT_003e3c54;
  if ((*(uint *)(iVar6 + param_2) & 0xf) == 0) {
    fVar12 = (float)FUN_003738a8(DAT_003e3c54);
    *(float *)(param_1 + 0xb6c) = fVar12 + *(float *)(param_1 + 0xb6c);
    fVar12 = (float)FUN_003738a8(uVar5);
    *(float *)(param_1 + 0xb70) = fVar12 + *(float *)(param_1 + 0xb70);
    fVar13 = (float)FUN_003406a8(*(undefined4 *)(param_1 + 0xb6c));
    fVar12 = DAT_003e3c58;
    *(float *)(param_1 + 0xb64) = fVar13 * DAT_003e3c58;
    fVar13 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0xb70));
    *(float *)(param_1 + 0xb68) = fVar13 * fVar12;
  }
  *(float *)(param_1 + 0xb5c) = *(float *)(param_1 + 0xb5c) - DAT_003e3c5c;
  *(float *)(param_1 + 0xb58) = *(float *)(param_1 + 0xb58) + *(float *)(param_1 + 0xb64);
  *(float *)(param_1 + 0xb60) = *(float *)(param_1 + 0xb60) + *(float *)(param_1 + 0xb68);
  FUN_003159f8(uVar3,*(undefined4 *)(param_1 + 0x6c),fVar4,fVar4,puVar9,param_1 + 0xa50);
  fVar12 = DAT_003e3c60;
  iVar6 = 0xc;
  do {
    iVar7 = param_1 + iVar6 * 0xc;
    FUN_0036654c(iVar7 + 0x9c0,iVar7 + 0x9b4,&local_44,0);
    local_68 = *(undefined4 *)(iVar7 + 0x9c0);
    local_58 = *(undefined4 *)(iVar7 + 0x9c4);
    local_48 = *(undefined4 *)(iVar7 + 0x9c8);
    local_6c = 0.0;
    local_70 = 0.0;
    local_74 = 1.0;
    local_64 = 0.0;
    local_60 = 1.0;
    local_50 = 0.0;
    local_4c = 1.0;
    local_5c = 0.0;
    local_54 = 0.0;
    iVar8 = (int)local_44;
    if (local_42 != 0) {
      fVar13 = (float)VectorSignedToFloat((int)local_42,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 * fVar12;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar14 = (float)FUN_003727f0(fVar13);
        fVar13 = (float)FUN_00372674(fVar13);
        fVar17 = local_74 * fVar14;
        local_74 = local_74 * fVar13 - local_6c * fVar14;
        local_6c = fVar17 + local_6c * fVar13;
        fVar17 = local_64 * fVar14;
        local_64 = local_64 * fVar13 - local_5c * fVar14;
        local_5c = fVar17 + local_5c * fVar13;
        fVar17 = local_54 * fVar14;
        local_54 = local_54 * fVar13 - local_4c * fVar14;
        local_4c = fVar17 + local_4c * fVar13;
      }
    }
    if (iVar8 != 0) {
      fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 * fVar12;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar15 = (float)FUN_003727f0(fVar13);
        fVar16 = (float)FUN_00372674(fVar13);
        fVar13 = local_6c * fVar15;
        local_6c = local_6c * fVar16 - local_70 * fVar15;
        fVar14 = local_5c * fVar15;
        local_5c = local_5c * fVar16 - local_60 * fVar15;
        fVar17 = local_4c * fVar15;
        local_4c = local_4c * fVar16 - local_50 * fVar15;
        local_70 = local_70 * fVar16 + fVar13;
        local_60 = local_60 * fVar16 + fVar14;
        local_50 = local_50 * fVar16 + fVar17;
      }
    }
    FUN_003735ac(iVar7 + 0x9b4,&local_74,DAT_003e3c64);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_0036654c(param_1 + 0x9b4,puVar9,&local_44,0);
  FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),&local_74,0);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0xb06),3,(int)*(short *)(param_1 + 0xb78),
               0xb6);
  FUN_00375a18(param_1 + 0xbc,(int)*(short *)(param_1 + 0xb04),3,(int)*(short *)(param_1 + 0xb78),
               0xb6);
  FUN_0036e88c(&local_74,(int)(short)(*(short *)(param_1 + 0xbc) + -0x8000),
               (int)*(short *)(param_1 + 0xbe),0,1);
  FUN_003735ac(param_1 + 0x9b4,&local_74,DAT_003e3c64);
  iVar6 = 0;
  *(short *)(param_1 + 0xb54) = local_42;
  *(short *)(param_1 + 0xb52) = local_44 + -0x8000;
  do {
    iVar10 = param_1 + iVar6 * 0xc;
    local_68 = *(undefined4 *)(iVar10 + 0x9b4);
    local_58 = *(undefined4 *)(iVar10 + 0x9b8);
    local_48 = *(undefined4 *)(iVar10 + 0x9bc);
    local_70 = 0.0;
    local_74 = 1.0;
    local_6c = 0.0;
    local_64 = 0.0;
    local_60 = 1.0;
    local_5c = 0.0;
    local_54 = 0.0;
    local_50 = 0.0;
    iVar7 = param_1 + iVar6 * 6;
    local_4c = 1.0;
    FUN_00375a18(iVar7 + 0xb06,(int)*(short *)(iVar7 + 0xb0c),3,(int)*(short *)(param_1 + 0xb78),
                 0xb6);
    FUN_00375a18(iVar7 + 0xb04,(int)*(short *)(iVar7 + 0xb0a),3,(int)*(short *)(param_1 + 0xb78),
                 0xb6);
    iVar8 = (int)(short)(*(short *)(iVar7 + 0xb04) + -0x8000);
    if (*(short *)(iVar7 + 0xb06) != 0) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0xb06),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 * fVar12;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar14 = (float)FUN_003727f0(fVar13);
        fVar13 = (float)FUN_00372674(fVar13);
        fVar17 = local_74 * fVar14;
        local_74 = local_74 * fVar13 - local_6c * fVar14;
        local_6c = fVar17 + local_6c * fVar13;
        fVar17 = local_64 * fVar14;
        local_64 = local_64 * fVar13 - local_5c * fVar14;
        local_5c = fVar17 + local_5c * fVar13;
        fVar17 = local_54 * fVar14;
        local_54 = local_54 * fVar13 - local_4c * fVar14;
        local_4c = fVar17 + local_4c * fVar13;
      }
    }
    if (iVar8 != 0) {
      fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 * fVar12;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar15 = (float)FUN_003727f0(fVar13);
        fVar16 = (float)FUN_00372674(fVar13);
        fVar13 = local_6c * fVar15;
        local_6c = local_6c * fVar16 - local_70 * fVar15;
        fVar14 = local_5c * fVar15;
        local_5c = local_5c * fVar16 - local_60 * fVar15;
        fVar17 = local_4c * fVar15;
        local_4c = local_4c * fVar16 - local_50 * fVar15;
        local_70 = local_70 * fVar16 + fVar13;
        local_60 = local_60 * fVar16 + fVar14;
        local_50 = local_50 * fVar16 + fVar17;
      }
    }
    FUN_003735ac(iVar10 + 0x9c0,&local_74,DAT_003e3c64);
    iVar7 = DAT_003e3eec;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xd);
  *(undefined2 *)(param_1 + 0xb52) = *(undefined2 *)(param_1 + 0xb4c);
  *(undefined2 *)(param_1 + 0xb54) = *(undefined2 *)(param_1 + 0xb4e);
  if ((((*(uint *)(iVar7 + iVar11) & 0x4000000) == 0) && (*(int *)(param_1 + 0x98) <= iVar1)) &&
     (*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0xc) + fVar2)) {
    *(undefined4 *)(param_1 + 0x9a8) = 5;
    *(undefined2 *)(param_1 + 0xb74) = 0x1e;
    uVar3 = DAT_003e3ef0;
    *(undefined2 *)(param_1 + 0xb76) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    *(undefined2 *)(param_1 + 0xb78) = 1000;
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    *(undefined4 *)(param_1 + 0x9ac) = DAT_003e3ef4;
  }
  return;
}
