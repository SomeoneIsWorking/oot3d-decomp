// OoT3D decomp @ 0032cacc  name=FUN_0032cacc  size=356

void FUN_0032cacc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;

  iVar1 = DAT_0032cc48;
  iVar5 = *(int *)(DAT_0032cc30 + 0x4e8);
  bVar6 = iVar5 == 4;
  if (bVar6) {
    iVar5 = (int)*(short *)(param_1 + 0x104);
  }
  if (bVar6 && iVar5 == 0x5c) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032cc38 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    if (((int)(DAT_0032cc3c / fVar7 + DAT_0032cc40) < (int)(uint)*(ushort *)(DAT_0032cc34 + param_1)
        ) && (fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032cc38 + 0x110),
                                                 (byte)(in_fpscr >> 0x15) & 3),
             (int)(uint)*(ushort *)(DAT_0032cc34 + param_1) <
             (int)(DAT_0032cc44 / fVar7 + DAT_0032cc40))) {
      if (((*(uint *)(DAT_0032cc48 + 8) & 1) == 0) &&
         (iVar5 = FUN_003679b4(DAT_0032cc48 + 8), puVar3 = DAT_0032cc50, uVar2 = DAT_0032cc4c,
         iVar5 != 0)) {
        *DAT_0032cc50 = DAT_0032cc4c;
        puVar3[1] = uVar2;
        puVar3[2] = uVar2;
      }
      pfVar4 = DAT_0032cc54;
      if (*(int *)(iVar1 + 0xc) != 0) {
        fVar9 = *(float *)(param_1 + 0x1b8) - *DAT_0032cc54;
        fVar7 = *(float *)(param_1 + 0x1bc) - DAT_0032cc54[1];
        fVar8 = *(float *)(param_1 + 0x1c0) - DAT_0032cc54[2];
        fVar7 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) * DAT_0032cc58;
        if (0x40000000 < (int)fVar7) {
          fVar7 = DAT_0032cc5c;
        }
        FUN_0036ef10(DAT_0032cc64 + fVar7 * DAT_0032cc60,DAT_0032cc50,DAT_0032cc68);
      }
      *pfVar4 = *(float *)(param_1 + 0x1b8);
      pfVar4[1] = *(float *)(param_1 + 0x1bc);
      pfVar4[2] = *(float *)(param_1 + 0x1c0);
      *(undefined4 *)(iVar1 + 0xc) = 1;
    }
  }
  return;
}
