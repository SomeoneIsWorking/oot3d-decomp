// OoT3D decomp @ 001b5104  name=FUN_001b5104  size=776

void FUN_001b5104(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  short *psVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;

  if (*(code **)(param_1 + 0x3fc) == DAT_001b5418) {
                    /* WARNING: Could not recover jumptable at 0x001b512c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x3fc))(param_1,param_2);
    return;
  }
  FUN_0037632c(param_1,param_1 + 0x400);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x400);
  iVar5 = DAT_001b5420;
  iVar10 = DAT_001b541c;
  if (*(int *)(param_1 + 0x3fc) != DAT_001b541c) {
    FUN_003731e0(param_1 + 0x1a4);
    uVar8 = DAT_001b5424;
    if (((*(int *)(param_1 + 0x1d4) == 2) && ((*(ushort *)(iVar5 + 0x8a) & 0xf) != 6)) &&
       (*(float *)(param_1 + 0x20c) < *(float *)(*(int *)(param_1 + 0x21c) + 0x1c))) {
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
      FUN_003fd1b8(uVar8,param_2,param_1);
    }
    FUN_00376340(DAT_001b5428,DAT_001b5428,DAT_001b5428,param_2,param_1,4);
  }
  if (((*(short *)(param_1 + 0x466) != 3) &&
      ((*(short *)(param_1 + 0x462) == 0 ||
       (sVar2 = *(short *)(param_1 + 0x462) + -1, *(short *)(param_1 + 0x462) = sVar2, sVar2 == 0)))
      ) && (sVar2 = *(short *)(param_1 + 0x466) + 1, *(short *)(param_1 + 0x466) = sVar2, 2 < sVar2)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0x1e);
  }
  (**(code **)(param_1 + 0x3fc))(param_1,param_2);
  if (*(int *)(param_1 + 0x3fc) == iVar10) {
    return;
  }
  sVar2 = 0;
  if (*(int *)(param_1 + 0x1d4) != 7) {
    sVar2 = (short)*(undefined4 *)(DAT_001b542c + param_2);
  }
  psVar11 = (short *)(param_1 + 0xdac);
  psVar6 = (short *)(param_1 + 0xdae);
  iVar10 = 0xb;
  sVar4 = 0;
  do {
    iVar10 = iVar10 + -1;
    psVar11[3] = ((short)DAT_001b5430 + sVar4 * 0x32) * sVar2;
    psVar6[3] = (sVar4 * 0x32 + 0x940) * sVar2;
    sVar1 = (short)DAT_001b5434;
    psVar11 = psVar11 + 6;
    *psVar11 = (sVar4 * 0x32 + 0x846) * sVar2;
    psVar6 = psVar6 + 6;
    *psVar6 = (sVar1 + sVar4 * 0x32) * sVar2;
    sVar4 = sVar4 + 2;
  } while (iVar10 != 0);
  if (((*(short *)(iVar5 + 100) < 6) && (*(short *)(iVar5 + 0x62) != 0)) &&
     (*(short *)(DAT_001b5438 + param_1) == 0)) {
    FUN_0036bc98(param_1,param_2);
  }
  else {
    fVar15 = DAT_001b5440;
    if (*(char *)(param_1 + 0x1f) == '\x06') {
      fVar15 = DAT_001b5444;
    }
    FUN_00342714(fVar15 + *(float *)(param_1 + 0x440),param_2,param_1,param_1 + 0xd88,DAT_001b5448);
    if (*(short *)(DAT_001b5438 + param_1) != 0) {
      *(undefined2 *)(param_1 + 0x472) = *(undefined2 *)(param_1 + 0x470);
      uVar3 = FUN_003769d8(param_2 + 0x28a0);
      *(undefined2 *)(param_1 + 0x470) = uVar3;
    }
  }
  uVar7 = DAT_001b545c;
  uVar8 = DAT_001b5458;
  iVar5 = *(int *)(DAT_001b544c + param_2);
  iVar10 = *(int *)(param_1 + 0x1d4);
  bVar12 = iVar10 == 0;
  bVar13 = iVar10 == 2;
  bVar14 = iVar10 != 5;
  if ((!bVar12 && !bVar13) && bVar14) {
    iVar10 = 0;
  }
  if ((bVar12 || bVar13) || !bVar14) {
    iVar10 = 1;
  }
  if (*(int *)(param_1 + 0x3fc) == DAT_001b5450) {
    iVar10 = 4;
  }
  if (*(int *)(param_1 + 0x3fc) == DAT_001b5454) {
    uVar7 = *(undefined4 *)(param_2 + 0x1bc);
    uVar9 = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0xda0) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0xda4) = uVar7;
    *(undefined4 *)(param_1 + 0xda8) = uVar9;
    *(undefined4 *)(param_1 + 0xd9c) = uVar8;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0x2c);
    uVar9 = *(undefined4 *)(iVar5 + 0x30);
    *(undefined4 *)(param_1 + 0xda0) = *(undefined4 *)(iVar5 + 0x28);
    *(undefined4 *)(param_1 + 0xda4) = uVar8;
    *(undefined4 *)(param_1 + 0xda8) = uVar9;
    *(undefined4 *)(param_1 + 0xd9c) = uVar7;
  }
  FUN_0034c664(param_1,param_1 + 0xd88,1,iVar10);
  return;
}
