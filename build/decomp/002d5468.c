// OoT3D decomp @ 002d5468  name=FUN_002d5468  size=620

void FUN_002d5468(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  
  fVar3 = UNK_002d56d4;
  iVar7 = 0;
  fVar12 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  if (*(uint *)(param_1 + 0x1d4) <= param_2) {
    param_2 = 0;
  }
  if (*(uint *)(param_1 + 0x1d4) <= param_3) {
    param_3 = 0;
  }
  fVar12 = fVar12 * UNK_002d56d8;
  *(float *)(param_1 + 0x1ec) = UNK_002d56d4;
  uVar4 = UNK_002d56dc;
  uVar1 = param_2 >> 2;
  uVar2 = param_3 >> 2;
  uVar8 = param_3 & 3;
  *(float *)(param_1 + 0x1f8) = fVar3;
  do {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(param_1 + iVar7 * 0x10 + iVar5 * 4 + 0x44);
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar6 + 0xc);
        if (param_5 == 0) {
          *(float *)(iVar6 + 0xc) = fVar3;
        }
        else {
          *(undefined4 *)(iVar6 + 0xc) = uVar4;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  bVar10 = false;
  if (*(float *)(param_1 + 0x1fc) == fVar12) {
    bVar10 = *(ushort *)(param_1 + 0x200) == param_2;
  }
  bVar11 = false;
  if (bVar10) {
    bVar11 = *(ushort *)(param_1 + 0x202) == param_3;
  }
  if (!bVar11) {
    *(float *)(param_1 + 0x1fc) = fVar12;
    *(ushort *)(param_1 + 0x200) = (ushort)param_2;
    *(short *)(param_1 + 0x202) = (short)param_3;
    if (uVar1 == uVar2) {
      uVar9 = 0;
      if (*(int *)(param_1 + 0x1dc) != 0) {
        do {
          iVar5 = param_1 + uVar9 * 0x10 + uVar1 * 4;
          iVar7 = param_1 + uVar9 * 0x40;
          FUN_002d4ad4(fVar12,param_1,*(undefined4 *)(iVar7 + param_2 * 4 + 0x114),
                       *(undefined4 *)(iVar7 + param_3 * 4 + 0x114),*(undefined4 *)(iVar5 + 0x84),
                       *(undefined4 *)(iVar5 + 0xe4),*(undefined4 *)(iVar5 + 0xb4));
          FUN_002d4a60(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0xe4),
                       *(undefined4 *)(iVar5 + 0x84));
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x1dc));
      }
      iVar7 = param_1 + uVar1 * 4;
      if (*(int *)(iVar7 + 0x54) != 0) {
        iVar5 = param_1 + param_2 * 4;
        iVar6 = *(int *)(iVar5 + 0x194);
        if (iVar6 != 0) {
          iVar5 = *(int *)(param_1 + param_3 * 4 + 0x194);
        }
        if (iVar6 == 0 || iVar5 == 0) {
          FUN_002d4a60(*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(iVar7 + 0x104),
                       *(undefined4 *)(param_1 + uVar1 * 0x10 + 0x194));
        }
        else {
          FUN_002d4ad4(fVar12,param_1,iVar6,iVar5,*(undefined4 *)(iVar7 + 0xa4),
                       *(undefined4 *)(iVar7 + 0x104),*(undefined4 *)(iVar7 + 0xd4));
          FUN_002d4a60(*(undefined4 *)(iVar7 + 0x24),*(undefined4 *)(iVar7 + 0x104),
                       *(undefined4 *)(iVar7 + 0xa4));
        }
      }
      *(undefined4 *)(param_1 + 500) = uVar4;
      if ((param_2 & 3) == 3) {
        if (uVar8 == 3) {
          *(float *)(param_1 + 0x1f0) = fVar3;
        }
        else {
          *(float *)(param_1 + 0x1f0) = fVar3 - fVar12;
        }
      }
      else if (uVar8 == 3) {
        *(float *)(param_1 + 0x1f0) = fVar12;
      }
      else {
        *(undefined4 *)(param_1 + 0x1f0) = uVar4;
      }
    }
    else {
      *(float *)(param_1 + 0x1ec) = fVar12;
      uVar9 = 0;
      if (*(int *)(param_1 + 0x1dc) != 0) {
        do {
          iVar7 = param_1 + uVar9 * 0x10 + uVar2 * 4;
          FUN_002d4a60(*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0xe4),
                       *(undefined4 *)(param_1 + uVar9 * 0x40 + param_3 * 4 + 0x114));
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x1dc));
      }
      if ((param_2 & 3) != 3) {
        *(undefined4 *)(param_1 + 0x1f0) = uVar4;
      }
      if (uVar8 == 3) {
        *(float *)(param_1 + 500) = fVar3;
      }
      else {
        *(undefined4 *)(param_1 + 500) = uVar4;
      }
      *(float *)(param_1 + 0x1f8) = fVar12;
    }
    *(uint *)(param_1 + 0x1e4) = uVar1;
    *(uint *)(param_1 + 0x1e8) = uVar2;
  }
  return;
}

