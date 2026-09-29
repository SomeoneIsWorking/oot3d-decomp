// OoT3D decomp @ 0025efc4  name=FUN_0025efc4  size=1884

void FUN_0025efc4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_60 [3];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  int local_38;

  local_3c = 0;
  FUN_003510b0(param_1,DAT_0025f3a0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x2c);
  FUN_00372f38(param_1,param_2,param_1 + 0x310,
               *(undefined4 *)(DAT_0025f3a4 + (*(ushort *)(param_1 + 0x1c) & 0xf) * 4),0);
  if (-1 < *(int *)(DAT_0025f3a8 + (*(ushort *)(param_1 + 0x1c) & 0xf) * 4)) {
    uVar2 = FUN_00372f0c();
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0xc),uVar2);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x310) + 0xc) + 0x10) = 1;
  }
  *(undefined4 *)(param_1 + 0x314) =
       *(undefined4 *)(DAT_0025f3ac + (*(ushort *)(param_1 + 0x1c) & 0xf) * 4);
  FUN_003532e8(param_1,1);
  local_3c = FUN_00353fd4(param_1,param_2,
                          *(undefined4 *)(DAT_0025f3b0 + (*(ushort *)(param_1 + 0x1c) & 0xf) * 4));
  local_38 = param_2 + 0xae8;
  uVar2 = FUN_00353ec8(param_2,local_38,param_1,local_3c);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  fVar8 = DAT_0025f3c0;
  iVar3 = DAT_0025f3bc;
  uVar1 = DAT_0025f3b8;
  uVar2 = DAT_0025f3b4;
  switch(*(ushort *)(param_1 + 0x1c) & 0xf) {
  case 0:
    iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar4 == 0) {
      FUN_0034f910(param_2,param_1 + 0x1bc);
      iVar4 = FUN_0034f760(param_2,param_1 + 0x1bc,param_1,DAT_0025f3bc,param_1 + 0x1dc);
      if (iVar4 == 0) {
LAB_0025f670:
        FUN_00374428(param_1);
        return;
      }
      fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar4 = 0;
      do {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          iVar7 = *(int *)(iVar3 + 0xc) + iVar4 * 0x3c;
          fVar11 = *(float *)(iVar5 * 0xc + 0x18 + iVar7);
          fVar12 = *(float *)(iVar5 * 0xc + 0x1c + iVar7);
          fVar13 = *(float *)(iVar7 + iVar5 * 0xc + 0x20) + fVar8;
          fVar14 = fVar13 * fVar9 + fVar11 * fVar10;
          fVar11 = fVar13 * fVar10 - fVar11 * fVar9;
          local_60[iVar5 * 3] = fVar14;
          local_60[iVar5 * 3 + 1] = fVar12;
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11;
          local_60[iVar5 * 3] = fVar14 + *(float *)(param_1 + 0x28);
          local_60[iVar5 * 3 + 1] = fVar12 + *(float *)(param_1 + 0x2c);
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11 + *(float *)(param_1 + 0x30);
          iVar5 = iVar6;
        } while (iVar6 < 3);
        FUN_00362434(param_1 + 0x1bc,iVar4,local_60,auStack_54,auStack_48);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
LAB_0025f260:
      *(undefined4 *)(param_1 + 0x2f0) = uVar1;
      return;
    }
    break;
  case 1:
    iVar3 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar3 == 0) {
      FUN_0034f910(param_2,param_1 + 0x1bc);
      iVar3 = FUN_0034f760(param_2,param_1 + 0x1bc,param_1,DAT_0025f3c4,param_1 + 0x1dc);
      if (iVar3 == 0) goto LAB_0025f670;
      fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar3 = DAT_0025f3c4;
      iVar4 = 0;
      do {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          iVar7 = *(int *)(iVar3 + 0xc) + iVar4 * 0x3c;
          fVar11 = *(float *)(iVar5 * 0xc + 0x18 + iVar7);
          fVar12 = *(float *)(iVar5 * 0xc + 0x1c + iVar7);
          fVar13 = *(float *)(iVar7 + iVar5 * 0xc + 0x20) + fVar8;
          fVar14 = fVar13 * fVar9 + fVar11 * fVar10;
          fVar11 = fVar13 * fVar10 - fVar11 * fVar9;
          local_60[iVar5 * 3] = fVar14;
          local_60[iVar5 * 3 + 1] = fVar12;
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11;
          local_60[iVar5 * 3] = fVar14 + *(float *)(param_1 + 0x28);
          local_60[iVar5 * 3 + 1] = fVar12 + *(float *)(param_1 + 0x2c);
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11 + *(float *)(param_1 + 0x30);
          iVar5 = iVar6;
        } while (iVar6 < 3);
        FUN_00362434(param_1 + 0x1bc,iVar4,local_60,auStack_54,auStack_48);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 1);
      goto LAB_0025f260;
    }
    break;
  case 2:
    iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar4 == 0) {
      FUN_0034f910(param_2,param_1 + 0x1bc);
      iVar4 = FUN_0034f760(param_2,param_1 + 0x1bc,param_1,DAT_0025f75c,param_1 + 0x1dc);
      if (iVar4 == 0) goto LAB_0025f670;
      fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar4 = 0;
      do {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          iVar7 = *(int *)(iVar3 + 0xc) + iVar4 * 0x3c;
          fVar10 = *(float *)(iVar5 * 0xc + 0x18 + iVar7);
          fVar11 = *(float *)(iVar5 * 0xc + 0x1c + iVar7);
          fVar12 = *(float *)(iVar7 + iVar5 * 0xc + 0x20);
          fVar13 = fVar12 * fVar8 + fVar10 * fVar9;
          fVar10 = fVar12 * fVar9 - fVar10 * fVar8;
          local_60[iVar5 * 3] = fVar13;
          local_60[iVar5 * 3 + 1] = fVar11;
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar10;
          local_60[iVar5 * 3] = fVar13 + *(float *)(param_1 + 0x28);
          local_60[iVar5 * 3 + 1] = fVar11 + *(float *)(param_1 + 0x2c);
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar10 + *(float *)(param_1 + 0x30);
          iVar5 = iVar6;
        } while (iVar6 < 3);
        FUN_00362434(param_1 + 0x1bc,iVar4,local_60,auStack_54,auStack_48);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      goto LAB_0025f260;
    }
    break;
  case 3:
    iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar4 == 0) {
      FUN_0034f910(param_2,param_1 + 0x1bc);
      iVar4 = FUN_0034f760(param_2,param_1 + 0x1bc,param_1,DAT_0025f760,param_1 + 0x1dc);
      if (iVar4 == 0) goto LAB_0025f670;
      fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar4 = 0;
      do {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          iVar7 = *(int *)(iVar3 + 0xc) + iVar4 * 0x3c;
          fVar11 = *(float *)(iVar5 * 0xc + 0x18 + iVar7);
          fVar12 = *(float *)(iVar5 * 0xc + 0x1c + iVar7);
          fVar13 = *(float *)(iVar7 + iVar5 * 0xc + 0x20) + fVar8;
          fVar14 = fVar13 * fVar9 + fVar11 * fVar10;
          fVar11 = fVar13 * fVar10 - fVar11 * fVar9;
          local_60[iVar5 * 3] = fVar14;
          local_60[iVar5 * 3 + 1] = fVar12;
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11;
          local_60[iVar5 * 3] = fVar14 + *(float *)(param_1 + 0x28);
          local_60[iVar5 * 3 + 1] = fVar12 + *(float *)(param_1 + 0x2c);
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11 + *(float *)(param_1 + 0x30);
          iVar5 = iVar6;
        } while (iVar6 < 3);
        FUN_00362434(param_1 + 0x1bc,iVar4,local_60,auStack_54,auStack_48);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      goto LAB_0025f260;
    }
    break;
  case 4:
    iVar4 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar4 == 0) {
      FUN_0034f910(param_2,param_1 + 0x1bc);
      iVar4 = FUN_0034f760(param_2,param_1 + 0x1bc,param_1,DAT_0025f760,param_1 + 0x1dc);
      if (iVar4 == 0) goto LAB_0025f670;
      fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      iVar4 = 0;
      do {
        iVar5 = 0;
        do {
          iVar6 = iVar5 + 1;
          iVar7 = *(int *)(iVar3 + 0xc) + iVar4 * 0x3c;
          fVar11 = *(float *)(iVar5 * 0xc + 0x18 + iVar7);
          fVar12 = *(float *)(iVar5 * 0xc + 0x1c + iVar7);
          fVar13 = *(float *)(iVar7 + iVar5 * 0xc + 0x20) + fVar8;
          fVar14 = fVar13 * fVar9 + fVar11 * fVar10;
          fVar11 = fVar13 * fVar10 - fVar11 * fVar9;
          local_60[iVar5 * 3] = fVar14;
          local_60[iVar5 * 3 + 1] = fVar12;
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11;
          local_60[iVar5 * 3] = fVar14 + *(float *)(param_1 + 0x28);
          local_60[iVar5 * 3 + 1] = fVar12 + *(float *)(param_1 + 0x2c);
          *(float *)(auStack_54 + iVar5 * 0xc + -4) = fVar11 + *(float *)(param_1 + 0x30);
          iVar5 = iVar6;
        } while (iVar6 < 3);
        FUN_00362434(param_1 + 0x1bc,iVar4,local_60,auStack_54,auStack_48);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      goto LAB_0025f260;
    }
    break;
  default:
    goto switchD_0025f0ec_default;
  }
  FUN_0036b940(param_2,local_38,*(undefined4 *)(param_1 + 0x1a4));
  FUN_00350f34(param_1,param_1 + 0x310,0);
  *(undefined4 *)(param_1 + 0x2f0) = uVar2;
switchD_0025f0ec_default:
  return;
}
