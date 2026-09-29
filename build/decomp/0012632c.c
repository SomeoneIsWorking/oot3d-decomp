// OoT3D decomp @ 0012632c  name=FUN_0012632c  size=548

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0012632c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  iVar7 = (int)*(short *)(param_1 + 0x1b0);
  iVar5 = *(int *)(DAT_0012642c + param_2);
  iVar2 = 0;
  uVar4 = 1;
  if (0 < iVar7) {
    do {
      if ((((int)(short)*(ushort *)(param_1 + 0x1b6) & uVar4) == 0) &&
         (pfVar6 = (float *)(DAT_00126430 + iVar2 * 0xc),
         fVar12 = *(float *)(iVar5 + 0x28) - *pfVar6, fVar10 = *(float *)(iVar5 + 0x2c) - pfVar6[1],
         fVar11 = *(float *)(iVar5 + 0x30) - pfVar6[2],
         (int)SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11) < DAT_00126434)) {
        *(ushort *)(param_1 + 0x1b6) = *(ushort *)(param_1 + 0x1b6) | (ushort)uVar4;
        *(short *)(param_1 + 0x1b8) = *(short *)(param_1 + 0x1b8) + 1;
        *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1c2) + 0x51;
        return;
      }
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 << 1;
    } while (iVar2 < iVar7);
  }
  if (*(short *)(param_1 + 0x1b4) == 1) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  if (*(short *)(param_1 + 0x1b8) != iVar7) {
    return;
  }
  if (-1 < *(short *)(param_1 + 0x1ba)) {
    FUN_00375c10(param_2);
  }
  uVar1 = (ushort)*(byte *)(DAT_00362dd4 + 0xe);
  bVar8 = uVar1 == 1;
  if (bVar8) {
    uVar1 = *(ushort *)(param_2 + 0x104);
  }
  bVar9 = bVar8 && uVar1 == 5;
  if (bVar8 && uVar1 == 5) {
    bVar9 = *(char *)(param_1 + 3) == '\x13';
  }
  if (!bVar9) {
    FUN_0037547c(DAT_00362de0,0,4,DAT_00362ddc);
  }
  if (*(short *)(param_1 + 0x1b2) == 0) {
    *(undefined2 *)(param_1 + 0x1b2) = 1;
  }
  iVar5 = DAT_00362de4;
  for (iVar2 = (int)*(short *)(param_1 + 0x1b2); 0 < iVar2; iVar2 = iVar2 + -1) {
    iVar7 = (int)*(short *)(param_1 + 0x1ae);
    if (iVar7 < 0xc) {
      puVar3 = (ushort *)(iVar5 + iVar7 * 2);
      if (iVar7 == 0xb) {
        FUN_0036df58(param_2,param_1 + 0x28,(int)(short)*puVar3);
      }
      else {
        FUN_0036df58(param_2,param_1 + 0x28,(int)(short)(*puVar3 | 0x8000));
      }
    }
    else {
      FUN_00374444(param_2,0,param_1 + 0x28,
                   (int)(short)(*(short *)(param_1 + 0x1ae) - 0xcU | 0x8000));
    }
  }
  if (-1 < *(short *)(param_1 + 0x1ba)) {
    FUN_00375c10(param_2);
  }
  FUN_00374428(param_1);
  return;
}
