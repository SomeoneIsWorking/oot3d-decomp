// OoT3D decomp @ 004715a0  name=FUN_004715a0  size=528

void FUN_004715a0(int param_1)

{
  short sVar1;
  float fVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  pfVar3 = DAT_004717b8;
  fVar2 = DAT_004717b4;
  iVar8 = DAT_004717b0;
  sVar6 = *(short *)(DAT_004717b0 + 0x42);
  if (sVar6 < 0x51) {
    sVar6 = 0x10;
  }
  else if (sVar6 < 0xa1) {
    sVar6 = 0x18;
  }
  else if (sVar6 < 0xf1) {
    sVar6 = 0x20;
  }
  else {
    sVar6 = 0x2c;
  }
  if ((sVar6 < *(short *)(DAT_004717b0 + 0x44)) || (*(short *)(DAT_004717b0 + 0x44) < 1)) {
    *(undefined2 *)(param_1 + 0x2e0a) = 0;
    fVar9 = DAT_004717bc;
    *pfVar3 = fVar2;
    pfVar3[1] = fVar9;
  }
  if (5 < *(short *)(param_1 + 0x2e0a)) {
    fVar11 = pfVar3[1];
    fVar9 = pfVar3[2];
    fVar10 = (float)FUN_0037103c(((fVar11 * DAT_004717c0) / fVar9) * DAT_004717c4);
    *pfVar3 = DAT_004717cc + (fVar2 - (fVar11 / fVar9 + fVar10 * DAT_004717c8)) * DAT_004717cc;
    fVar9 = pfVar3[1];
    pfVar3[1] = fVar9 + fVar2;
    if (pfVar3[2] < fVar9 + fVar2) {
      pfVar3[1] = pfVar3[2];
    }
  }
  if (*(short *)(param_1 + 0x2e08) == 0) {
    sVar6 = *(short *)(param_1 + 0x2e06) + 1;
    *(short *)(param_1 + 0x2e06) = sVar6;
    if (0xe < sVar6) {
      *(undefined2 *)(param_1 + 0x2e06) = 0xf;
      *(undefined2 *)(param_1 + 0x2e08) = 1;
    }
    return;
  }
  sVar6 = *(short *)(param_1 + 0x2e06) + -1;
  *(short *)(param_1 + 0x2e06) = sVar6;
  if (sVar6 < 1) {
    *(undefined2 *)(param_1 + 0x2e06) = 0;
    *(undefined2 *)(param_1 + 0x2e08) = 0;
    iVar7 = FUN_0036a7a0(param_1);
    if ((iVar7 == 0) && (iVar7 = FUN_003695f8(), iVar7 == 0)) {
      sVar6 = *(short *)(iVar8 + 0x42);
      if (sVar6 < 0x51) {
        sVar6 = 0x10;
      }
      else if (sVar6 < 0xa1) {
        sVar6 = 0x18;
      }
      else if (sVar6 < 0xf1) {
        sVar6 = 0x20;
      }
      else {
        sVar6 = 0x2c;
      }
      sVar1 = *(short *)(iVar8 + 0x44);
      if (((sVar1 <= sVar6) && (0 < sVar1)) &&
         (iVar8 = FUN_0037577c(param_1), uVar5 = DAT_004717d4, uVar4 = DAT_004717d0, iVar8 == 0)) {
        sVar6 = *(short *)(param_1 + 0x2e0a) + 1;
        *(short *)(param_1 + 0x2e0a) = sVar6;
        if (sVar6 < 6) {
          FUN_0037547c(uVar4,0,4,DAT_004717d8,DAT_004717d8,uVar5);
          return;
        }
        FUN_0037547c(uVar4,0,4,DAT_004717d8,DAT_004717b8,uVar5);
      }
    }
  }
  return;
}
