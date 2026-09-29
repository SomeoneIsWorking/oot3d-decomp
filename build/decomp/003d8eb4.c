// OoT3D decomp @ 003d8eb4  name=FUN_003d8eb4  size=1336

void FUN_003d8eb4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_3c;
  float local_38;
  float local_34;

  uVar1 = DAT_003d926c;
  iVar10 = DAT_003d9268;
  if (((*(uint *)(DAT_003d9268 + 8) & 1) == 0) &&
     (iVar9 = FUN_003679b4(DAT_003d9268 + 8), puVar3 = DAT_003d9274, uVar2 = DAT_003d9270,
     iVar9 != 0)) {
    *DAT_003d9274 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if (((*(uint *)(iVar10 + 4) & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_003d9278), puVar3 = DAT_003d927c, iVar10 != 0)) {
    *DAT_003d927c = uVar1;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
  }
  fVar5 = DAT_003d928c;
  fVar4 = DAT_003d9288;
  fVar13 = DAT_003d9284;
  fVar11 = DAT_003d9280;
  sVar8 = *(short *)(param_1 + 0x8fa) + 1;
  iVar10 = (int)sVar8;
  *(short *)(param_1 + 0x8fa) = sVar8;
  fVar7 = DAT_003d9444;
  uVar1 = DAT_003d9430;
  fVar6 = DAT_003d9294;
  fVar12 = DAT_003d9290;
  if (iVar10 < 0xc) {
    if (iVar10 < 8) {
      fVar11 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar10 < 1) {
        fVar11 = fVar11 * fVar4 * fVar5 - fVar13;
      }
      else {
        fVar11 = fVar13 + fVar11 * fVar4 * fVar5;
      }
      sVar8 = (short)DAT_003d9298;
      fVar11 = (float)FUN_002cfca0((int)(short)(sVar8 + (short)(int)fVar11 * 0x1000));
      local_38 = fVar12 + fVar11 * fVar6 + *(float *)(param_1 + 0x2c);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x8fa),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (*(short *)(param_1 + 0x8fa) < 1) {
        fVar11 = fVar11 * fVar4 * fVar5 - fVar13;
      }
      else {
        fVar11 = fVar13 + fVar11 * fVar4 * fVar5;
      }
      fVar11 = (float)FUN_00338f60((int)(short)(sVar8 + (short)(int)fVar11 * 0x1000));
      sVar8 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar12 = (float)FUN_002cfca0((int)(short)(sVar8 + 0x4800));
      local_3c = *(float *)(param_1 + 0x28) + fVar11 * fVar6 * fVar12;
      sVar8 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar12 = (float)FUN_00338f60((int)(short)(sVar8 + 0x4800));
      local_34 = *(float *)(param_1 + 0x30) + fVar11 * fVar6 * fVar12;
    }
    else {
      fVar12 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)(fVar13 + fVar12 * fVar4 * fVar5) + -5,
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_38 = *(float *)(param_1 + 0x2c) + DAT_003d9290 + fVar12 * fVar11;
      sVar8 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar11 = (float)FUN_002cfca0((int)(short)(sVar8 + 0x4800));
      local_3c = *(float *)(param_1 + 0x28) + fVar11 * fVar6;
      sVar8 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
      fVar11 = (float)FUN_00338f60((int)(short)(sVar8 + 0x4800));
      local_34 = *(float *)(param_1 + 0x30) + fVar11 * fVar6;
    }
    iVar9 = (int)*(short *)(param_1 + 0x8fa);
    iVar10 = (int)((ulonglong)((longlong)DAT_003d929c * (longlong)iVar9) >> 0x20);
    if ((iVar10 - (iVar10 >> 0x1f)) * -3 + iVar9 != 0) {
      fVar11 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar9 < 1) {
        fVar11 = fVar11 * fVar4 * fVar5 - fVar13;
      }
      else {
        fVar11 = fVar13 + fVar11 * fVar4 * fVar5;
      }
      FUN_003642f4(param_2,&local_3c,DAT_003d927c + -3,DAT_003d927c,
                   (int)(short)((short)(int)fVar11 * 10 + 0x50),0,0xff,0xff,0xff,0xff,0,0,0xff,1,0xb
                   ,1);
      local_3c = *(float *)(param_1 + 0x28) * fVar4 - local_3c;
      local_34 = *(float *)(param_1 + 0x30) * fVar4 - local_34;
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x8fa),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (*(short *)(param_1 + 0x8fa) < 1) {
        fVar11 = fVar11 * fVar4 * fVar5 - fVar13;
      }
      else {
        fVar11 = fVar13 + fVar11 * fVar4 * fVar5;
      }
      FUN_003642f4(param_2,&local_3c,DAT_003d927c + -3,DAT_003d927c,
                   (int)(short)((short)(int)fVar11 * 10 + 0x50),0,0xff,0xff,0xff,0xff,0,0,0xff,1,0xb
                   ,1);
      local_3c = *(float *)(param_1 + 0x28);
      local_34 = *(float *)(param_1 + 0x30);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x8fa),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (*(short *)(param_1 + 0x8fa) < 1) {
        fVar13 = fVar11 * fVar4 * fVar5 - fVar13;
      }
      else {
        fVar13 = fVar13 + fVar11 * fVar4 * fVar5;
      }
      FUN_003642f4(param_2,&local_3c,DAT_003d927c + -3,DAT_003d927c,
                   (int)(short)((short)(int)fVar13 * 10 + 0x50),0,0xff,0xff,0xff,0xff,0,0,0xff,1,0xb
                   ,1);
    }
    if (*(short *)(param_1 + 0x8fa) == 1) {
      FUN_00375bcc(param_1,DAT_003d9424);
    }
  }
  else if (iVar10 == 0x2a) {
    *(undefined4 *)(param_1 + 0x13c) = DAT_003d9428;
    *(undefined4 *)(param_1 + 0x140) = DAT_003d942c;
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_0037572c(uVar1,param_1);
    *(undefined4 *)(param_1 + 0x70) = DAT_003d9434;
    *(undefined4 *)(param_1 + 0xc4) = DAT_003d9438;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar11;
    *(undefined2 *)(param_1 + 0xbc) = 0x8000;
    *(undefined2 *)(param_1 + 0x8fa) = 0x5a;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,8);
    *(undefined4 *)(param_1 + 0x8f4) = DAT_003d943c;
  }
  else if (0x1b < iVar10) {
    fVar11 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(0x1c - (int)(fVar13 + fVar11 * fVar4 * fVar5),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * fVar4 * fVar5 * DAT_003d9440;
    *(float *)(param_1 + 0x5c) = fVar11;
    *(float *)(param_1 + 0x58) = fVar11;
    *(float *)(param_1 + 0x54) = fVar11;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar7;
    return;
  }
  if (*(short *)(param_1 + 0x8fa) == 0x1b) {
    FUN_00375bcc(param_1,DAT_003d9448);
  }
  return;
}
