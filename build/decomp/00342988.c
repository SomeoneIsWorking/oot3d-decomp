// OoT3D decomp @ 00342988  name=FUN_00342988  size=64

void FUN_00342988(int param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  fVar1 = DAT_00342ab8;
  fVar8 = DAT_00342ab4;
  if (param_3 < 0) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      param_3 = 1;
    }
    else {
      param_3 = 0;
    }
  }
  if (5 < param_3) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8) + param_3 * 0x10;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(iVar2 + 0x17c) = *param_2;
  *(undefined4 *)(iVar2 + 0x180) = uVar3;
  *(undefined4 *)(iVar2 + 0x184) = uVar4;
  *(undefined4 *)(iVar2 + 0x188) = uVar5;
  fVar6 = *(float *)(iVar2 + 0x17c);
  fVar7 = fVar8;
  if ((fVar8 <= fVar6) && (fVar7 = fVar6, fVar1 < fVar6)) {
    fVar7 = fVar1;
  }
  *(float *)(iVar2 + 0x17c) = fVar7;
  fVar6 = *(float *)(iVar2 + 0x180);
  fVar7 = fVar8;
  if ((fVar8 <= fVar6) && (fVar7 = fVar6, fVar1 < fVar6)) {
    fVar7 = fVar1;
  }
  *(float *)(iVar2 + 0x180) = fVar7;
  fVar6 = *(float *)(iVar2 + 0x184);
  fVar7 = fVar8;
  if ((fVar8 <= fVar6) && (fVar7 = fVar6, fVar1 < fVar6)) {
    fVar7 = fVar1;
  }
  *(float *)(iVar2 + 0x184) = fVar7;
  fVar7 = *(float *)(iVar2 + 0x188);
  if ((fVar8 <= fVar7) && (fVar8 = fVar7, fVar1 < fVar7)) {
    fVar8 = fVar1;
  }
  *(float *)(iVar2 + 0x188) = fVar8;
  return;
}
