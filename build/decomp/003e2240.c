// OoT3D decomp @ 003e2240  name=FUN_003e2240  size=552

void FUN_003e2240(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00370378(param_1 + 0xbc,0,0x800);
  uVar6 = DAT_003e24fc;
  iVar4 = FUN_0036e5e0(DAT_003e2500,DAT_003e24fc,param_1 + 0x1a4);
  fVar8 = *(float *)(param_1 + 0x1e0);
  FUN_003705a0(*(undefined4 *)(param_1 + 0x7e4),DAT_003e2504,param_1 + 0x7e0);
  fVar2 = DAT_003e2508;
  fVar7 = (float)FUN_00372674((fVar8 - DAT_003e2508) * DAT_003e250c);
  iVar5 = DAT_003e2514;
  fVar3 = DAT_003e2510;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x7e0) - fVar7 * DAT_003e2510;
  if (iVar5 < (int)fVar8) {
    FUN_003705a0(DAT_003e251c,DAT_003e2518,param_1 + 0x6c);
  }
  else {
    FUN_003705a0(uVar6,DAT_003e2518,param_1 + 0x6c);
  }
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    *(undefined2 *)(param_1 + 0x22e) = *(undefined2 *)(param_1 + 0x82);
    *(undefined2 *)(param_1 + 0x22c) = 0x2d;
  }
  iVar5 = FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x22e),0xb6);
  if ((iVar5 != 0) &&
     ((*(short *)(param_1 + 0x22c) == 0 ||
      (sVar1 = *(short *)(param_1 + 0x22c) + -1, *(short *)(param_1 + 0x22c) = sVar1, sVar1 == 0))))
  {
    FUN_00368b68(0x2000);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  fVar7 = *(float *)(param_1 + 0xc);
  if (fVar7 < *(float *)(param_1 + 0x2c)) {
    if (*(float *)(param_1 + 0x84) <= fVar7) {
      *(float *)(param_1 + 0x2c) = fVar7;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    FUN_00370350(DAT_003e2528,param_1 + 0x1a4,2);
    *(float *)(param_1 + 0x6c) = fVar2;
    *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) | 1;
    *(undefined2 *)(param_1 + 0x22c) = 0;
    uVar6 = DAT_003e252c;
  }
  else {
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (((DAT_003e2538 <= *(int *)(param_1 + 0x98)) ||
        (DAT_003e253c <= (int)ABS(*(float *)(param_1 + 0x9c)))) ||
       (*(float *)(param_1 + 0xc) + DAT_003e2540 <=
        *(float *)(*(int *)(DAT_003e2530 + param_2) + 0x2c))) {
      return;
    }
    *(undefined2 *)(param_1 + 0x22c) = 300;
    *(byte *)(param_1 + 0x7f8) = *(byte *)(param_1 + 0x7f8) | 1;
    FUN_0036f4e4(fVar3,param_1 + 0x1a4);
    uVar6 = DAT_003e2544;
  }
  *(undefined4 *)(param_1 + 0x228) = uVar6;
  return;
}
