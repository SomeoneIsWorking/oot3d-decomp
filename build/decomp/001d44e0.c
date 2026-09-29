// OoT3D decomp @ 001d44e0  name=z_en_arrow_001d44e0  size=1164

void z_en_arrow_001d44e0(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;

  FUN_003510b0(param_1,DAT_001d4880);
  if (*(short *)(param_1 + 0x1c) == -10) {
    *(undefined1 *)(param_1 + 0x307) = 1;
    *(undefined2 *)(param_1 + 0x1c) = 10;
  }
  *(undefined1 *)(param_1 + 0x230) = 1;
  *(undefined1 *)(param_1 + 0x231) = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  if (8 < *(short *)(param_1 + 0x1c)) {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001d4884 + iVar6) != 0)) {
      iVar6 = iVar6 + 0x3a5c;
    }
    else {
      iVar6 = 0;
    }
    uVar7 = ObjectBankArchive_00372c90(iVar6 + 0x10,5);
    iVar6 = (**(code **)(*(int *)*DAT_001d48c0 + 0xc))
                      ((int *)*DAT_001d48c0,0x1b8,s_d__home_queen_dailyBuild_game_us_001d4888,0xf3);
    uVar8 = 0;
    if (iVar6 != 0) {
      uVar8 = FUN_00348f34(iVar6,DAT_001d48c4);
    }
    *(undefined4 *)(param_1 + 0x228) = uVar8;
    FUN_00348be4();
    FUN_00348a64(*(undefined4 *)(param_1 + 0x228),0,uVar7,DAT_001d48cc,DAT_001d48cc,DAT_001d48c8,
                 DAT_001d48c8);
    if (((*DAT_001d48d0 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_001d48d0), iVar6 != 0)) {
      FUN_0036788c(DAT_001d48d4);
    }
    iVar6 = BoardModelFactory_0034897c
                      (*(undefined4 *)(DAT_001d48e0 + 0x47c),*(undefined4 *)(param_1 + 0x228),
                       *(undefined4 *)(param_1 + 0x178),0);
    *(int *)(param_1 + 0x22c) = iVar6;
    *(undefined4 *)(iVar6 + 0x170) = 0;
  }
  if (*(short *)(param_1 + 0x1c) < 10) {
    if (*(short *)(param_1 + 0x1c) < 9) {
      if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
         (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
         *(int *)(DAT_001d4884 + iVar6) != 0)) {
        iVar6 = iVar6 + 0x3a5c;
      }
      else {
        iVar6 = 0;
      }
      uVar8 = ObjectBankArchive_00358ef8(iVar6 + 0x10,0);
      FUN_00358ea8(iVar6 + 0x10,param_2,param_1 + 0x1a4,uVar8,*(undefined4 *)(param_1 + 0x178),1,0,0
                   ,0);
      *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xad) = 0;
    }
    fVar4 = DAT_001d48ec;
    fVar3 = DAT_001d48e8;
    piVar2 = DAT_001d48e4;
    iVar6 = DAT_001d4880;
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 < 3) {
      if (((*(uint *)(DAT_001d4880 + 4) & 1) == 0) &&
         (iVar9 = FUN_003679b4(DAT_001d4880 + 4), iVar9 != 0)) {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar8 = VectorFloatToUnsigned(fVar3 / fVar10 + fVar4,3);
        *(char *)(iVar6 + 0x1ae) = (char)uVar8;
      }
      uVar8 = DAT_001d48f0;
      if (*(short *)(param_1 + 0x1c) == 1) {
        uVar5 = 4;
      }
      else {
        uVar5 = 0x10;
      }
      *(undefined1 *)(iVar6 + 0x1ae) = uVar5;
      FUN_00350660(param_2,param_1 + 0x2cc,2,0,0,uVar8);
    }
    else if (sVar1 == 3) {
      if (((*(uint *)(DAT_001d4880 + 8) & 1) == 0) &&
         (iVar6 = FUN_003679b4(DAT_001d48f4), iVar6 != 0)) {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar8 = VectorFloatToUnsigned(fVar3 / fVar10 + fVar4,3);
        *(char *)(DAT_001d48f8 + 0x16) = (char)uVar8;
      }
      FUN_00350660(param_2,param_1 + 0x2cc,2,0,0,DAT_001d48f8);
    }
    else if (sVar1 == 4) {
      if (((*(uint *)(DAT_001d4880 + 0xc) & 1) == 0) &&
         (iVar9 = FUN_003679b4(DAT_001d48fc), iVar6 = DAT_001d4900, iVar9 != 0)) {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar8 = VectorFloatToUnsigned(fVar3 / fVar10 + fVar4,3);
        *(char *)(DAT_001d4900 + 0x16) = (char)uVar8;
        *(undefined1 *)(iVar6 + 0x1b) = 0xfb;
      }
      FUN_00350660(param_2,param_1 + 0x2cc,2,0,0,DAT_001d4900);
    }
    else if (sVar1 == 5) {
      if (((*(uint *)(DAT_001d4880 + 0x10) & 1) == 0) &&
         (iVar6 = FUN_003679b4(DAT_001d49f0), iVar6 != 0)) {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar8 = VectorFloatToUnsigned(fVar3 / fVar10 + fVar4,3);
        *(char *)(DAT_001d49f4 + 0x16) = (char)uVar8;
      }
      FUN_00350660(param_2,param_1 + 0x2cc,2,0,0,DAT_001d49f4);
    }
    FUN_00350a98(param_2,param_1 + 0x234);
    FUN_00350914(param_2,param_1 + 0x234,param_1,DAT_001d49f8);
    if (*(short *)(param_1 + 0x1c) < 3) {
      *(byte *)(param_1 + 0x261) = *(byte *)(param_1 + 0x261) & 0xe7;
    }
    iVar6 = (int)*(short *)(param_1 + 0x1c);
    if (iVar6 < 0) {
      *(undefined1 *)(param_1 + 0x244) = 0x11;
    }
    else if (iVar6 < 10) {
      *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(DAT_001d49fc + iVar6 * 4);
    }
  }
  *(undefined4 *)(param_1 + 0x318) = DAT_001d4a00;
  return;
}
