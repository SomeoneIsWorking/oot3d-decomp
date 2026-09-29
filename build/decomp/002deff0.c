// OoT3D decomp @ 002deff0  name=FUN_002deff0  size=340

void FUN_002deff0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  uVar1 = DAT_002df144;
  FUN_003446e8(DAT_002df144,*param_1,param_2,0,0,0x200,0x80,param_1 + 2,0);
  iVar2 = (**(code **)(*(int *)*DAT_002df148 + 8))((int *)*DAT_002df148,0x1b8);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00348f34(iVar2,param_1 + 2);
  }
  param_1[0x48] = uVar3;
  iVar2 = (**(code **)(*(int *)*DAT_002df14c + 8))((int *)*DAT_002df14c,0x54);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_002ffa20();
  }
  param_1[0x49] = uVar3;
  FUN_002ccf04(*param_1,uVar3,0);
  FUN_00348a64(param_1[0x48],0,param_1[0x49],DAT_002df154,DAT_002df154,DAT_002df150,DAT_002df150);
  if (((*DAT_002df158 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002df158), iVar2 != 0)) {
    FUN_0036788c(DAT_002df15c);
  }
  iVar4 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_002df168 + 0x47c),param_1[0x48],0);
  iVar2 = DAT_002df16c;
  param_1[0x4a] = iVar4;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + (int)param_1),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_002df170;
  *(float *)(iVar4 + 0xf0) = fVar5;
  *(float *)(iVar4 + 0xf4) = fVar5;
  *(float *)(iVar4 + 0xf8) = fVar5;
  *(undefined4 *)(iVar4 + 0xfc) = uVar1;
  return;
}
