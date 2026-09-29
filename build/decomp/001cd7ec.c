// OoT3D decomp @ 001cd7ec  name=FUN_001cd7ec  size=340

void FUN_001cd7ec(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;

  iVar8 = *(int *)(DAT_001cd964 + param_2);
  sVar5 = *(short *)(param_1 + 0x1c4) + 1;
  *(short *)(param_1 + 0x1c4) = sVar5;
  if (5 < sVar5) {
    sVar5 = 5;
  }
  *(short *)(param_1 + 0x1c4) = sVar5;
  iVar6 = FUN_00372aa8(param_1 + 0x1c6,600);
  fVar3 = DAT_001cd974;
  iVar2 = DAT_001cd970;
  iVar9 = (int)(short)(*(short *)(param_1 + 0x1c6) * *(short *)(param_1 + 0x1c2));
  fVar13 = (float)VectorSignedToFloat(*(short *)(param_1 + 0x1c8) + iVar9,
                                      (byte)(in_fpscr >> 0x15) & 3);
  sVar5 = (short)(int)(fVar13 * DAT_001cd968 * DAT_001cd96c);
  *(short *)(param_1 + 0xbe) = sVar5;
  bVar11 = false;
  bVar12 = (*(uint *)(iVar8 + 0x1714) & 0x10) == 0;
  bVar10 = false;
  if (!bVar12) {
    fVar13 = *(float *)(iVar2 + 8);
    bVar11 = fVar13 < fVar3;
    bVar12 = fVar13 == fVar3;
    bVar10 = NAN(fVar13) || NAN(fVar3);
  }
  if (bVar12 || bVar11 != bVar10) {
    *(float *)(iVar2 + 8) = fVar3;
  }
  else {
    fVar13 = (float)FUN_002cfca0((int)(short)(sVar5 - *(short *)(param_1 + 0x1ca)));
    *(float *)(iVar8 + 0x28) = *(float *)(param_1 + 8) + *(float *)(iVar2 + 8) * fVar13;
    fVar13 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) -
                                             *(short *)(param_1 + 0x1ca)));
    *(float *)(iVar8 + 0x30) = *(float *)(param_1 + 0x10) + *(float *)(iVar2 + 8) * fVar13;
  }
  *(undefined2 *)(iVar2 + 4) = *(undefined2 *)(param_1 + 0xbe);
  iVar2 = DAT_001cd978;
  if (iVar6 != 0) {
    *(uint *)(iVar8 + 0x1714) = *(uint *)(iVar8 + 0x1714) & 0xffffffef;
    *(float *)(param_1 + 0x1a8) = fVar3;
    uVar7 = *(short *)(param_1 + 0x1c8) + iVar9;
    lVar1 = (longlong)(int)uVar7 * (longlong)iVar2 + ((ulonglong)uVar7 << 0x20);
    *(short *)(param_1 + 0x1c8) =
         (short)uVar7 + ((short)(int)(lVar1 >> 0x2b) - (short)(lVar1 >> 0x3f)) * -0xe10;
    *(undefined2 *)(param_1 + 0x1c4) = 0;
    *(undefined2 *)(param_1 + 0x1c6) = 0;
    *(undefined2 *)(param_1 + 0x1c2) = 8;
    *(undefined4 *)(param_1 + 0x1bc) = uRam001cd97c;
  }
  uVar4 = uRam001cd980;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  return;
}
