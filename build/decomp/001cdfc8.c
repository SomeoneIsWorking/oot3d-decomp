// OoT3D decomp @ 001cdfc8  name=FUN_001cdfc8  size=538

undefined4 FUN_001cdfc8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  byte *pbVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;

  pbVar6 = (byte *)(*(int *)(DAT_001ce1e4 + param_2) +
                   ((uint)(int)*(short *)(param_1 + 0x1c) >> 1 & 0x78));
  psVar3 = (short *)(*(int *)(pbVar6 + 4) + *(int *)(param_1 + 0xab0) * 6);
  fVar7 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 - *(float *)(param_1 + 0x28);
  fVar8 = (float)VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 - *(float *)(param_1 + 0x30);
  fVar9 = (float)FUN_003696ec(fVar7,fVar8);
  fVar9 = fVar9 * DAT_001ce1e8;
  fVar7 = SQRT(fVar7 * fVar7 + fVar8 * fVar8);
  if (((int)fVar7 <= DAT_001ce1ec) &&
     (iVar4 = *(int *)(param_1 + 0xab0) + 1, *(int *)(param_1 + 0xab0) = iVar4,
     (int)(uint)*pbVar6 <= iVar4)) {
    if (*(int *)(param_1 + 0xac0) != 0) {
      FUN_0033f624(param_1,param_2);
    }
    uVar5 = FUN_00374428(param_1);
    return uVar5;
  }
  FUN_00375a18(param_1 + 0xbe,(int)(short)(int)fVar9,1,4000,0);
  uVar5 = DAT_001ce1f0;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_0036e168(*(undefined4 *)(param_1 + 0xab4),DAT_001ce1f4,fVar7,uVar5,param_1 + 0x6c);
  FUN_00376864(param_1);
  FUN_00376340(uVar5,uVar5,uVar5,param_2,param_1,4);
  fVar7 = DAT_001ce1f8;
  if (*(int *)(param_1 + 0xac0) != 0) {
    *(undefined4 *)(param_1 + 0xadc) = *(undefined4 *)(param_1 + 0x28);
    uVar2 = DAT_001ce200;
    uVar1 = DAT_001ce1fc;
    *(float *)(param_1 + 0xae0) = *(float *)(param_1 + 0x2c) + fVar7;
    *(undefined4 *)(param_1 + 0xae4) = *(undefined4 *)(param_1 + 0x30);
    FUN_0036e168(*(undefined4 *)(param_1 + 0x28),uVar2,uVar1,uVar5);
    FUN_0036e168(*(undefined4 *)(param_1 + 0xae0),uVar2,uVar1,uVar5,param_1 + 0xaf8);
    FUN_0036e168(*(undefined4 *)(param_1 + 0xae4),uVar2,uVar1,uVar5,param_1 + 0xafc);
    FUN_00367b14(param_2,(int)(short)*(undefined4 *)(param_1 + 0xac8),param_1 + 0xaf4,
                 param_1 + 0xae8);
    iVar4 = *(int *)(param_1 + 0xac4);
    *(int *)(param_1 + 0xac4) = iVar4 + -1;
    if (iVar4 < 1) {
      FUN_0033f624(param_1,param_2);
    }
  }
  return unaff_r4;
}
