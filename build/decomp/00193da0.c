// OoT3D decomp @ 00193da0  name=FUN_00193da0  size=348

undefined4 FUN_00193da0(int param_1,float *param_2,short *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  float fVar8;

  fVar8 = *param_2 - *(float *)(param_1 + 0x3c);
  fVar7 = param_2[2] - *(float *)(param_1 + 0x44);
  uVar3 = FUN_003758b0(SQRT(fVar8 * fVar8 + fVar7 * fVar7),*(float *)(param_1 + 0x40) - param_2[1]);
  sVar1 = FUN_003758b0(param_2[2] - *(float *)(param_1 + 0x44),*param_2 - *(float *)(param_1 + 0x3c)
                      );
  sVar1 = sVar1 - *(short *)(param_1 + 0x36);
  FUN_00375a18(param_3,uVar3,6,2000,1);
  sVar2 = *param_3;
  iVar4 = DAT_00193efc;
  if ((sVar2 < DAT_00193efc) || (iVar4 = -DAT_00193efc, iVar4 < sVar2)) {
    sVar2 = (short)iVar4;
  }
  *param_3 = sVar2;
  iVar4 = FUN_00375a18(param_3 + 1,(int)sVar1,6,2000,1);
  puVar5 = (undefined1 *)(int)param_3[1];
  puVar6 = DAT_00193f00;
  if ((-0x1f41 < (int)puVar5) && (puVar6 = puVar5, 8000 < (int)puVar5)) {
    puVar6 = &DAT_00001f40;
  }
  param_3[1] = (short)puVar6;
  if ((iVar4 != 0) && (puVar6 + 7999 <= DAT_00193f04)) {
    return 0;
  }
  FUN_00375a18(param_4 + 2,(int)(short)(sVar1 - (short)puVar6),4,2000,1);
  sVar1 = *(short *)(param_4 + 2);
  iVar4 = DAT_00193f08;
  if ((sVar1 < DAT_00193f08) || (iVar4 = -DAT_00193f08, iVar4 < sVar1)) {
    sVar1 = (short)iVar4;
  }
  *(short *)(param_4 + 2) = sVar1;
  return 1;
}
