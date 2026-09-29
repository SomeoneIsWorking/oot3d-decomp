// OoT3D decomp @ 002f48f8  name=FUN_002f48f8  size=568

int FUN_002f48f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_154 [280];

  *(undefined4 *)(param_1 + 0x38) = DAT_002f4b30;
  iVar2 = FUN_00313ce0(0x1c4);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002e77e8();
  }
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_002e76b8(uVar3,param_1 + 0x38,0x100,0x100,0x100);
  fVar10 = DAT_002f4b38;
  uVar3 = DAT_002f4b34;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  iVar2 = DAT_002f4b44;
  fVar1 = DAT_002f4b40;
  uVar3 = DAT_002f4b3c;
  iVar8 = 0;
  do {
    fVar12 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_002df6ac(fVar1,*(undefined4 *)(param_1 + 0x34),param_2,1,(int)(fVar11 + fVar10),
                 (int)(fVar12 + fVar10),0x10,0x10,auStack_154,0);
    iVar4 = (**(code **)(*(int *)*DAT_002f4b48 + 8))((int *)*DAT_002f4b48,0x1b8);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_00348f34(iVar4,auStack_154);
    }
    iVar9 = param_1 + iVar8 * 4;
    *(undefined4 *)(iVar9 + 8) = uVar5;
    iVar4 = (**(code **)(*(int *)*DAT_002f4b4c + 8))((int *)*DAT_002f4b4c,0x54);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_002ffa20();
    }
    *(undefined4 *)(param_1 + iVar8 * 4) = uVar5;
    FUN_002ccf04(*(undefined4 *)(param_1 + 0x34),uVar5,0);
    FUN_00348a64(*(undefined4 *)(iVar9 + 8),0,*(undefined4 *)(param_1 + iVar8 * 4),0x2601,0x2601,
                 uVar3,uVar3);
    if (((*DAT_002f4b50 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002f4b50), iVar4 != 0)) {
      FUN_0036788c(DAT_002f4b54);
    }
    iVar4 = BoardModelFactory_0034897c(*(undefined4 *)(iVar2 + 0x47c),*(undefined4 *)(iVar9 + 8),0);
    *(int *)(iVar9 + 0x10) = iVar4;
    iVar8 = iVar8 + 1;
    *(uint *)(iVar4 + 0x178) = *(uint *)(iVar4 + 0x178) | 2;
    fVar10 = fVar1;
  } while (iVar8 < 2);
  iVar2 = FUN_002df594(*(undefined4 *)(param_1 + 8),0);
  uVar3 = DAT_002f4b60;
  uVar6 = 0;
  if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x34) + 0xf0) + 0x1a8) & 0x3fffffff) != 0) {
    do {
      puVar7 = (undefined4 *)(iVar2 + uVar6 * 0x10);
      uVar6 = uVar6 + 1;
      *puVar7 = uVar3;
      puVar7[1] = uVar3;
      puVar7[2] = uVar3;
    } while (uVar6 < (uint)(*(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0xf0) + 0x1a8) * 4));
  }
  return param_1;
}
