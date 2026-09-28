// OoT3D decomp @ 003ff384  name=FUN_003ff384  size=276

void FUN_003ff384(int param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int aiStack_54 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;

  fVar4 = fRam003ff49c;
  aiStack_54[0] = *piRam003ff498;
  aiStack_54[1] = piRam003ff498[1];
  aiStack_54[2] = piRam003ff498[2];
  aiStack_54[3] = piRam003ff498[3];
  iStack_44 = piRam003ff498[4];
  iStack_40 = piRam003ff498[5];
  iStack_3c = piRam003ff498[6];
  iStack_38 = piRam003ff498[7];
  iStack_34 = piRam003ff498[8];
  iStack_30 = piRam003ff498[9];
  iStack_2c = piRam003ff498[10];
  iStack_28 = piRam003ff498[0xb];
  iStack_24 = piRam003ff498[0xc];
  iStack_20 = piRam003ff498[0xd];
  iVar2 = 0;
  fVar1 = fRam003ff49c;
  if (*(int *)(param_1 + 8) != 2) {
    fVar1 = fRam003ff4a0;
  }
  do {
    if (aiStack_54[*(int *)(param_1 + 8) * 7 + iVar2] == param_2) {
      fVar3 = (float)func_0x003727f0(*(undefined4 *)(iRam003ff4a4 + 4));
      fVar4 = fVar3 * fRam003ff4a8 * fVar4;
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
  } while (iVar2 < 7);
  return;
}
