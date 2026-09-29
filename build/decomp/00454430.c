// OoT3D decomp @ 00454430  name=FUN_00454430  size=424

void FUN_00454430(uint *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  float extraout_r2;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  float fVar10;

  if (*(char *)((int)param_1 + 0x1ea) == '\x01') {
    uVar6 = *param_2;
    uVar8 = param_2[1];
    uVar3 = *param_1;
    *param_1 = uVar3 + uVar6;
    param_1[1] = param_1[1] + uVar8 + (uint)CARRY4(uVar3,uVar6);
    param_1[2] = param_1[2] + 1;
    iVar4 = FUN_00465fe0();
    param_1[3] = iVar4 + param_1[3];
    if ((char)param_1[0x6d] == '\x01') {
      uVar3 = param_2[1];
      lVar1 = (ulonglong)*param_2 * 3 +
              CONCAT44(((int)uVar3 >> 0x1f) * DAT_004545d8 +
                       (int)((ulonglong)DAT_004545d8 * (ulonglong)uVar3 >> 0x20),
                       (int)((ulonglong)DAT_004545d8 * (ulonglong)uVar3)) +
              CONCAT44(uVar3 * 3,(int)((ulonglong)DAT_004545d8 * (ulonglong)*param_2 >> 0x20));
      FUN_00332754((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
      fVar5 = (float)FUN_002dbc64();
      pfVar9 = (float *)(param_1 + 4);
      fVar5 = fVar5 * DAT_004545dc;
      fVar7 = extraout_r2;
      if ((fVar5 < DAT_004545e0) || (fVar7 = DAT_004545e4, (int)DAT_004545e4 < (int)fVar5)) {
        param_1[0x6c] = param_1[0x6c] + 1;
      }
      fVar10 = *pfVar9;
      if (*pfVar9 < fVar5) {
        fVar10 = fVar5;
      }
      *pfVar9 = fVar10;
      iVar4 = (int)fVar5;
      if (iVar4 < 0x65) {
        fVar7 = (float)((int)pfVar9[iVar4 + 2] + 1);
        pfVar9[iVar4 + 2] = fVar7;
      }
      uVar3 = param_1[0x6b] + 1;
      param_1[0x6b] = uVar3;
      param_1[5] = (uint)((float)param_1[5] + fVar5);
      uVar6 = param_1[0x7b];
      iVar4 = 0;
      if (uVar6 != 0) {
        uVar3 = param_1[0x7e];
        fVar7 = (float)param_1[0x7d];
        iVar4 = uVar3 - (int)fVar7;
      }
      if (iVar4 < 0 != (uVar6 != 0 && SBORROW4(uVar3,(int)fVar7))) {
        pfVar9 = (float *)(uVar6 + uVar3 * 8);
        FUN_0030c6e0();
        uVar2 = FUN_0046bc38();
        *(undefined1 *)(pfVar9 + 1) = uVar2;
        *(char *)((int)pfVar9 + 5) = (char)param_1[0x7c];
        *pfVar9 = fVar5;
        param_1[0x7e] = param_1[0x7e] + 1;
      }
      param_1[0x7c] = 0;
    }
  }
  return;
}
