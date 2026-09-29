// OoT3D decomp @ 00228fdc  name=FUN_00228fdc  size=748

void FUN_00228fdc(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;

  FUN_003510b0(param_1,DAT_002292c8);
  FUN_00372d4c(DAT_002292d4,DAT_002292cc,param_1 + 0xbc,DAT_002292d0);
  FUN_00372f38(param_1,param_2,param_1 + 0x5f8,1,param_1 + 0x5fc,2,param_1 + 0x600,3,param_1 + 0x604
               ,4,param_1 + 0x608,5,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1d4,0,0,param_1 + 0x268,param_1 + 0x304,3);
  FUN_00350eb8(param_2,param_1 + 0x3a8);
  FUN_00350d48(param_2,param_1 + 0x3a8,param_1,DAT_002292d8,param_1 + 0x3c8);
  fVar2 = DAT_002292e0;
  iVar6 = DAT_002292dc;
  iVar8 = DAT_002292d8;
  if (*(short *)(param_1 + 0x1c) == 1) {
    *(float *)(param_1 + 0x3a0) = DAT_002292e0;
    iVar8 = *(int *)(iVar8 + 8);
    if (0 < iVar8) {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x44);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x34);
      pfVar3 = DAT_002292e4;
      do {
        fVar9 = *pfVar3;
        iVar8 = iVar8 + -1;
        pfVar3 = pfVar3 + 0xc;
        uVar10 = VectorSignedToFloat((int)(short)(int)(fVar9 * fVar2),(byte)(in_fpscr >> 0x15) & 3);
        *puVar5 = uVar10;
        *puVar7 = uVar10;
        puVar5 = puVar5 + 0x14;
        puVar7 = puVar7 + 0x14;
      } while (iVar8 != 0);
    }
    iVar8 = DAT_002292ec;
    if (*(int *)(iVar6 + 4) != 0) {
      *(undefined1 *)(DAT_002292e8 + 0x1b) = 4;
    }
    FUN_00350d20(param_1 + 0xa0,iVar8 + 0x188);
    *(undefined1 *)(param_1 + 0xb7) = 4;
    *(undefined1 *)(param_1 + 0x123) = 8;
    *(undefined1 *)(param_1 + 0x1f) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x3a0) = DAT_002292f0;
    if (0 < (int)*(uint *)(iVar8 + 8)) {
      iVar4 = *(int *)(param_1 + 0x3c4);
      puVar7 = (undefined4 *)(iVar4 + -0xc);
      puVar5 = (undefined4 *)(iVar4 + -0x1c);
      if ((*(uint *)(iVar8 + 8) & 1) != 0) {
        puVar5 = (undefined4 *)(iVar4 + 0x34);
        puVar7 = (undefined4 *)(iVar4 + 0x44);
        *puVar7 = *puVar5;
      }
      uVar10 = puVar5[0x14];
      for (iVar8 = *(int *)(iVar8 + 8) >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        uVar11 = puVar5[0x28];
        puVar7[0x14] = uVar10;
        uVar10 = puVar5[0x3c];
        puVar7[0x28] = uVar11;
        puVar5 = puVar5 + 0x28;
        puVar7 = puVar7 + 0x28;
      }
    }
    iVar8 = DAT_002292ec;
    if (*(int *)(iVar6 + 4) != 0) {
      *(undefined1 *)(DAT_002292f4 + 0x1b) = 4;
    }
    FUN_00350d20(param_1 + 0xa0,iVar8 + 0x168);
    *(undefined1 *)(param_1 + 0x123) = 7;
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  fVar2 = DAT_002292fc;
  uVar1 = (undefined2)DAT_002292f8;
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  *(undefined2 *)(param_1 + 0x266) = uVar1;
  *(undefined2 *)(param_1 + 0x264) = uVar1;
  *(undefined2 *)(param_1 + 0x262) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3a0) * fVar2;
  FUN_0037572c(*(float *)(param_1 + 0x3a0) * DAT_00229300,param_1);
  *(undefined1 *)(param_1 + 0x3bc) = 0xc;
  fVar2 = DAT_00229304;
  *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) | 4;
  *(undefined2 *)(param_1 + 0x25e) = 0x44;
  iVar8 = 1;
  do {
    iVar6 = *(int *)(param_1 + 0x3c4) + iVar8 * 0x50;
    iVar8 = iVar8 + 1;
    *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(iVar6 + 0x3c) = *(float *)(param_1 + 0x2c) - fVar2;
    *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  } while (iVar8 < 7);
  *(undefined4 *)(param_1 + 600) = DAT_00229308;
  *(undefined2 *)(param_1 + 0x25e) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  return;
}
