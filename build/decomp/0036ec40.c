// OoT3D decomp @ 0036ec40  name=FUN_0036ec40  size=688

void FUN_0036ec40(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  int local_34;
  int local_30;
  
  iVar11 = DAT_0036eef4;
  pcVar1 = DAT_0036eef0;
  if (*DAT_0036eef0 == '\0') {
    piVar12 = (int *)(DAT_0036eef4 + param_1 * 4);
    if (*piVar12 != 0) {
      FUN_003102dc(*piVar12,0);
    }
    if (pcVar1[3] == '\0') {
      uVar4 = FUN_0030f0ec();
      FUN_002dd484(uVar4,piVar12,param_2,0);
    }
    else {
      uVar4 = FUN_0030f0ec();
      FUN_002d44a4(uVar4,piVar12,param_2,0);
    }
    if (*piVar12 != 0) {
      FUN_004bde38(*piVar12,param_3);
    }
    fVar2 = DAT_0036ef00;
    uVar4 = DAT_0036eefc;
    iVar10 = DAT_0036eef8;
    puVar5 = (undefined4 *)(DAT_0036eef8 + param_1 * 0x50);
    *puVar5 = DAT_0036eefc;
    puVar5[1] = uVar4;
    puVar5[2] = fVar2;
    puVar5[3] = 0;
    puVar5[4] = uVar4;
    puVar5[5] = uVar4;
    puVar5[6] = fVar2;
    puVar5[7] = 0;
    puVar5[8] = uVar4;
    puVar5[9] = uVar4;
    puVar5[10] = fVar2;
    puVar5[0xb] = 0;
    puVar5[0xc] = uVar4;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = fVar2;
    puVar5[0xf] = 0;
    puVar5[0x10] = uVar4;
    puVar5[0x11] = uVar4;
    puVar5[0x12] = fVar2;
    puVar5[0x13] = 0;
    puVar5 = (undefined4 *)(iVar10 + 0x1c0 + param_1 * 0x10);
    *puVar5 = uVar4;
    puVar5[1] = uVar4;
    puVar5[2] = fVar2;
    puVar5[3] = 0;
    puVar5 = (undefined4 *)(iVar10 + 0x200 + param_1 * 0x10);
    *puVar5 = uVar4;
    puVar5[1] = uVar4;
    puVar5[2] = fVar2;
    puVar5[3] = 0;
    iVar13 = iVar10 + 0x140 + param_1 * 0x20;
    FUN_0030ee14(&local_30,piVar12);
    puVar6 = (undefined *)(iVar13 + -2);
    puVar8 = (undefined *)(iVar13 + -1);
    iVar10 = 8;
    do {
      puVar6[2] = 0x7f;
      puVar8[2] = 0x7f;
      puVar6 = puVar6 + 4;
      *puVar6 = 0x7f;
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + 4;
      *puVar8 = 0x7f;
    } while (iVar10 != 0);
    iVar10 = FUN_0030f0ec();
    uVar7 = FUN_00481a68(*(undefined4 *)(iVar10 + 4),param_2);
    fVar3 = DAT_0036ef04;
    if (uVar7 != 0) {
      if ((uVar7 & 0x7f0000) != 0) {
        *(char *)(iVar13 + ((uVar7 & 0xf000000) >> 0x17) + 1) = (char)((uVar7 & 0x7f0000) >> 0x10);
      }
      if ((uVar7 & 0x7f) != 0) {
        *(char *)(iVar13 + ((uVar7 & 0xf00) >> 7) + 1) = (char)(uVar7 & 0x7f);
      }
      if (pcVar1[1] != '\0') {
        uVar7 = 0;
        do {
          iVar10 = local_30;
          if (local_30 != 0) {
            iVar10 = 1;
          }
          fVar14 = (float)VectorUnsignedToFloat
                                    ((uint)*(byte *)(iVar13 + uVar7 * 2 + 1),
                                     (byte)(in_fpscr >> 0x15) & 3);
          iVar9 = iVar10;
          if (iVar10 != 0) {
            iVar9 = 1 << (uVar7 & 0xff);
          }
          if (iVar10 != 0) {
            FUN_0030ed80(fVar14 * fVar3,local_30,iVar9);
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x10);
      }
    }
    if (param_2 == DAT_0036ef08 && param_1 == 0) {
      FUN_0030ee14(&local_34,iVar11);
      uVar7 = 0;
      do {
        if ((1 << (uVar7 & 0xff) & 3U) != 0) {
          puVar6 = (undefined *)(iVar13 + uVar7 * 2);
          *puVar6 = 0;
          fVar14 = fVar2;
          if (pcVar1[1] != '\0') {
            fVar14 = (float)VectorUnsignedToFloat
                                      ((uint)(byte)puVar6[1],(byte)(in_fpscr >> 0x15) & 3);
            fVar14 = fVar14 * fVar3 * fVar2;
          }
          iVar11 = local_34;
          if (local_34 != 0) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            FUN_0030ed80(fVar14);
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x10);
      FUN_0030ede0(&local_34);
    }
    iVar11 = DAT_0036ef0c;
    pcVar1[2] = '\0';
    if ((uint)(iVar11 + param_2) < 4) {
      *(undefined4 *)(pcVar1 + 0xc) = 0;
    }
    if ((uint)(iVar11 + param_2) < 4) {
      pcVar1[2] = '\x01';
    }
    FUN_0030ede0(&local_30);
  }
  return;
}

