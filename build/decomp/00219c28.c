// OoT3D decomp @ 00219c28  name=FUN_00219c28  size=816

undefined4 FUN_00219c28(float *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  pfVar6 = param_1 + 0x29;
  pfVar7 = param_1 + 0x23;
  pfVar8 = param_1 + 0x20;
  pfVar5 = param_1 + 5;
  fVar9 = (float)FUN_00367ef0(param_1[0x36]);
  fVar13 = DAT_00219f6c;
  fVar1 = DAT_00219f68;
  fVar11 = DAT_00219f64;
  psVar4 = *(short **)
            (*(int *)(DAT_00219f58 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00219f60 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00219f60 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar10 * DAT_00219f64 * fVar9 *
             ((DAT_00219f68 + fVar14 * DAT_00219f64) -
             (DAT_00219f5c / fVar9) * fVar12 * DAT_00219f64);
  fVar10 = (float)VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar10 * fVar11;
  fVar10 = (float)VectorSignedToFloat((int)psVar4[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar10 * fVar11;
  fVar10 = (float)VectorSignedToFloat((int)psVar4[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar10;
  *(short *)(param_1 + 4) = psVar4[8];
  *(short *)(param_1 + 8) = (short)(int)(param_1[3] * fVar13);
  psVar4 = (short *)FUN_00338c5c((int)param_1[0x35] + 0xa98,(int)*(short *)(param_1 + 100),0x32);
  if (psVar4 == (short *)0x0) {
    *pfVar5 = param_1[0x23];
    param_1[6] = param_1[0x24];
    param_1[7] = param_1[0x25];
  }
  else {
    if (-1 < psVar4[8]) {
      *(undefined1 *)((int)param_1 + 0x1b6) = 0;
      fVar13 = (float)VectorSignedToFloat((int)psVar4[8],(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 * DAT_00219f70;
      param_1[0x34] = fVar13;
      if ((int)fVar13 < 0x34000001) {
        fVar13 = DAT_00219f74;
      }
      param_1[0x34] = fVar13;
    }
    fVar13 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
    *pfVar5 = fVar13;
    param_1[6] = fVar10;
    param_1[7] = fVar12;
    if (psVar4[6] != -1) {
      *(short *)(param_1 + 8) = psVar4[6];
    }
  }
  fVar13 = DAT_00219f7c;
  iVar2 = DAT_00219f78;
  if (*(short *)(param_1 + 8) < 0x169) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) * 100;
  }
  *(int *)(iVar2 + 0x14) = (int)*(short *)(param_1 + 4);
  uVar3 = DAT_00219f80;
  local_4c = fVar13;
  local_48 = *param_1 + fVar9;
  local_44 = fVar13;
  FUN_00367df4(param_1[2],param_1[2],DAT_00219f80,&local_4c,param_1 + 0x4b);
  local_40 = param_1[0x37] + param_1[0x4b];
  local_3c = param_1[0x38] + param_1[0x4c];
  local_38 = param_1[0x39] + param_1[0x4d];
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    FUN_00338c04(param_1);
    if (((uint)param_1[4] & 1) == 0) {
      *pfVar6 = *pfVar5;
      param_1[0x2a] = param_1[6];
      param_1[0x2b] = param_1[7];
      *pfVar7 = *pfVar6;
      param_1[0x24] = param_1[0x2a];
      param_1[0x25] = param_1[0x2b];
      *pfVar8 = local_40;
      param_1[0x21] = local_3c;
      param_1[0x22] = local_38;
    }
  }
  FUN_00367df4(param_1[2],param_1[2],DAT_00219f84,&local_40,pfVar8);
  FUN_00367df4(param_1[1],param_1[1],uVar3,pfVar5,pfVar6);
  *pfVar7 = *pfVar6;
  param_1[0x24] = param_1[0x2a];
  param_1[0x25] = param_1[0x2b];
  fVar9 = (float)FUN_00338a90(pfVar8,pfVar7);
  param_1[0x49] = fVar9;
  param_1[0x48] = fVar13;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 8),(byte)(in_fpscr >> 0x15) & 3);
  param_1[0x51] = fVar13 * fVar11;
  fVar11 = (float)FUN_003375bc(fVar1,param_1);
  param_1[0x52] = fVar11;
  param_1[0x4b] = param_1[0x20] - param_1[0x37];
  param_1[0x4c] = param_1[0x21] - param_1[0x38];
  param_1[0x4d] = param_1[0x22] - param_1[0x39];
  return 1;
}
