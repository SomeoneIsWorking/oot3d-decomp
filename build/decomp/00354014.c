// OoT3D decomp @ 00354014  name=FUN_00354014  size=304

void FUN_00354014(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;

  fVar1 = DAT_00354204;
  iVar5 = *(int *)(param_1 + 0xf08);
  iVar2 = param_1 + param_2 * 0x2c;
  pfVar8 = (float *)(iVar2 + 0x12d4);
  if (param_2 < 0xb) {
    pfVar3 = (float *)(param_2 * 0x50 + 0x38 + iVar5);
    *pfVar8 = *pfVar3;
    *(float *)(iVar2 + 0x12d8) = pfVar3[1];
    *(float *)(iVar2 + 0x12dc) = pfVar3[2];
    if (param_2 == 0) {
      *pfVar8 = *pfVar8 - fVar1;
      *(float *)(iVar2 + 0x12d8) = *(float *)(iVar2 + 0x12d8) - fVar1;
      *(float *)(iVar2 + 0x12dc) = *(float *)(iVar2 + 0x12dc) - fVar1;
    }
  }
  else {
    uVar4 = param_2 - 0xb;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 1;
    }
    if ((uVar4 & 2) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 1;
    }
    fVar9 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    if ((uVar4 & 4) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 1;
    }
    fVar10 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar8 = *(float *)(iVar5 + 0x38) + fVar9 * DAT_00354204;
    fVar9 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar2 + 0x12d8) = *(float *)(iVar5 + 0x3c) + fVar10 * fVar1;
    *(float *)(iVar2 + 0x12dc) = *(float *)(iVar5 + 0x40) + fVar9 * fVar1;
  }
  *pfVar8 = *pfVar8 - *(float *)(param_1 + 0x28);
  *(float *)(iVar2 + 0x12d8) = *(float *)(iVar2 + 0x12d8) - *(float *)(param_1 + 0x2c);
  *(float *)(iVar2 + 0x12dc) = *(float *)(iVar2 + 0x12dc) - *(float *)(param_1 + 0x30);
  *(undefined2 *)(iVar2 + 0x12f6) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
