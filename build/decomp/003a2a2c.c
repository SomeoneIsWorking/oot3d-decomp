// OoT3D decomp @ 003a2a2c  name=FUN_003a2a2c  size=576

void FUN_003a2a2c(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;

  iVar4 = 0;
  iVar3 = FUN_0037571c(param_2);
  fVar2 = DAT_003a2c6c;
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_2 + 0x22e8);
  }
  bVar1 = true;
  if (iVar4 != 0) {
    fVar6 = DAT_003a2c6c;
    if ((uint)*(ushort *)(param_2 + 0x22b8) < (uint)*(ushort *)(iVar4 + 4)) {
      iVar3 = (uint)*(ushort *)(iVar4 + 4) - (uint)*(ushort *)(iVar4 + 2);
      if (0 < iVar3) {
        fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = (float)VectorSignedToFloat((uint)*(ushort *)(param_2 + 0x22b8) -
                                           (uint)*(ushort *)(iVar4 + 2),(byte)(in_fpscr >> 0x15) & 3
                                          );
        fVar6 = (float)FUN_00338f60((int)(short)(int)((fVar7 / fVar6) * DAT_003a2c70));
        fVar6 = DAT_003a2c78 + fVar6 * DAT_003a2c74;
      }
    }
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x28) = fVar7 + (fVar8 - fVar7) * fVar6;
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x2c) = fVar7 + (fVar8 - fVar7) * fVar6;
    fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x30) = fVar7 + (fVar8 - fVar7) * fVar6;
  }
  uVar9 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a2c7c;
  FUN_00376340(DAT_003a2c88,DAT_003a2c84,DAT_003a2c80,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar9;
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_0031cddc(param_1,param_2);
  psVar5 = (short *)0x0;
  iVar3 = FUN_0037571c(param_2);
  if (iVar3 != 0) {
    psVar5 = *(short **)(param_2 + 0x22e8);
  }
  if ((psVar5 == (short *)0x0) || (*psVar5 != 6)) {
    bVar1 = false;
  }
  if (bVar1) {
    uVar9 = FUN_0036ae14(param_1 + 0x1a4,0xe);
    iVar3 = *(int *)(param_1 + 0x21c);
    uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar3 + 0x2c);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x20c);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x210);
    if (*(float *)(param_1 + 0x20c) < *(float *)(*(int *)(param_1 + 0x21c) + 0x1c)) {
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
      FUN_003fd1b8(fVar2,param_2,param_1,param_1 + 0x1a4);
    }
    FUN_00353020(fVar2,DAT_003a2c90,uVar9,DAT_003a2c8c,param_1 + 0x1a4,DAT_003a2c94,2);
    *(undefined4 *)(param_1 + 0xbbc) = 4;
  }
  return;
}
