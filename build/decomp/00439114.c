// OoT3D decomp @ 00439114  name=FUN_00439114  size=340

void FUN_00439114(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float local_64;
  float local_60;
  float local_5c [16];

  iVar4 = DAT_0043927c;
  fVar3 = DAT_00439274;
  iVar2 = DAT_00439270;
  iVar8 = DAT_00439268;
  if (*(short *)(DAT_00439268 + 0xae) < 0x16) {
    iVar7 = 4;
    iVar5 = *(int *)(DAT_00439270 + *(short *)(DAT_00439268 + 0xae) * 4) + -8;
    pfVar6 = &local_64;
    do {
      iVar7 = iVar7 + -1;
      pfVar6[2] = *(float *)(iVar5 + 8) + DAT_00439274;
      pfVar6[3] = *(float *)(iVar5 + 0xc) + DAT_00439278;
      pfVar6[4] = *(float *)(iVar5 + 0x10) + DAT_00439274;
      pfVar1 = (float *)(iVar5 + 0x14);
      iVar5 = iVar5 + 0x10;
      pfVar6[5] = *pfVar1 + DAT_00439278;
      pfVar6 = pfVar6 + 4;
    } while (iVar7 != 0);
    FUN_002fc534(*(undefined4 *)(param_1 + 8),local_5c,
                 *(undefined4 *)(DAT_0043927c + *(short *)(DAT_00439268 + 0xae) * 4),8,0);
    if (*(char *)(DAT_00439280 + 0xe) == '\x01') {
      pfVar6 = *(float **)(iVar2 + *(short *)(iVar8 + 0xae) * 4);
      fVar9 = *pfVar6;
      local_64 = (DAT_00439288 - (fVar9 + fVar3)) * DAT_0043928c -
                 ((pfVar6[4] + *(float *)(*(int *)(iVar4 + *(short *)(iVar8 + 0xae) * 4) + 0x10)) -
                 fVar9);
    }
    else {
      local_64 = DAT_00439284;
    }
    local_60 = DAT_00439284;
    iVar8 = 0;
    do {
      FUN_002f9430(*(undefined4 *)(param_1 + 8),&local_64,1,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 8);
    return;
  }
  FUN_002fc534(*(undefined4 *)(param_1 + 8),DAT_0043926c + -0x40,DAT_0043926c,8,0);
  return;
}
