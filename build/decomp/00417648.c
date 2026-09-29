// OoT3D decomp @ 00417648  name=FUN_00417648  size=484

void FUN_00417648(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_1c [8];
  float local_14;
  float local_10;
  float local_c;

  if (*param_1 != 0) {
    FUN_0030155c();
    iVar1 = FUN_00301498(*param_1,auStack_1c);
    if (iVar1 != 0) {
      FUN_00301418(*param_1,&local_14,1,auStack_1c);
      param_1[1] = (int)local_14;
      param_1[2] = (int)local_10;
      param_1[3] = (int)local_c;
      iVar1 = DAT_0041782c;
      param_1[0x25] = (int)SQRT(local_14 * local_14 + local_10 * local_10 + local_c * local_c);
      iVar3 = (int)((ulonglong)((longlong)iVar1 * (longlong)param_1[0x26]) >> 0x20);
      iVar3 = param_1[0x26] + ((iVar3 >> 2) - (iVar3 >> 0x1f)) * -10;
      param_1[iVar3 * 3 + 7] = (int)local_14;
      param_1[iVar3 * 3 + 8] = param_1[2];
      param_1[iVar3 * 3 + 9] = param_1[3];
      iVar3 = param_1[0x26];
      param_1[0x26] = iVar3 + 1;
      if (9 < iVar3 + 1) {
        iVar3 = 0;
        fVar4 = DAT_00417830;
        fVar5 = DAT_00417830;
        fVar6 = DAT_00417830;
        do {
          iVar2 = iVar3 + 1;
          fVar4 = fVar4 + (float)param_1[iVar3 * 3 + 7];
          fVar5 = fVar5 + (float)param_1[iVar3 * 3 + 8];
          fVar6 = fVar6 + (float)param_1[iVar3 * 3 + 9];
          iVar3 = iVar2;
        } while (iVar2 < 10);
        iVar1 = (int)((ulonglong)((longlong)iVar1 * (longlong)(param_1[0x26] + -1)) >> 0x20);
        iVar1 = param_1[0x26] + -1 + ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -10;
        fVar7 = fVar4 * DAT_00417834 - (float)param_1[iVar1 * 3 + 7];
        fVar4 = fVar5 * DAT_00417834 - (float)param_1[iVar1 * 3 + 8];
        fVar5 = fVar6 * DAT_00417834 - (float)param_1[iVar1 * 3 + 9];
        param_1[0x27] = (int)SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5);
      }
    }
    FUN_0041ba94(*param_1);
    iVar1 = FUN_00301498(*param_1,auStack_1c);
    if (iVar1 != 0) {
      FUN_00301418(*param_1,&local_14,1,auStack_1c);
      param_1[4] = (int)local_14;
      param_1[5] = (int)local_10;
      param_1[6] = (int)local_c;
    }
    if ((char)param_1[0x28] != '\0') {
      param_1[1] = (int)-(float)param_1[1];
      param_1[4] = (int)-(float)param_1[4];
    }
  }
  return;
}
