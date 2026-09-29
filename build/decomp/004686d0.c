// OoT3D decomp @ 004686d0  name=COmoteUraSelector_004686d0  size=528

void COmoteUraSelector_004686d0(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;

  puVar5 = (undefined4 *)FUN_0035010c(4);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = DAT_004688e0;
  }
  *(undefined4 **)(param_1 + 0x49c) = puVar5;
  iVar6 = FUN_0035010c(0x1c4);
  uVar7 = 0;
  if (iVar6 != 0) {
    uVar7 = FUN_002e77e8();
  }
  *(undefined4 *)(param_1 + 0x4a0) = uVar7;
  FUN_002e76b8(uVar7,*(undefined4 *)(param_1 + 0x49c),0x100,0x100,0x80);
  uVar1 = DAT_004688e4;
  FUN_003446e8(*(undefined4 *)(param_1 + 0x4a0),0x900,0xffffff70,0,0x120,1);
  iVar6 = (**(code **)(*(int *)*DAT_004688ec + 0xc))((int *)*DAT_004688ec,0x1b8,DAT_004688e8,0x154);
  uVar7 = 0;
  if (iVar6 != 0) {
    uVar7 = FUN_00348f34(iVar6,param_1 + 0x4a4);
  }
  *(undefined4 *)(param_1 + 0x5bc) = uVar7;
  iVar6 = (**(code **)(*(int *)*DAT_004688f0 + 0xc))
                    ((int *)*DAT_004688f0,0x54,DAT_004688e8,DAT_004688f4);
  uVar7 = 0;
  if (iVar6 != 0) {
    uVar7 = FUN_002ffa20();
  }
  *(undefined4 *)(param_1 + 0x5c0) = uVar7;
  FUN_002ccf04(*(undefined4 *)(param_1 + 0x4a0),uVar7,0);
  FUN_00348a64(*(undefined4 *)(param_1 + 0x5bc),0,*(undefined4 *)(param_1 + 0x5c0),DAT_004688fc,
               DAT_004688fc,DAT_004688f8);
  fVar4 = DAT_0046890c;
  fVar3 = DAT_00468908;
  iVar6 = DAT_00468904;
  puVar2 = DAT_00468900;
  iVar9 = 0;
  do {
    if (((*puVar2 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_00468900), iVar8 != 0)) {
      FUN_0036788c(DAT_00468910);
    }
    iVar8 = BoardModelFactory_0034897c
                      (*(undefined4 *)(iVar6 + 0x47c),*(undefined4 *)(param_1 + 0x5bc),0);
    *(int *)(param_1 + iVar9 * 4 + 0x5c4) = iVar8;
    fVar10 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    iVar9 = iVar9 + 1;
    *(float *)(iVar8 + 0x3c) = fVar10 + fVar3;
    *(float *)(iVar8 + 0x40) = fVar11 + fVar4;
    *(undefined4 *)(iVar8 + 0x44) = uVar1;
    uVar7 = DAT_0046891c;
  } while (iVar9 < 2);
  iVar6 = *(int *)(param_1 + 0x5c8);
  *(undefined4 *)(iVar6 + 0xf0) = uVar1;
  *(undefined4 *)(iVar6 + 0xf4) = uVar1;
  *(undefined4 *)(iVar6 + 0xf8) = uVar1;
  *(undefined4 *)(iVar6 + 0xfc) = uVar7;
  return;
}
