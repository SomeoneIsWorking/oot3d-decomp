// OoT3D decomp @ 003eafa4  name=FUN_003eafa4  size=1244

void FUN_003eafa4(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;

  fVar4 = DAT_003eb38c;
  piVar3 = DAT_003eb388;
  fVar13 = DAT_003eb384;
  fVar2 = DAT_003eb380;
  uVar7 = DAT_003eb37c;
  uVar1 = DAT_003eb374;
  fVar16 = DAT_003eb370;
  local_50 = DAT_003eb370;
  local_4c = DAT_003eb370;
  local_48 = DAT_003eb370;
  local_5c = DAT_003eb370;
  local_58 = DAT_003eb374;
  local_54 = DAT_003eb370;
  local_60 = *DAT_003eb378;
  local_64 = DAT_003eb378[1];
  if (((*(short *)(param_1 + 0x61c) != 0) && (*(short *)(param_1 + 0x61e) == 0)) &&
     ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
    *(undefined2 *)(param_1 + 0x61c) = 0;
    *(undefined4 *)(param_1 + 0x5d0) = uVar7;
    return;
  }
  uVar7 = 0;
  if (*(short *)(param_1 + 0x5de) == 0) {
    if (*(short *)(param_1 + 0x5dc) == 0) {
      sVar6 = *(short *)(param_1 + 0x614) + 1;
      *(short *)(param_1 + 0x614) = sVar6;
      fVar15 = DAT_003eb390;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fVar2 / fVar10 + fVar4) < (int)sVar6) {
        fVar10 = (float)FUN_00371e50(DAT_003eb390);
        uVar5 = DAT_003eb394;
        fVar10 = (float)VectorSignedToFloat((int)(short)(int)fVar10,(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x5de) = (short)(int)((fVar10 * fVar13) / fVar14 + fVar4);
        fVar10 = (float)FUN_00371e50(uVar5);
        fVar10 = (float)VectorSignedToFloat((int)(short)(int)fVar10,(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x614) = (short)(int)((fVar10 * fVar13) / fVar14 + fVar4);
        fVar14 = DAT_003eb39c;
        fVar10 = DAT_003eb398;
        if (*(short *)(param_1 + 0x61e) == 0) {
          fVar15 = (float)FUN_003738a8(DAT_003eb39c);
          uVar9 = in_fpscr & 0xfffffff | (uint)(fVar16 <= fVar15) << 0x1d;
          if (SUB41(uVar9 >> 0x1d,0)) {
            fVar15 = fVar15 + fVar14;
          }
          else {
            fVar15 = fVar15 - fVar14;
          }
          fVar11 = (float)FUN_003738a8(fVar14);
          fVar10 = DAT_003eb3a0;
          in_fpscr = uVar9 & 0xfffffff | (uint)(fVar16 <= fVar11) << 0x1d;
          bVar8 = SUB41(in_fpscr >> 0x1d,0);
          if (bVar8) {
            fVar11 = fVar11 + fVar14;
          }
          fVar15 = *(float *)(param_1 + 0x65c) + fVar15;
          if (!bVar8) {
            fVar11 = fVar11 - fVar14;
          }
          *(float *)(param_1 + 0x668) = fVar15;
          fVar14 = DAT_003eb3b0;
          iVar12 = DAT_003eb3a8;
          if ((uint)fVar10 <= (uint)fVar15) {
            fVar15 = DAT_003eb3a4;
          }
          fVar11 = *(float *)(param_1 + 0x664) + fVar11;
          *(float *)(param_1 + 0x670) = fVar11;
          *(float *)(param_1 + 0x668) = fVar15;
          fVar10 = DAT_003eb3b8;
          if (iVar12 < (int)fVar15) {
            fVar15 = DAT_003eb3ac;
          }
          if ((uint)fVar14 <= (uint)fVar11) {
            fVar11 = DAT_003eb3b4;
          }
          *(float *)(param_1 + 0x668) = fVar15;
          *(float *)(param_1 + 0x670) = fVar11;
          if ((uint)fVar11 < (uint)fVar10) {
            fVar11 = DAT_003eb3bc;
          }
          *(float *)(param_1 + 0x670) = fVar11;
        }
        else if (*(short *)(param_1 + 0x61e) == 1) {
          fVar14 = (float)FUN_003738a8(DAT_003eb398);
          uVar9 = in_fpscr & 0xfffffff | (uint)(fVar16 <= fVar14) << 0x1d;
          if (SUB41(uVar9 >> 0x1d,0)) {
            fVar14 = fVar14 + fVar10;
          }
          else {
            fVar14 = fVar14 - fVar10;
          }
          fVar10 = (float)FUN_003738a8(fVar15);
          in_fpscr = uVar9 & 0xfffffff | (uint)(fVar16 <= fVar10) << 0x1d;
          bVar8 = SUB41(in_fpscr >> 0x1d,0);
          if (bVar8) {
            fVar10 = fVar10 + fVar15;
          }
          if (!bVar8) {
            fVar10 = fVar10 - fVar15;
          }
          *(float *)(param_1 + 0x668) = *(float *)(param_1 + 0x65c) + fVar14;
          *(float *)(param_1 + 0x670) = *(float *)(param_1 + 0x664) + fVar10;
        }
      }
      else {
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x5dc) = (short)(int)(DAT_003eb3c0 / fVar15 + fVar4);
        uVar5 = DAT_003eb3c8;
        if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
          *(undefined4 *)(param_1 + 100) = DAT_003eb3c4;
          iVar12 = FUN_00371e50(uVar5);
          if ((iVar12 < 0x3f800000) && (*(short *)(param_1 + 0x61e) == 0)) {
            *(undefined4 *)(param_1 + 100) = uVar5;
            fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x5dc) = (short)(int)(DAT_003eb3cc / fVar15 + fVar4);
          }
        }
      }
      goto LAB_003eb2c4;
    }
  }
  else {
LAB_003eb2c4:
    if (*(short *)(param_1 + 0x5dc) == 0) goto LAB_003eb458;
  }
  uVar5 = DAT_003eb3d0;
  uVar7 = 1;
  FUN_00373500(*(undefined4 *)(param_1 + 0x668),DAT_003eb3d0,*(undefined4 *)(param_1 + 0x64c),
               param_1 + 0x28);
  FUN_00373500(*(undefined4 *)(param_1 + 0x670),uVar5,*(undefined4 *)(param_1 + 0x64c),
               param_1 + 0x30);
  FUN_00373500(fVar13,uVar5,DAT_003eb3d4,param_1 + 0x64c);
  fVar13 = *(float *)(param_1 + 0x668) - *(float *)(param_1 + 0x28);
  fVar15 = *(float *)(param_1 + 0x670) - *(float *)(param_1 + 0x30);
  if ((int)ABS(fVar13) < DAT_003eb3d8) {
    fVar13 = fVar16;
  }
  if ((int)ABS(fVar15) < DAT_003eb3d8) {
    fVar15 = fVar16;
  }
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar16) << 0x1e;
  bVar8 = false;
  if (SUB41(uVar9 >> 0x1e,0)) {
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar16) << 0x1e;
    bVar8 = SUB41(uVar9 >> 0x1e,0);
  }
  if (bVar8) {
    *(undefined2 *)(param_1 + 0x5dc) = 0;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(uVar9 >> 0x15) & 3);
    *(short *)(param_1 + 0x614) = (short)(int)(fVar2 / fVar16 + fVar4);
  }
  fVar16 = (float)FUN_003696ec();
  FUN_00375a18(param_1 + 0x36,(int)(short)(int)(fVar16 * DAT_003eb4ec),3,
               (int)(short)(int)*(float *)(param_1 + 0x650),0);
  FUN_00373500(DAT_003eb4f4,uVar5,DAT_003eb4f0,param_1 + 0x650);
LAB_003eb458:
  if (*(short *)(param_1 + 0x5e0) == 0) {
    FUN_003344f4(param_1,param_2,uVar7);
  }
  else if ((*(uint *)(DAT_003eb4f8 + param_2) & 3) == 0) {
    local_4c = (float)FUN_003738a8(DAT_003eb4fc);
    local_58 = uVar1;
    local_70 = *(undefined4 *)(param_1 + 0x28);
    uStack_6c = *(undefined4 *)(param_1 + 0x2c);
    uStack_68 = *(undefined4 *)(param_1 + 0x30);
    FUN_00365d20(param_2,&local_70,&local_50,&local_5c,&local_60,&local_64,600,0x28,0x1e);
    return;
  }
  return;
}
