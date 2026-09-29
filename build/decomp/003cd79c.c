// OoT3D decomp @ 003cd79c  name=FUN_003cd79c  size=332

void FUN_003cd79c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar5 = *(float *)(param_1 + 0x1e0) / (*(float *)(param_1 + 0x1f0) - DAT_003cd8e8);
  if (fVar5 == 1.0) {
    FUN_00375bcc(param_1,DAT_003cd8ec);
    FUN_003717ac(param_1 + 0x1a4,DAT_003cd8f0,3);
  }
  if ((*(short *)(param_1 + 0x934) == 0) && (*(int *)(param_1 + 0x98) <= DAT_003cd8f8)) {
    fVar4 = *(float *)(*(int *)(DAT_003cd8f4 + param_2) + 0x2c);
    fVar3 = *(float *)(param_1 + 0x2c) - fVar4;
    if (((uint)fVar3 <= (uint)DAT_003cd8fc) &&
       (((int)fVar3 <= DAT_003cd900 && (*(float *)(param_1 + 0x84) <= fVar4 + DAT_003cd904)))) {
      FUN_003717ac(param_1 + 0x1a4,DAT_003cd8f0,4);
      uVar1 = DAT_003cd908;
      *(short *)(param_1 + 0x92a) = (short)(int)*(float *)(param_1 + 0x1f0);
      *(undefined2 *)(param_1 + 0x93a) = 0;
      uVar2 = DAT_003cd90c;
      *(undefined4 *)(param_1 + 100) = uVar1;
      goto LAB_003cd8dc;
    }
  }
  if (DAT_003cd914 <
      *(float *)(param_1 + 0xc) -
      (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100) * DAT_003cd910)) {
    *(float *)(param_1 + 100) = fVar5 * DAT_003cd918;
    return;
  }
  FUN_003717ac(param_1 + 0x1a4,DAT_003cd8f0,3);
  uVar2 = DAT_003cd91c;
LAB_003cd8dc:
  *(undefined4 *)(param_1 + 0x6a0) = uVar2;
  return;
}
