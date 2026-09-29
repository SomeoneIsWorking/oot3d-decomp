// OoT3D decomp @ 001741c8  name=FUN_001741c8  size=384

void FUN_001741c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  short sVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  iVar1 = DAT_00174348;
  uVar7 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00174348 + 0x10));
  uVar3 = DAT_00174350;
  uVar2 = DAT_0017434c;
  VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00174350,param_1 + 0x1a4,*(undefined4 *)(iVar1 + 0x10),2);
  uVar7 = DAT_00174358;
  *(undefined4 *)(param_1 + 0x708) = DAT_00174354;
  FUN_0037572c(uVar7,param_1);
  *(undefined2 *)(param_1 + 0x710) = 0;
  *(undefined2 *)(param_1 + 0x724) = 8;
  uVar6 = FUN_0036e800(param_1,*(undefined4 *)(DAT_0017435c + param_2));
  *(undefined2 *)(param_1 + 0xbe) = uVar6;
  *(undefined2 *)(param_1 + 0x36) = uVar6;
  if (*(short *)(param_1 + 0x1c) < 6) {
    FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_00174360);
  }
  else {
    FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_00174364);
  }
  fVar5 = DAT_00174370;
  uVar4 = DAT_0017436c;
  uVar7 = DAT_00174368;
  sVar8 = 0;
  do {
    fVar9 = (float)FUN_003738a8(uVar7);
    fVar10 = (float)FUN_003738a8(uVar4);
    fVar13 = *(float *)(param_1 + 0x30);
    fVar11 = (float)FUN_003738a8(uVar4);
    fVar14 = *(float *)(param_1 + 0x2c);
    fVar12 = (float)FUN_003738a8(uVar4);
    FUN_0036aa20(fVar12 + *(float *)(param_1 + 0x28),fVar11 + fVar5 + fVar14,fVar10 + fVar13,
                 param_2 + 0x208c,param_1,param_2,0x2b,0,(int)(short)(int)fVar9,0,
                 (int)(short)(sVar8 + 10));
    sVar8 = sVar8 + 1;
  } while (sVar8 < 0xf);
  *(undefined4 *)(param_1 + 0x728) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  return;
}
