// OoT3D decomp @ 0035bad0  name=FUN_0035bad0  size=20

void FUN_0035bad0(int param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  fVar6 = DAT_0035bbd8;
  if (param_3 < 6) {
    iVar2 = *(int *)(param_1 + 100) + param_3 * 0x10;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    fVar5 = (float)param_2[3];
    *(undefined4 *)(iVar2 + 0x17c) = *param_2;
    *(undefined4 *)(iVar2 + 0x180) = uVar7;
    *(undefined4 *)(iVar2 + 0x184) = uVar8;
    *(float *)(iVar2 + 0x188) = fVar5;
    fVar1 = DAT_0035bbdc;
    fVar3 = *(float *)(iVar2 + 0x17c);
    fVar4 = fVar6;
    if ((fVar6 <= fVar3) && (fVar4 = fVar3, DAT_0035bbdc < fVar3)) {
      fVar4 = DAT_0035bbdc;
    }
    *(float *)(iVar2 + 0x17c) = fVar4;
    fVar3 = *(float *)(iVar2 + 0x180);
    fVar4 = fVar6;
    if ((fVar6 <= fVar3) && (fVar4 = fVar3, fVar1 < fVar3)) {
      fVar4 = fVar1;
    }
    *(float *)(iVar2 + 0x180) = fVar4;
    fVar3 = *(float *)(iVar2 + 0x184);
    fVar4 = fVar6;
    if ((fVar6 <= fVar3) && (fVar4 = fVar3, fVar1 < fVar3)) {
      fVar4 = fVar1;
    }
    *(float *)(iVar2 + 0x184) = fVar4;
    if ((fVar6 <= fVar5) && (fVar6 = fVar5, fVar1 < fVar5)) {
      fVar6 = fVar1;
    }
    *(float *)(iVar2 + 0x188) = fVar6;
  }
  return;
}
