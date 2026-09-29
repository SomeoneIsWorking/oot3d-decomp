// OoT3D decomp @ 0029b9e8  name=FUN_0029b9e8  size=724

void FUN_0029b9e8(int param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 local_30;

  FUN_003510b0(param_1,DAT_0029bcbc);
  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x3cc,7,param_1 + 0x3d0,7,param_1 + 0x3d4,7,param_1 + 0x3d8
               ,7,param_1 + 0x3dc,7,param_1 + 0x3e0,7,param_1 + 0x3e4,7,param_1 + 1000,7,
               param_1 + 0x3ec,7,param_1 + 0x3f0,7,param_1 + 0x3f4,7,param_1 + 0x3f8,7,
               param_1 + 0x3fc,7,param_1 + 0x400,7,param_1 + 0x404,7,param_1 + 0x408,7,
               param_1 + 0x40c,0xe,param_1 + 0x410,0x10,0);
  FUN_00350eb8(param_2,param_1 + 0x1cc);
  FUN_00350d48(param_2,param_1 + 0x1cc,param_1,DAT_0029bcc0,param_1 + 0x1ec);
  iVar3 = *(int *)(param_1 + 0x1e8);
  iVar6 = 3;
  uVar8 = *(undefined4 *)(iVar3 + 0x34);
  puVar2 = (undefined4 *)(iVar3 + -0x1c);
  puVar4 = (undefined4 *)(iVar3 + -0xc);
  do {
    uVar11 = puVar2[0x28];
    puVar4[0x14] = uVar8;
    uVar8 = puVar2[0x3c];
    iVar6 = iVar6 + -1;
    puVar4[0x28] = uVar11;
    puVar2 = puVar2 + 0x28;
    puVar4 = puVar4 + 0x28;
  } while (iVar6 != 0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(undefined2 *)(param_1 + 0x1c0) = 0x36;
    iVar3 = 0;
    do {
      sVar1 = -0x2000;
      if (iVar3 == 0) {
        sVar1 = 0x2000;
      }
      iVar6 = iVar3 * 3;
      iVar7 = (int)(short)(sVar1 + *(short *)(param_1 + 0xbe));
      iVar5 = iVar6 + 3;
      fVar9 = (float)FUN_002cfca0(iVar7);
      fVar10 = (float)FUN_00338f60(iVar7);
      do {
        iVar7 = *(int *)(param_1 + 0x1e8) + iVar6 * 0x50;
        iVar6 = iVar6 + 1;
        *(float *)(iVar7 + 0x38) =
             *(float *)(iVar7 + 0x28) * fVar10 + fVar9 * *(float *)(iVar7 + 0x30) +
             *(float *)(param_1 + 8);
        *(float *)(iVar7 + 0x3c) = *(float *)(param_1 + 0xc) + *(float *)(iVar7 + 0x2c);
        *(float *)(iVar7 + 0x40) =
             (*(float *)(param_1 + 0x10) - fVar9 * *(float *)(iVar7 + 0x28)) +
             fVar10 * *(float *)(iVar7 + 0x30);
        *(byte *)(iVar7 + 0x15) = *(byte *)(iVar7 + 0x15) | 1;
        *(byte *)(iVar7 + 0x17) = *(byte *)(iVar7 + 0x17) | 1;
      } while (iVar6 < iVar5);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    local_30 = FUN_00353fd4(param_1,param_2,0xd);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0029bcc4;
  }
  else {
    *(undefined2 *)(param_1 + 0x1c6) = 0;
    *(undefined2 *)(param_1 + 0x1c4) = 0;
    *(undefined2 *)(param_1 + 0x1c2) = 0;
    *(undefined2 *)(param_1 + 0x1c0) = 0;
    local_30 = FUN_00353fd4(param_1,param_2,0xe);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0029bcc8;
  }
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  uVar8 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_30);
  *(undefined4 *)(param_1 + 0x1a4) = uVar8;
  FUN_00350d20(param_1 + 0xa0,0,DAT_0029bccc);
  return;
}
