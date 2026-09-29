// OoT3D decomp @ 003c9ff0  name=FUN_003c9ff0  size=608

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003c9ff0(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  byte *pbVar5;
  uint in_fpscr;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  fVar11 = fRam003ca1b4;
  fVar10 = fRam003ca1ac;
  if (*(short *)(param_1 + 0x8e0) != 0) {
    *(short *)(param_1 + 0x8e0) = *(short *)(param_1 + 0x8e0) + -1;
  }
  fVar1 = fRam003ca1b0;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x8e0),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 * fVar10;
  if (*(short *)(param_1 + 0x8e0) < 1) {
    fVar8 = fVar8 * fRam003ca1b0 - fVar11;
  }
  else {
    fVar8 = fVar11 + fVar8 * fRam003ca1b0;
  }
  fVar8 = (float)VectorSignedToFloat((int)fVar8,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)FUN_003727f0(fVar8 * fRam003ca1b8);
  fVar8 = fVar8 * fRam003ca1bc;
  fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar8 * fVar9;
  fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar8 * fVar9;
  if (*(short *)(param_1 + 0x8e0) == 0) {
    *(undefined2 *)(param_1 + 0x8e0) = 0x3c;
  }
  fVar8 = (float)FUN_00363e64(param_1,param_1 + 8);
  sVar2 = FUN_00367358(param_1,param_1 + 8);
  *(short *)(param_1 + 0x36) = sVar2;
  FUN_00370084(param_1 + 0xbe,(int)(short)(sVar2 + -0x8000),5,0x400);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x8e2),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 * fVar10;
  if (*(short *)(param_1 + 0x8e2) < 1) {
    fVar11 = fVar9 * fVar1 - fVar11;
  }
  else {
    fVar11 = fVar11 + fVar9 * fVar1;
  }
  fVar10 = (float)VectorSignedToFloat((int)fVar11,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)FUN_003727f0(fVar10 * fRam003ca1c0);
  uVar6 = uRam003ca1cc;
  *(float *)(param_1 + 0x6c) = fRam003ca1c8 + fVar10 * fRam003ca1c4;
  FUN_00373264(param_1,uVar6);
  iVar7 = iRam003ca1d0;
  *(float *)(param_1 + 0x8f0) =
       *(float *)(param_1 + 0xc) -
       (*(float *)(param_1 + 0x8ec) * fVar8) / *(float *)(param_1 + 0x8e8);
  if ((int)fVar8 < iVar7) {
    if (*(int *)(param_1 + 0x8e4) != 0) {
      pbVar5 = (byte *)(*(int *)(iRam001810a0 + param_2) + *(short *)(param_1 + 0x1c) * 8);
      FUN_00370350(uRam001810a4,param_1 + 0x1a4,0);
      psVar3 = (short *)(*(int *)(pbVar5 + 4) + *(int *)(param_1 + 0x8e4) * 6);
      uVar6 = VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 8) = uVar6;
      uVar6 = VectorSignedToFloat((int)psVar3[1],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      uVar6 = VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      iVar7 = FUN_00363e64(param_1,param_1 + 8);
      uVar6 = uRam001810ac;
      *(int *)(param_1 + 0x8e8) = iVar7;
      if (iVar7 < 0x3f800000) {
        iVar7 = iRam001810a8;
      }
      *(int *)(param_1 + 0x8e8) = iVar7;
      *(float *)(param_1 + 0x8ec) = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x6c) = uVar6;
      uVar4 = *(int *)(param_1 + 0x8e4) + 1;
      *(uint *)(param_1 + 0x8e4) = uVar4;
      if (*pbVar5 == uVar4) {
        *(undefined4 *)(param_1 + 0x8e4) = 0;
      }
      *(undefined4 *)(param_1 + 0x8dc) = uRam001810b0;
      return;
    }
    FUN_00374a58(uRam003ca1d4,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0x6c) = uRam003ca1d8;
    *(undefined2 *)(param_1 + 0x8e0) = 0x18;
    FUN_00375bcc(param_1,uRam003ca1dc);
    *(undefined4 *)(param_1 + 0x8dc) = uRam003ca1e0;
  }
  return;
}
