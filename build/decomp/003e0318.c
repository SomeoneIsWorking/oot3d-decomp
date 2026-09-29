// OoT3D decomp @ 003e0318  name=FUN_003e0318  size=248

void FUN_003e0318(int param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  iVar2 = *(int *)(param_1 + 0x1a8);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x13c) != 0) {
      if (*(short *)(iVar2 + 0x642) != 0) goto FUN_00374428;
      uVar4 = in_fpscr & 0xfffffff |
              (uint)(*(float *)(param_1 + 0x1ac) + fRam003e0410 <= *(float *)(param_1 + 0x98)) <<
              0x1d;
      if (SUB41(uVar4 >> 0x1d,0)) {
        if (*(short *)(iVar2 + 0x646) != 0) {
          *(undefined2 *)(iVar2 + 0x648) = 1;
        }
      }
      else {
        sVar1 = *(short *)(iVar2 + 0x648);
        bVar3 = sVar1 == 0;
        if (bVar3) {
          sVar1 = *(short *)(iVar2 + 0x64a);
        }
        if (bVar3 && sVar1 == 0) {
          *(undefined2 *)(iVar2 + 0x646) = 1;
          fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x92));
          fVar7 = *(float *)(param_1 + 0x98);
          fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x92));
          fVar9 = fRam003e0418;
          fVar10 = fRam003e0414;
          fVar8 = *(float *)(param_1 + 0x98);
          FUN_00373500(*(float *)(param_1 + 0x28) + -fVar5 * fVar7,fRam003e0418,fRam003e0414,
                       iVar2 + 0x28);
          fVar5 = *(float *)(param_1 + 0x30) + -fVar6 * fVar8;
          fVar6 = *(float *)(iVar2 + 0x30);
          uVar4 = uVar4 & 0xfffffff | (uint)(fVar6 == fVar5) << 0x1e;
          if (!SUB41(uVar4 >> 0x1e,0)) {
            fVar5 = fVar5 - fVar6;
            fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037358c + 0x110),
                                               (byte)(uVar4 >> 0x15) & 3);
            fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037358c + 0x110),
                                               (byte)(uVar4 >> 0x15) & 3);
            fVar10 = fVar7 * fVar10 * DAT_00373590;
            fVar9 = fVar5 * fVar8 * fVar9 * DAT_00373590;
            if ((int)ABS(fVar5) < DAT_00373594) {
              fVar9 = fVar5;
            }
            if ((fVar9 <= fVar10) && (fVar5 = -fVar10, fVar10 = fVar9, fVar9 < fVar5)) {
              fVar10 = fVar5;
            }
            *(float *)(iVar2 + 0x30) = fVar6 + fVar10;
          }
          return;
        }
      }
    }
    return;
  }
FUN_00374428:
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
