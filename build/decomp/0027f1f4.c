// OoT3D decomp @ 0027f1f4  name=FUN_0027f1f4  size=316

void FUN_0027f1f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;

  fVar1 = DAT_0027f338;
  fVar8 = DAT_0027f330;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  fVar2 = DAT_0027f344;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  param_3[0xb] = *param_4;
  param_3[0xc] = uVar4;
  param_3[0xd] = uVar5;
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  param_3[3] = param_4[4];
  param_3[4] = uVar4;
  param_3[5] = uVar5;
  uVar4 = DAT_0027f33c;
  uVar5 = param_4[8];
  uVar6 = param_4[9];
  param_3[6] = param_4[7];
  param_3[7] = uVar5;
  param_3[8] = uVar6;
  fVar7 = (float)VectorSignedToFloat(param_4[10],(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027f334 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar3 = (undefined2)(int)((fVar7 * fVar8) / fVar9 + fVar1);
  *(undefined2 *)(param_3 + 0x18) = uVar3;
  param_3[10] = uVar4;
  param_3[9] = DAT_0027f340;
  *(undefined2 *)(param_3 + 0x11) = uVar3;
  *(short *)(param_3 + 0x13) = (short)(int)((float)param_4[3] * fVar2);
  uVar3 = FUN_003758b0(param_4[6],param_4[4]);
  *(undefined2 *)((int)param_3 + 0x46) = uVar3;
  *(undefined2 *)(param_3 + 0x12) = 0;
  fVar8 = (float)param_4[4];
  fVar7 = (float)param_4[5];
  fVar9 = (float)FUN_00371e50(DAT_0027f348);
  *(short *)((int)param_3 + 0x4a) =
       (short)(int)((ABS(fVar8) + ABS(fVar7)) * fVar2 * (fVar9 + fVar1));
  uVar4 = FUN_0033a904(param_1,0,1,0x11,0xffffffff);
  param_3[0x1b] = uVar4;
  param_3[0x1e] = 1;
  return;
}
