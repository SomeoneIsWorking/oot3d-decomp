// OoT3D decomp @ 001c5460  name=FUN_001c5460  size=628

void FUN_001c5460(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  iVar4 = DAT_001c56dc;
  uVar2 = DAT_001c56d8;
  uVar1 = DAT_001c56d4;
  FUN_003705a0(DAT_001c56d8,DAT_001c56d4,DAT_001c56dc + 8);
  FUN_003705a0(uVar2,uVar1,iVar4 + 0x14);
  FUN_003705a0(DAT_001c56e0,uVar1,iVar4);
  FUN_003705a0(DAT_001c56e4,uVar1,iVar4 + 0xc);
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x70);
  iVar4 = FUN_003731e0(param_1 + 0x1a4);
  fVar7 = DAT_001c5704;
  fVar3 = DAT_001c56f4;
  fVar8 = DAT_001c56f0;
  fVar6 = *(float *)(param_1 + 0x1e0);
  if (DAT_001c56e8 < (int)fVar6) {
    if (DAT_001c5700 < (int)fVar6) {
      fVar6 = (float)FUN_003727f0((fVar6 - DAT_001c56f0) * DAT_001c570c);
      fVar7 = (*(float *)(param_1 + 0xc) - fVar7) + fVar6 * fVar3;
    }
    else {
      fVar6 = (float)FUN_003727f0(fVar6 * DAT_001c56ec);
      fVar7 = (*(float *)(param_1 + 0xc) - fVar7) + fVar6 * DAT_001c5708;
    }
  }
  else {
    fVar7 = (float)FUN_003727f0(fVar6 * DAT_001c56ec);
    fVar7 = (*(float *)(param_1 + 0xc) - DAT_001c56f8) + fVar7 * DAT_001c56fc;
    if (fVar7 < *(float *)(param_1 + 0x2c)) {
      fVar7 = *(float *)(param_1 + 0x2c);
    }
  }
  uVar1 = DAT_001c5710;
  *(float *)(param_1 + 0x2c) = fVar7;
  if ((iVar4 != 0) || (iVar5 = FUN_003736fc(fVar8,uVar1,param_1 + 0x1a4), iVar5 != 0)) {
    FUN_0037547c(DAT_001c571c,param_1 + 0xee0,4,DAT_001c5718,DAT_001c5718,DAT_001c5714);
  }
  uVar2 = DAT_001c5724;
  if (DAT_001c5720 < *(uint *)(param_1 + 0xedc)) {
    FUN_0036e168(DAT_001c572c,uVar1,fVar3,DAT_001c5728,param_1 + 0xedc);
    fVar8 = *(float *)(param_1 + 0xedc);
  }
  else {
    FUN_0036e168(DAT_001c5724,DAT_001c5738,DAT_001c5734,DAT_001c5730,param_1 + 0x6c);
    fVar8 = *(float *)(param_1 + 0xedc) + *(float *)(param_1 + 0x6c);
    *(float *)(param_1 + 0xedc) = fVar8;
  }
  if (DAT_001c573c < (int)fVar8) {
    fVar8 = DAT_001c5740;
  }
  *(float *)(param_1 + 0xedc) = fVar8;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
  if (iVar4 != 0) {
    FUN_00370350(DAT_001c5744,param_1 + 0x1a4,0x10);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) | 1;
    *(undefined4 *)(param_1 + 0x129c) = DAT_001c5748;
    *(byte *)(*(int *)(param_1 + 0xf08) + 0x336) = *(byte *)(*(int *)(param_1 + 0xf08) + 0x336) | 5;
    *(byte *)(*(int *)(param_1 + 0xf08) + 0x16) = *(byte *)(*(int *)(param_1 + 0xf08) + 0x16) & 0xfe
    ;
    if (*(int *)(param_1 + 0x22c) != DAT_001c574c) {
      *(undefined2 *)(param_1 + 0x234) = 0x71;
    }
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c5750;
  }
  return;
}
