// OoT3D decomp @ 00371808  name=FUN_00371808  size=720

int FUN_00371808(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  int iVar16;
  
  if (param_5 == -1) {
    param_5 = (int)*(short *)(param_1 + 0xa64);
  }
  iVar3 = param_1;
  iVar16 = param_3;
  iVar2 = FUN_00367d74(param_1);
  if (iVar2 != -1) {
    iVar9 = param_1 + param_5 * 4;
    uVar8 = 7;
    sVar5 = *(short *)(*(int *)(iVar9 + 0xa54) + 0x196);
    if (sVar5 < 1) {
      FUN_0034be04(2);
    }
    else {
      uVar8 = 1;
      *(short *)(*(int *)(param_1 + sVar5 * 4 + 0xa54) + 0x1aa) = (short)iVar2;
      *(short *)(*(int *)(param_1 + iVar2 * 4 + 0xa54) + 0x196) = sVar5;
    }
    fVar14 = DAT_00371adc;
    fVar1 = DAT_00371ad8;
    iVar7 = param_1 + iVar2 * 4;
    fVar15 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(*(int *)(iVar7 + 0xa54) + 0x1aa) = (short)param_5;
    *(short *)(*(int *)(iVar9 + 0xa54) + 0x196) = (short)iVar2;
    iVar9 = *(int *)(iVar7 + 0xa54);
    if (param_3 < 1) {
      fVar14 = fVar15 * fVar1 * fVar14 - fVar14;
    }
    else {
      fVar14 = fVar14 + fVar15 * fVar1 * fVar14;
    }
    *(short *)(iVar9 + 0x1a8) = (short)(int)fVar14;
    *(undefined4 *)(iVar9 + 0xf0) = param_4;
    uVar10 = *(undefined4 *)(param_1 + 0x1c8);
    uVar12 = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)(iVar9 + 0x80) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(iVar9 + 0x84) = uVar10;
    *(undefined4 *)(iVar9 + 0x88) = uVar12;
    uVar10 = *(undefined4 *)(param_1 + 0x1bc);
    uVar12 = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(iVar9 + 0x8c) = *(undefined4 *)(param_1 + 0x1b8);
    *(undefined4 *)(iVar9 + 0x90) = uVar10;
    *(undefined4 *)(iVar9 + 0x94) = uVar12;
    *(undefined4 *)(iVar9 + 0x144) = *(undefined4 *)(param_1 + 0x198);
    *(short *)(iVar9 + 0x1b0) = (short)param_2;
    if (param_5 == 0) {
      FUN_00320d7c(param_1,0,3);
    }
    else {
      FUN_00320d7c(param_1,param_5,1);
    }
    FUN_00499194(param_1,iVar2,param_2,param_4,param_3,iVar3,param_2,iVar16);
    FUN_00320d7c(param_1,iVar2,uVar8);
    iVar16 = DAT_00371ae4;
    sVar5 = *(short *)(*(int *)(iVar7 + 0xa54) + DAT_00371ae0);
    iVar3 = iVar2;
    while (iVar9 = (int)sVar5, 0 < iVar9) {
      iVar4 = *(int *)(param_1 + iVar9 * 4 + 0xa54);
      iVar6 = (int)*(short *)(*(int *)(iVar7 + 0xa54) + 0x1b0) * (int)(short)DAT_00371ae8;
      iVar11 = (int)*(short *)(iVar4 + 0x1b0) * (int)(short)DAT_00371ae8;
      if ((iVar11 >> 0x13) - (iVar11 >> 0x1f) < (iVar6 >> 0x13) - (iVar6 >> 0x1f)) {
        if (*(short *)(iVar4 + 0x1b0) == DAT_00371aec) {
          iVar3 = iVar9;
          if (iVar9 == -1) {
            iVar3 = (int)*(short *)(param_1 + 0xa64);
          }
          iVar3 = *(int *)(param_1 + iVar3 * 4 + 0xa54);
          if (iVar3 != 0) {
            if (*(short *)(iVar3 + 0x1b0) == DAT_00371aec) {
              *(undefined2 *)(iVar3 + 0x1a8) = 5;
            }
            else {
              *(undefined2 *)(iVar3 + 0x1a8) = 0;
            }
          }
        }
        else {
          iVar6 = *(int *)(*(int *)(iVar4 + 0xd4) + iVar16 + *(short *)(iVar4 + 0x196) * 4);
          if (*(short *)(iVar6 + 0x1aa) == *(short *)(iVar4 + 0x1ac)) {
            *(undefined2 *)(iVar6 + 0x1aa) = *(undefined2 *)(iVar4 + 0x1aa);
          }
          sVar5 = *(short *)(iVar4 + 0x1ac);
          iVar6 = *(int *)(*(int *)(iVar4 + 0xd4) + iVar16 + *(short *)(iVar4 + 0x1aa) * 4);
          if (*(short *)(iVar6 + 0x196) == sVar5) {
            *(undefined2 *)(iVar6 + 0x196) = *(undefined2 *)(iVar4 + 0x196);
          }
          bVar13 = *(short *)(param_1 + 0xa64) == iVar9;
          if (bVar13) {
            sVar5 = *(short *)(iVar4 + 0x1aa);
          }
          *(undefined2 *)(iVar4 + 0x1aa) = 0;
          *(undefined2 *)(iVar4 + 0x196) = 0;
          *(undefined2 *)(iVar4 + 0x1a8) = 0xffff;
          if (!bVar13) {
            sVar5 = -1;
          }
          FUN_0036963c(*(undefined4 *)(iVar4 + 0xd4),(int)*(short *)(iVar4 + 0x1ac));
          iVar9 = iVar3;
          if (sVar5 != -1) {
            FUN_00320d7c(param_1);
          }
        }
      }
      iVar3 = iVar9;
      sVar5 = *(short *)(*(int *)(param_1 + iVar9 * 4 + 0xa54) + DAT_00371ae0);
    }
  }
  return iVar2;
}

