// OoT3D decomp @ 003fe44c  name=FUN_003fe44c  size=268

void FUN_003fe44c(int param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int aiStack_45c [272];

  FUN_00371738(aiStack_45c,DAT_003fe558,0x440);
  fVar4 = DAT_003fe55c;
  if (*(int *)(param_1 + 8) != 2) {
    fVar4 = DAT_003fe560;
  }
  iVar2 = 0;
  do {
    if (aiStack_45c[*(int *)(param_1 + 8) * 0x11 + iVar2] == param_2) {
      fVar3 = (float)FUN_003727f0(*(undefined4 *)(DAT_003fe564 + 4));
      fVar1 = DAT_003fe56c;
      fVar4 = fVar3 * DAT_003fe568 * fVar4;
      *param_3 = *param_3 * fVar4;
      param_3[4] = param_3[4] * fVar4;
      param_3[8] = param_3[8] * fVar4;
      param_3[1] = param_3[1] * fVar1;
      param_3[5] = param_3[5] * fVar1;
      param_3[9] = param_3[9] * fVar1;
      param_3[2] = param_3[2] * fVar1;
      param_3[6] = param_3[6] * fVar1;
      param_3[10] = param_3[10] * fVar1;
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  return;
}
