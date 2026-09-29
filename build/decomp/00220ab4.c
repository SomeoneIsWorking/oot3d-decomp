// OoT3D decomp @ 00220ab4  name=FUN_00220ab4  size=732

void FUN_00220ab4(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
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
  float local_54 [3];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];

  fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  FUN_003510b0(param_1,DAT_00220d90);
  FUN_0037572c(DAT_00220d94,param_1);
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  if (*(short *)(param_2 + 0x104) == 0x60) {
    if ((*(ushort *)(param_1 + 0x1c) & 0xf) == 3) {
      FUN_00372f38(param_1,param_2,param_1 + 0x300,0x11,param_1 + 0x304,0x10,0);
    }
    else {
      FUN_00372f38(param_1,param_2,param_1 + 0x300,0xf,param_1 + 0x304,0xe,0);
    }
  }
  else {
    FUN_00372f38(param_1,param_2,param_1 + 0x300,7,param_1 + 0x304,6,0);
  }
  iVar2 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x304);
    if ((*(byte *)(param_1 + 0x2f6) & 2) != 0) {
      FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
      *(byte *)(param_1 + 0x2f6) = *(byte *)(param_1 + 0x2f6) & 0xfd;
    }
    if ((*(byte *)(param_1 + 0x2f6) & 1) != 0) {
      FUN_0034f6e8(param_2,param_1 + 0x1bc);
      *(byte *)(param_1 + 0x2f6) = *(byte *)(param_1 + 0x2f6) & 0xfe;
    }
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    return;
  }
  FUN_003532e8(param_1,0);
  uVar3 = FUN_00353fd4(param_1,param_2,0);
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(byte *)(param_1 + 0x2f6) = *(byte *)(param_1 + 0x2f6) | 2;
  FUN_0034f910(param_2,param_1 + 0x1bc);
  FUN_0034f760(param_2,param_1 + 0x1bc,param_1,DAT_00220d98,param_1 + 0x1dc);
  fVar1 = DAT_00220d9c;
  iVar2 = DAT_00220d98;
  iVar7 = 0;
  do {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      iVar6 = *(int *)(iVar2 + 0xc) + iVar7 * 0x3c;
      fVar10 = *(float *)(iVar4 * 0xc + 0x18 + iVar6);
      fVar11 = *(float *)(iVar4 * 0xc + 0x1c + iVar6);
      fVar12 = *(float *)(iVar6 + iVar4 * 0xc + 0x20) + fVar1;
      fVar13 = fVar12 * fVar8 + fVar10 * fVar9;
      fVar10 = fVar12 * fVar9 - fVar10 * fVar8;
      local_54[iVar4 * 3] = fVar13;
      local_54[iVar4 * 3 + 1] = fVar11;
      *(float *)(auStack_48 + iVar4 * 0xc + -4) = fVar10;
      local_54[iVar4 * 3] = fVar13 + *(float *)(param_1 + 0x28);
      local_54[iVar4 * 3 + 1] = fVar11 + *(float *)(param_1 + 0x2c);
      *(float *)(auStack_48 + iVar4 * 0xc + -4) = fVar10 + *(float *)(param_1 + 0x30);
      iVar4 = iVar5;
    } while (iVar5 < 3);
    FUN_00362434(param_1 + 0x1bc,iVar7,local_54,auStack_48,auStack_3c);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  *(byte *)(param_1 + 0x2f6) = *(byte *)(param_1 + 0x2f6) | 1;
  *(undefined4 *)(param_1 + 0x2f0) = DAT_00220da0;
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x300);
  return;
}
