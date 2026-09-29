// OoT3D decomp @ 004c4d90  name=FUN_004c4d90  size=604

void FUN_004c4d90(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;

  if (((*(uint *)(DAT_004c4fec + 0x150) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_004c4ff0), iVar4 != 0)) {
    FUN_00350820(DAT_004c4ff8,DAT_004c4ff4,0x34,0xa0);
  }
  fVar10 = DAT_004c5004;
  fVar2 = DAT_004c5000;
  piVar1 = DAT_004c4ffc;
  if (*(short *)(param_1 + 0x2238) != 0) {
    uVar8 = in_fpscr & 0xfffffff;
    in_fpscr = uVar8 | (uint)(*(float *)(param_1 + 0x2240) == DAT_004c5000) << 0x1e;
    bVar7 = false;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      in_fpscr = uVar8 | (uint)(*(float *)(param_1 + 0x2244) == DAT_004c5000) << 0x1e;
      bVar7 = SUB41(in_fpscr >> 0x1e,0);
    }
    if (!bVar7) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c4ffc + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = *(float *)(param_1 + 0x290) + *(float *)(param_1 + 0x294) * fVar9 * DAT_004c5004;
      *(float *)(param_1 + 0x290) = fVar9;
      if (!NAN(fVar9) && !NAN(*(float *)(param_1 + 0x2a0))) {
        *(float *)(param_1 + 0x290) = fVar9 - *(float *)(param_1 + 0x2a0);
      }
      uVar3 = DAT_004c500c;
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar2 <= *(float *)(param_1 + 0x2240)) << 0x1d;
      uVar6 = DAT_004c5008;
      if (!SUB41(uVar8 >> 0x1d,0)) {
        uVar6 = 0x110;
      }
      FUN_002dd7b8(*(undefined4 *)(param_1 + 0x290),DAT_004c500c,ABS(*(float *)(param_1 + 0x2240)),
                   param_1 + 0x254,param_2,0x10c,uVar6,param_1 + 0xd00);
      in_fpscr = uVar8 & 0xfffffff | (uint)(fVar2 <= *(float *)(param_1 + 0x2244)) << 0x1d;
      uVar6 = DAT_004c5010;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        uVar6 = DAT_004c5014;
      }
      FUN_002c371c(*(undefined4 *)(param_1 + 0x290),uVar3,ABS(*(float *)(param_1 + 0x2244)),
                   param_1 + 0x254,param_2,0x10c,uVar6,DAT_004c4ff8);
      FUN_002bcf48(fVar10,param_1 + 0x254,param_2);
      goto LAB_004c4f2c;
    }
  }
  iVar4 = FUN_0036b4ec(param_1 + 0x254,param_2);
  if (iVar4 != 0) {
    if (-1 < *(short *)(param_1 + 0x2248)) {
      *(undefined2 *)(param_1 + 0x2248) = 2;
    }
    FUN_00359aa0(param_1 + 0x254,param_2,0x10c);
    *(undefined2 *)(param_1 + 0x2238) = 1;
  }
LAB_004c4f2c:
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x6a),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(fVar2,fVar10 * DAT_004c5018,param_1 + 0x221c);
  uVar3 = DAT_004c501c;
  if (*(short *)(param_1 + 0x2248) == 0) {
    FUN_0034bc38(DAT_004c501c,param_1,param_2);
    return;
  }
  if (*(short *)(param_1 + 0x2248) == 3) {
    FUN_0036055c(param_2,param_1,DAT_004c5020,0);
    uVar6 = DAT_004c5024;
    uVar5 = FUN_003603c0(param_1 + 0x254,DAT_004c5024);
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00360190(DAT_004c5028,fVar2,uVar5,uVar3,param_1 + 0x254,param_2,uVar6,2);
    return;
  }
  return;
}
