// OoT3D decomp @ 0012697c  name=FUN_0012697c  size=304

void FUN_0012697c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_00126ab4;
  uVar1 = DAT_00126ab0;
  FUN_00373500(DAT_00126ab4,DAT_00126ab0,DAT_00126aac,param_1 + 0xc4);
  FUN_0036fc20(uVar1,DAT_00126ab8,param_1 + 0x664);
  if (*(short *)(param_1 + 0x64a) == 0) {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),5,DAT_00126abc,0);
  }
  fVar4 = *(float *)(param_1 + 0x680) - *(float *)(param_1 + 0x28);
  if (DAT_00126ac0 < (int)ABS(fVar4)) {
    fVar3 = *(float *)(param_1 + 0x688) - *(float *)(param_1 + 0x30);
    if (DAT_00126ac0 < (int)ABS(fVar3)) {
      fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      fVar3 = (fVar3 / fVar5) * DAT_00126ac4;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + (fVar4 / fVar5) * DAT_00126ac4;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar3;
      return;
    }
  }
  if (*(uint *)(param_1 + 0xc4) <= DAT_00126ac8) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined2 *)(param_1 + 0x646) = 0;
  *(undefined2 *)(param_1 + 0x648) = 0;
  uVar1 = DAT_00126ad0;
  *(undefined4 *)(param_1 + 0x70) = DAT_00126acc;
  *(undefined4 *)(param_1 + 0x638) = uVar1;
  return;
}
