// OoT3D decomp @ 00240c38  name=z_bg_jya_cobra_00240c38  size=1012

void z_bg_jya_cobra_00240c38(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float local_128;
  float local_124 [63];
  undefined4 local_28;

  pfVar5 = &local_128;
  *(undefined4 *)(param_1 + 0x22bc) = 0;
  local_128 = (float)(param_1 + 0x2214);
  *(undefined4 *)(param_1 + 0x22b8) = 0;
  local_124[0] = 1.96182e-44;
  local_124[1] = 0.0;
  FUN_00372f38(param_1,param_2,param_1 + 0x2210,0xf);
  iVar3 = (**(code **)(*(int *)*DAT_0024105c + 0xc))
                    ((int *)*DAT_0024105c,0x234,s_d__home_queen_dailyBuild_game_us_00241020,
                     DAT_00241060);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = FUN_00347258();
  }
  *(undefined4 *)(param_1 + 0x221c) = uVar4;
  local_128 = 2.24208e-44;
  local_124[0] = 0.0;
  uVar4 = FUN_00340e14(param_1,param_2,uVar4,param_1 + 0x2218);
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x2218) + 0x10);
  uVar4 = FUN_00372f0c(uVar4,1);
  *(undefined4 *)(param_1 + 0x2220) = uVar10;
  FUN_00372d94((undefined4 *)(param_1 + 0x2220),uVar4);
  *(undefined1 *)(param_1 + 0x2230) = 1;
  *(undefined4 *)(param_1 + 0x2368) = 0;
  *(undefined4 *)(param_1 + 0x236c) = 0;
  *(undefined4 *)(param_1 + 0x2370) = 0;
  *(undefined4 *)(param_1 + 0x2374) = 0;
  *(undefined4 *)(param_1 + 0x2378) = 0;
  *(undefined4 *)(param_1 + 0x237c) = 0;
  *(undefined4 *)(param_1 + 0x2380) = 0;
  *(undefined4 *)(param_1 + 0x2384) = 0;
  *(undefined4 *)(param_1 + 0x2388) = 0;
  FUN_00343280(param_1 + 0x1ec,DAT_00241064);
  *(uint *)(param_1 + 0x220c) = param_1 + 0x1fbU & 0xfffffff0;
  *(undefined4 *)(param_1 + 0x238c) = 0;
  *(undefined4 *)(param_1 + 0x2368) = 0x2000;
  *(undefined2 *)(param_1 + 0x236c) = 1;
  *(undefined1 *)(param_1 + 0x236e) = 0;
  *(undefined2 *)(param_1 + 0x2370) = 0x40;
  *(undefined2 *)(param_1 + 0x2372) = 0x40;
  *(short *)(param_1 + 0x2374) = (short)DAT_00241068;
  *(short *)(param_1 + 0x2376) = (short)DAT_0024106c;
  uVar4 = FUN_00353fd4(param_1,param_2,3);
  local_28 = 0;
  FUN_003532e8(param_1,0);
  local_28 = uVar4;
  uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  FUN_003510b0(param_1,DAT_00241070);
  if (((int)*(short *)(param_1 + 0x1c) & 3U) == 0) {
    iVar3 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0xbe) = 0;
      *(undefined2 *)(param_1 + 0x16) = 0;
      *(undefined2 *)(param_1 + 0x36) = 0;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 3) == 0) {
      local_124[1] = 0.0;
      local_124[2] = 8.40779e-45;
      local_128 = 0.0;
      local_124[0] = 0.0;
      FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_00241074,
                   *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0xb7);
    }
  }
  *(undefined4 *)(param_1 + 0x1bc) = DAT_00241078;
  *(undefined2 *)(param_1 + 0x1c0) = 0;
  sVar1 = *(short *)(param_1 + 0x16) + *(short *)(param_1 + 0x1c4) * 0x2000;
  *(short *)(param_1 + 0x36) = sVar1;
  *(short *)(param_1 + 0xbe) = sVar1;
  uVar2 = *(ushort *)(param_1 + 0x1c) & 3;
  if ((uVar2 == 1 || uVar2 == 2) && (*(undefined1 *)(param_1 + 3) = 0xff, uVar2 == 1)) {
    iVar11 = 0x20;
    iVar3 = 0;
    do {
      iVar11 = iVar11 + -1;
      fVar15 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
      pfVar5[1] = (fVar15 - DAT_0024107c) * (fVar15 - DAT_0024107c);
      pfVar5 = pfVar5 + 2;
      *pfVar5 = (fVar16 - DAT_0024107c) * (fVar16 - DAT_0024107c);
      iVar3 = iVar3 + 2;
    } while (iVar11 != 0);
    iVar12 = *(int *)(param_1 + 0x220c);
    FUN_0034322c(iVar12,0x2000,0);
    fVar16 = DAT_00241088;
    iVar11 = DAT_00241084;
    fVar15 = DAT_00241080;
    iVar13 = 0;
    iVar3 = 0;
    do {
      puVar7 = (undefined2 *)(iVar12 + iVar13 * 2);
      fVar17 = local_124[iVar3];
      pfVar5 = local_124;
      iVar8 = 0x40;
      do {
        fVar19 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        fVar19 = fVar17 + fVar19 * fVar15;
        if ((int)fVar19 < iVar11) {
          iVar18 = (int)(fVar19 * fVar16);
          if (0x280 - iVar18 < 0xa7) {
            iVar18 = 0x280 - iVar18;
          }
          else {
            iVar18 = 0xa6;
          }
          *puVar7 = (short)((uint)(iVar18 << 0xc) >> 0x10);
        }
        iVar8 = iVar8 + -1;
        puVar7 = puVar7 + 1;
      } while (iVar8 != 0);
      iVar3 = iVar3 + 1;
      iVar13 = iVar13 + 0x40;
    } while (iVar3 < 0x40);
    iVar13 = *(int *)(param_1 + 0x220c);
    iVar12 = 0;
    iVar8 = 0;
    iVar3 = *(int *)(DAT_0024108c + 4);
    iVar11 = DAT_0024108c + 0x330;
    do {
      iVar14 = iVar13 + iVar12 * 2;
      puVar6 = (ushort *)(iVar14 + 0xf08);
      iVar18 = 0x38;
      do {
        iVar9 = *(int *)(iVar11 + iVar8 * 4);
        if ((int)(*puVar6 & 0xf) < iVar9) {
          *puVar6 = (ushort)((uint)(iVar9 * iVar3 * 0x100) >> 0x10);
        }
        iVar18 = iVar18 + -1;
        puVar6 = puVar6 + 1;
      } while (iVar18 != 0);
      iVar8 = iVar8 + 1;
      *(undefined2 *)(iVar14 + 0xf78) = 2;
      iVar12 = iVar12 + 0x40;
      *(undefined2 *)(iVar14 + 0xf06) = 2;
    } while (iVar8 < 4);
    if ((*(ushort *)(param_1 + 0x1c) & 3) == 1) {
      *(undefined4 *)(param_1 + 0x100) = DAT_00241090;
    }
  }
  *(undefined4 *)(param_1 + 0x2390) = 0xffffffff;
  return;
}
