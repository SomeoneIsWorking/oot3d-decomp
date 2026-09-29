// OoT3D decomp @ 00466a1c  name=FUN_00466a1c  size=616

void FUN_00466a1c(int param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  fVar9 = DAT_00466c88;
  fVar2 = DAT_00466c84;
  uVar7 = 0;
  do {
    iVar6 = param_1 + uVar7 * 0x10;
    bVar1 = false;
    iVar4 = *(int *)(iVar6 + 0x50);
    if (iVar4 < *(int *)(iVar6 + 0x4c)) {
      if (iVar4 < *(int *)(iVar6 + 0x4c)) {
        *(int *)(iVar6 + 0x50) = iVar4 + 1;
      }
      bVar1 = true;
    }
    iVar4 = *(int *)(iVar6 + 0x30);
    iVar5 = *(int *)(iVar6 + 0x2c);
    if (iVar4 < iVar5) {
      if (iVar4 < iVar5) {
        *(int *)(iVar6 + 0x30) = iVar4 + 1;
      }
      if (iVar5 <= *(int *)(iVar6 + 0x30)) {
        FUN_00309d80(param_1,uVar7 & 0xff);
      }
LAB_00466acc:
      if (*(int *)(iVar6 + 0x50) < *(int *)(iVar6 + 0x4c)) {
        fVar8 = (float)VectorSignedToFloat(*(int *)(iVar6 + 0x50),(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorSignedToFloat(*(int *)(iVar6 + 0x4c),(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = ((*(float *)(iVar6 + 0x48) - *(float *)(iVar6 + 0x44)) * fVar8) / fVar10 +
                *(float *)(iVar6 + 0x44);
      }
      else {
        fVar8 = *(float *)(iVar6 + 0x48);
      }
      fVar10 = fVar9;
      if (((int)fVar8 < 0x3f800001) &&
         (in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= fVar8) << 0x1d, fVar10 = fVar8,
         !SUB41(in_fpscr >> 0x1d,0))) {
        fVar10 = fVar2;
      }
      if (*(int *)(iVar6 + 0x30) < *(int *)(iVar6 + 0x2c)) {
        fVar8 = (float)VectorSignedToFloat(*(int *)(iVar6 + 0x30),(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = (float)VectorSignedToFloat(*(int *)(iVar6 + 0x2c),(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = ((*(float *)(iVar6 + 0x28) - *(float *)(iVar6 + 0x24)) * fVar8) / fVar11 +
                *(float *)(iVar6 + 0x24);
      }
      else {
        fVar8 = *(float *)(iVar6 + 0x28);
      }
      fVar11 = fVar9;
      if (((int)fVar8 < 0x3f800001) &&
         (in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= fVar8) << 0x1d, fVar11 = fVar8,
         !SUB41(in_fpscr >> 0x1d,0))) {
        fVar11 = fVar2;
      }
      FUN_002d2ee4(fVar11 * fVar10 * fVar9,(int)(char)uVar7);
    }
    else if (bVar1) goto LAB_00466acc;
    uVar7 = uVar7 + 1;
    if (1 < (int)uVar7) {
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        uVar3 = FUN_0030c6e0();
        FUN_002d2e84(uVar3,0x40);
      }
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        uVar3 = FUN_0030c6e0();
        FUN_002d2e84(uVar3,0x40);
      }
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)) {
        fVar8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = ((*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)) * fVar8) / fVar10 +
                *(float *)(param_1 + 0x14);
      }
      else {
        fVar8 = *(float *)(param_1 + 0x18);
      }
      fVar8 = fVar8 * fVar9;
      if ((fVar8 <= fVar9) && (fVar9 = fVar8, fVar8 < fVar2)) {
        fVar9 = fVar2;
      }
      FUN_002ea038(fVar9);
      return;
    }
  } while( true );
}
