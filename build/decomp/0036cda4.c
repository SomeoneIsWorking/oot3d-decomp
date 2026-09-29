// OoT3D decomp @ 0036cda4  name=FUN_0036cda4  size=256

undefined4 FUN_0036cda4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  iVar3 = *(int *)(DAT_0036cea4 + param_2);
  iVar1 = (int)*(short *)(param_1 + 0x36);
  uVar2 = DAT_0036ceac;
  if ((DAT_0036cea8 < iVar1) && (iVar1 < -DAT_0036cea8)) {
    if ((int)DAT_0036ceb0 < iVar1) {
      uVar2 = 0;
      if (DAT_0036ceb4 <= iVar1) {
        uVar2 = 0x4000;
      }
    }
    else {
      uVar2 = ~(DAT_0036ceb0 >> 0x12);
    }
  }
  fVar4 = (float)FUN_00338f60(uVar2);
  fVar5 = (float)FUN_002cfca0(uVar2);
  if (fVar4 < DAT_0036ceb8) {
    fVar4 = -fVar4;
  }
  if (fVar5 < DAT_0036ceb8) {
    fVar5 = -fVar5;
  }
  fVar6 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
  fVar7 = *(float *)(param_1 + 0x30) - *(float *)(iVar3 + 0x30);
  if (fVar6 < DAT_0036ceb8) {
    fVar6 = -fVar6;
  }
  if (fVar6 < fVar4 * DAT_0036cebc + fVar5 * DAT_0036cec0) {
    if (fVar7 < DAT_0036ceb8) {
      fVar7 = -fVar7;
    }
    if (fVar7 < fVar5 * DAT_0036cebc + fVar4 * DAT_0036cec0) {
      return 1;
    }
  }
  return 0;
}
