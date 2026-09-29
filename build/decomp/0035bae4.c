// OoT3D decomp @ 0035bae4  name=FUN_0035bae4  size=244

void FUN_0035bae4(int param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  fVar5 = DAT_0035bbd8;
  if (param_2 < 6) {
    param_1 = param_1 + param_2 * 0x10;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    fVar4 = (float)param_3[3];
    *(undefined4 *)(param_1 + 0x17c) = *param_3;
    *(undefined4 *)(param_1 + 0x180) = uVar6;
    *(undefined4 *)(param_1 + 0x184) = uVar7;
    *(float *)(param_1 + 0x188) = fVar4;
    fVar1 = DAT_0035bbdc;
    fVar2 = *(float *)(param_1 + 0x17c);
    fVar3 = fVar5;
    if ((fVar5 <= fVar2) && (fVar3 = fVar2, DAT_0035bbdc < fVar2)) {
      fVar3 = DAT_0035bbdc;
    }
    *(float *)(param_1 + 0x17c) = fVar3;
    fVar2 = *(float *)(param_1 + 0x180);
    fVar3 = fVar5;
    if ((fVar5 <= fVar2) && (fVar3 = fVar2, fVar1 < fVar2)) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x180) = fVar3;
    fVar2 = *(float *)(param_1 + 0x184);
    fVar3 = fVar5;
    if ((fVar5 <= fVar2) && (fVar3 = fVar2, fVar1 < fVar2)) {
      fVar3 = fVar1;
    }
    *(float *)(param_1 + 0x184) = fVar3;
    if ((fVar5 <= fVar4) && (fVar5 = fVar4, fVar1 < fVar4)) {
      fVar5 = fVar1;
    }
    *(float *)(param_1 + 0x188) = fVar5;
  }
  return;
}
