// OoT3D decomp @ 00255bdc  name=FUN_00255bdc  size=500

void FUN_00255bdc(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;

  iVar3 = *(int *)(DAT_00255dd0 + param_2);
  fVar5 = (float)FUN_00372674(*(float *)(param_1 + 0x1dc) * DAT_00255dd4);
  fVar6 = DAT_00255ddc;
  fVar12 = (DAT_00255dd8 - fVar5) * DAT_00255ddc;
  (**(code **)(param_1 + 0x1e4))(param_1,param_2);
  uVar11 = DAT_00255df0;
  uVar7 = DAT_00255dec;
  fVar5 = DAT_00255de4;
  fVar12 = fVar12 * DAT_00255de0;
  *(float *)(param_1 + 0x5c) = fVar12;
  *(float *)(param_1 + 0x54) = fVar12;
  uVar2 = *(undefined4 *)(iVar3 + 0x2c);
  uVar4 = *(undefined4 *)(iVar3 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar3 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  fVar12 = DAT_00255de8;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar5;
  fVar5 = (fVar12 - *(float *)(param_1 + 0x1dc)) * *(float *)(param_1 + 0x1dc);
  FUN_0036bee0(fVar5 * fVar6,DAT_00255df4,uVar11,uVar7,param_2);
  fVar12 = fVar5 * DAT_00255dfc;
  sVar1 = (short)(int)(fVar5 * DAT_00255df8);
  uVar13 = (uint)(fVar5 * DAT_00255e00);
  uVar11 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                               (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar7 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(uVar7,fVar6 + DAT_00255e04,uVar11,param_1 + 0x1a8,uVar13 & 0xff,uVar13 & 0xff,
               (int)fVar12 & 0xff,(int)sVar1,0);
  fVar6 = (float)FUN_00338f60((int)*(short *)(iVar3 + 0xbe));
  fVar5 = DAT_00255e08;
  fVar14 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_00255e08;
  fVar8 = (float)FUN_002cfca0((int)*(short *)(iVar3 + 0xbe));
  fVar9 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(fVar9 + fVar8 * fVar5,fVar10 + fVar5,fVar14 + fVar6,param_1 + 0x1c4,uVar13 & 0xff,
               uVar13 & 0xff,(int)fVar12 & 0xff,(int)sVar1,0);
  return;
}
