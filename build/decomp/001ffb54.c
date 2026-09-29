// OoT3D decomp @ 001ffb54  name=FUN_001ffb54  size=280

void FUN_001ffb54(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;

  FUN_00375bcc(param_1,DAT_001ffc6c);
  uVar4 = DAT_001ffc7c;
  uVar3 = DAT_001ffc78;
  uVar2 = DAT_001ffc74;
  uVar1 = DAT_001ffc70;
  FUN_0036e168(DAT_001ffc7c,DAT_001ffc78,DAT_001ffc74,DAT_001ffc70,param_1 + 0x470);
  FUN_0036e168(uVar4,uVar3,uVar2,uVar1,param_1 + 0x474);
  if ((int)ABS(*(float *)(param_1 + 0x98)) < DAT_001ffc84) {
    fVar6 = *(float *)(*(int *)(DAT_001ffc80 + param_2) + 0x2c);
    if ((fVar6 - DAT_001ffc88 < *(float *)(param_1 + 0x2c)) &&
       (*(float *)(param_1 + 0x2c) < fVar6 + DAT_001ffc88)) goto LAB_001ffc04;
  }
  *(undefined1 *)(param_1 + 0x460) = 1;
LAB_001ffc04:
  uVar1 = DAT_001ffc90;
  if ((int)*(float *)(param_1 + 0x47c) < DAT_001ffc8c) {
    *(float *)(param_1 + 0x47c) = *(float *)(param_1 + 0x47c) + DAT_001ffc94;
  }
  else {
    *(undefined4 *)(param_1 + 0x47c) = DAT_001ffc90;
    if (*(short *)(param_2 + 0x104) == 0x15 || *(short *)(param_2 + 0x104) == 0x17) {
      *(undefined4 *)(param_1 + 0x490) = DAT_001ffc98;
    }
  }
  iVar5 = FUN_0036c950(param_1 + 0x360,param_2);
  uVar2 = DAT_001ffc98;
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x47c) = uVar1;
    *(undefined4 *)(param_1 + 0x490) = uVar2;
  }
  return;
}
