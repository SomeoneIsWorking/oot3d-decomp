// OoT3D decomp @ 003429c8  name=FUN_003429c8  size=236

void FUN_003429c8(int param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = DAT_00342ab8;
  fVar7 = DAT_00342ab4;
  if (5 < param_2) {
    return;
  }
  param_1 = param_1 + param_2 * 0x10;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 0x17c) = *param_3;
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  *(undefined4 *)(param_1 + 0x188) = uVar4;
  fVar5 = *(float *)(param_1 + 0x17c);
  fVar6 = fVar7;
  if ((fVar7 <= fVar5) &&
     (fVar6 = fVar5, fVar5 != fVar1 && fVar5 < fVar1 == (NAN(fVar5) || NAN(fVar1)))) {
    fVar6 = fVar1;
  }
  *(float *)(param_1 + 0x17c) = fVar6;
  fVar5 = *(float *)(param_1 + 0x180);
  fVar6 = fVar7;
  if ((fVar7 <= fVar5) &&
     (fVar6 = fVar5, fVar5 != fVar1 && fVar5 < fVar1 == (NAN(fVar5) || NAN(fVar1)))) {
    fVar6 = fVar1;
  }
  *(float *)(param_1 + 0x180) = fVar6;
  fVar5 = *(float *)(param_1 + 0x184);
  fVar6 = fVar7;
  if ((fVar7 <= fVar5) &&
     (fVar6 = fVar5, fVar5 != fVar1 && fVar5 < fVar1 == (NAN(fVar5) || NAN(fVar1)))) {
    fVar6 = fVar1;
  }
  *(float *)(param_1 + 0x184) = fVar6;
  fVar6 = *(float *)(param_1 + 0x188);
  if ((fVar7 <= fVar6) &&
     (fVar7 = fVar6, fVar6 != fVar1 && fVar6 < fVar1 == (NAN(fVar6) || NAN(fVar1)))) {
    fVar7 = fVar1;
  }
  *(float *)(param_1 + 0x188) = fVar7;
  return;
}

