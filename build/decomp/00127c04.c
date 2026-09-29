// OoT3D decomp @ 00127c04  name=FUN_00127c04  size=1236

void FUN_00127c04(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;

  fVar12 = DAT_00127ff8;
  if (*(short *)(param_1 + 0x1aa) != 0) {
    *(short *)(param_1 + 0x1aa) = *(short *)(param_1 + 0x1aa) + -1;
  }
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1aa),(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)FUN_003727f0(fVar9 * fVar12);
  fVar2 = DAT_00128008;
  fVar13 = DAT_00128004;
  fVar1 = DAT_00128000;
  fVar9 = DAT_00127ffc;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1aa),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar11 = fVar11 * fVar12;
  if ((short)(int)(fVar10 * DAT_00127ffc) + 0x400 < 1) {
    fVar12 = (float)FUN_003727f0(fVar11);
    fVar12 = (float)VectorSignedToFloat((short)(int)(fVar12 * fVar9) + 0x400,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar13 = fVar12 * fVar2 * fVar1 - fVar13;
  }
  else {
    fVar12 = (float)FUN_003727f0(fVar11);
    fVar12 = (float)VectorSignedToFloat((short)(int)(fVar12 * fVar9) + 0x400,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar13 = fVar13 + fVar12 * fVar2 * fVar1;
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + (short)((int)fVar13 >> 1);
  if (*(short *)(param_1 + 0x1aa) == 0) {
    *(undefined2 *)(param_1 + 0x1aa) = 0x30;
  }
  fVar12 = (float)FUN_002cfca0();
  fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  iVar6 = DAT_0012800c;
  if (*(short *)(param_1 + 0x1c) == 0) {
    iVar8 = 2;
  }
  else {
    iVar8 = 4;
  }
  iVar7 = iVar8 + -2;
  do {
    iVar3 = *(int *)(iVar6 + 0xc) + iVar7 * 0x3c;
    local_60 = *(float *)(iVar3 + 0x20) * fVar12 + *(float *)(iVar3 + 0x18) * fVar9 +
               *(float *)(param_1 + 0x28);
    if (*(short *)(param_1 + 0x1c) == 0) {
      local_5c = *(float *)(iVar6 + -0xc);
    }
    else {
      local_5c = *(float *)(iVar6 + -0x10);
    }
    local_5c = *(float *)(param_1 + 0x2c) + *(float *)(iVar3 + 0x1c) + local_5c;
    local_58 = (*(float *)(param_1 + 0x30) + *(float *)(iVar3 + 0x20) * fVar9) -
               *(float *)(iVar3 + 0x18) * fVar12;
    local_54 = *(float *)(iVar3 + 0x2c) * fVar12 + *(float *)(iVar3 + 0x24) * fVar9 +
               *(float *)(param_1 + 0x28);
    if (*(short *)(param_1 + 0x1c) == 0) {
      local_50 = *(float *)(iVar6 + -0xc);
    }
    else {
      local_50 = *(float *)(iVar6 + -0x10);
    }
    local_50 = *(float *)(param_1 + 0x2c) + *(float *)(iVar3 + 0x28) + local_50;
    local_4c = (*(float *)(param_1 + 0x30) + *(float *)(iVar3 + 0x2c) * fVar9) -
               *(float *)(iVar3 + 0x24) * fVar12;
    local_48 = *(float *)(iVar3 + 0x38) * fVar12 + *(float *)(iVar3 + 0x30) * fVar9 +
               *(float *)(param_1 + 0x28);
    if (*(short *)(param_1 + 0x1c) == 0) {
      local_44 = *(float *)(iVar6 + -0xc);
    }
    else {
      local_44 = *(float *)(iVar6 + -0x10);
    }
    local_44 = *(float *)(param_1 + 0x2c) + *(float *)(iVar3 + 0x34) + local_44;
    local_40 = (*(float *)(param_1 + 0x30) + *(float *)(iVar3 + 0x38) * fVar9) -
               *(float *)(iVar3 + 0x30) * fVar12;
    FUN_00362434(param_1 + 0x20c,iVar7,&local_60,&local_54,&local_48);
    local_60 = *(float *)(param_1 + 0x28) * fVar2 - local_60;
    local_58 = *(float *)(param_1 + 0x30) * fVar2 - local_58;
    local_54 = *(float *)(param_1 + 0x28) * fVar2 - local_54;
    local_4c = *(float *)(param_1 + 0x30) * fVar2 - local_4c;
    local_48 = *(float *)(param_1 + 0x28) * fVar2 - local_48;
    local_40 = *(float *)(param_1 + 0x30) * fVar2 - local_40;
    FUN_00362434(param_1 + 0x20c,(iVar7 + 2) % 4,&local_60,&local_54,&local_48);
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar8);
  if ((*(char *)(param_1 + 0x1a9) == '\0') || (*(char *)(DAT_00128010 + param_2) != '\0')) {
    pfVar4 = (float *)(DAT_00128014 + *(short *)(param_1 + 0x1c) * 0xc);
    local_60 = pfVar4[2] * fVar12 + *pfVar4 * fVar9 + *(float *)(param_1 + 0x28);
    local_5c = *(float *)(param_1 + 0x2c) +
               *(float *)(DAT_00128014 + *(short *)(param_1 + 0x1c) * 0xc + 4);
    pfVar4 = (float *)(DAT_00128014 + *(short *)(param_1 + 0x1c) * 0xc);
    iVar6 = DAT_00128014 + -0x18;
    local_58 = (*(float *)(param_1 + 0x30) + pfVar4[2] * fVar9) - *pfVar4 * fVar12;
    pfVar4 = (float *)(iVar6 + *(short *)(param_1 + 0x1c) * 0xc);
    local_54 = pfVar4[2] * fVar12 + *pfVar4 * fVar9 + *(float *)(param_1 + 0x28);
    local_50 = *(float *)(param_1 + 0x2c) + *(float *)(iVar6 + *(short *)(param_1 + 0x1c) * 0xc + 4)
    ;
    pfVar4 = (float *)(iVar6 + *(short *)(param_1 + 0x1c) * 0xc);
    local_4c = (*(float *)(param_1 + 0x30) + pfVar4[2] * fVar9) - *pfVar4 * fVar12;
    uVar5 = FUN_00362384(*(undefined4 *)(param_1 + 0x1ac));
    FUN_003620f0(uVar5,&local_60,&local_54);
    local_60 = *(float *)(param_1 + 0x28) * fVar2 - local_60;
    local_58 = *(float *)(param_1 + 0x30) * fVar2 - local_58;
    local_54 = *(float *)(param_1 + 0x28) * fVar2 - local_54;
    local_4c = *(float *)(param_1 + 0x30) * fVar2 - local_4c;
    uVar5 = FUN_00362384(*(undefined4 *)(param_1 + 0x1b0));
    FUN_003620f0(uVar5,&local_60,&local_54);
  }
  else {
    iVar6 = FUN_00362384(*(undefined4 *)(param_1 + 0x1ac));
    *(undefined1 *)(iVar6 + 0x25e) = 0;
    iVar6 = FUN_00362384(*(undefined4 *)(param_1 + 0x1b0));
    *(undefined1 *)(iVar6 + 0x25e) = 0;
  }
  iVar6 = param_2 + 0x5c78;
  FUN_003761f0(param_2,iVar6,param_1 + 0x20c);
  FUN_003762a4(param_2,iVar6,param_1 + 0x1b4);
  FUN_00376168(param_2,iVar6,param_1 + 0x1b4);
  FUN_00373264(param_1,DAT_001280f8);
  return;
}
