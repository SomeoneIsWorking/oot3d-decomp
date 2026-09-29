// OoT3D decomp @ 00143158  name=FUN_00143158  size=480

void FUN_00143158(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;

  iVar4 = *(int *)(DAT_00143338 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  fVar6 = DAT_00143344;
  FUN_0036e168(DAT_00143348,DAT_00143344,DAT_00143340,DAT_0014333c,param_1 + 0x9b8);
  fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x9ac));
  fVar1 = DAT_0014334c;
  *(float *)(param_1 + 0x980) = fVar5 * *(float *)(param_1 + 0x9b8);
  fVar5 = *(float *)(param_1 + 0x9b4);
  *(float *)(param_1 + 0x984) = *(float *)(param_1 + 0x984) + fVar5;
  if (*(short *)(param_1 + 0x9aa) == 0) {
    if (0x3fffffff < (int)fVar5) {
      *(undefined2 *)(param_1 + 0x9aa) = 1;
      goto LAB_001431f4;
    }
    fVar5 = fVar5 + fVar6;
  }
  else {
    if ((*(short *)(param_1 + 0x9aa) != 1) || ((uint)DAT_00143350 <= (uint)fVar5))
    goto LAB_001431f4;
    fVar5 = fVar5 - fVar1;
  }
  *(float *)(param_1 + 0x9b4) = fVar5;
LAB_001431f4:
  fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x9ac));
  fVar6 = DAT_0014335c;
  piVar2 = DAT_00143354;
  *(float *)(param_1 + 0x988) = fVar5 * -*(float *)(param_1 + 0x9b8);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9b0),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x9b0) < 1) {
    fVar6 = fVar5 * fVar7 * DAT_00143358 - fVar6;
  }
  else {
    fVar6 = fVar6 + fVar5 * fVar7 * DAT_00143358;
  }
  *(short *)(param_1 + 0x9ac) = (short)(int)fVar6 + *(short *)(param_1 + 0x9ac);
  FUN_00361198(fVar1,param_1,iVar4 + 0x28);
  if (((*(float *)(param_1 + 0x9b4) < DAT_00143360) &&
      (fVar6 = *(float *)(param_1 + 0x984), (int)fVar6 < DAT_00143364)) && (DAT_00143360 < fVar6)) {
    FUN_0037572c(fVar6 * DAT_00143368,param_1);
  }
  if (*(uint *)(param_1 + 0x984) <= DAT_0014336c) {
    uVar3 = FUN_003758b0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60));
    *(undefined2 *)(param_1 + 0x9bc) = uVar3;
    FUN_003612fc(param_1,param_2,0x20);
    FUN_00375bcc(param_1,DAT_00143370);
    return;
  }
  if (*(short *)(param_1 + 0x1c) == 6) {
    *(undefined1 *)(*(int *)(param_1 + 0x9a0) + 0x9a4) = 0;
  }
  FUN_00374428(param_1);
  return;
}
