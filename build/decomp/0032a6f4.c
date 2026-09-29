// OoT3D decomp @ 0032a6f4  name=FUN_0032a6f4  size=436

void FUN_0032a6f4(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 extraout_s2;
  undefined4 uVar8;
  undefined4 extraout_s3;
  undefined4 uVar9;
  float local_3c;
  float local_38;
  float local_34;

  uVar6 = DAT_0032a98c;
  fVar5 = DAT_0032a988;
  fVar4 = DAT_0032a984;
  fVar3 = DAT_0032a960;
  piVar2 = DAT_0032a958;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a958 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0032a95c / fVar7 + DAT_0032a960) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    local_3c = *(float *)(param_1 + 0x28) + DAT_0032a968;
    local_38 = *(float *)(param_1 + 0x2c) + DAT_0032a96c;
    local_34 = *(float *)(param_1 + 0x30) + DAT_0032a970;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  uVar1 = *(ushort *)(param_2 + 0x22b8);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032a958 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar8 = DAT_0032a954;
  uVar9 = DAT_0032a94c;
  if ((int)(DAT_0032a980 / fVar7 + DAT_0032a960) == (uint)uVar1) {
    local_3c = *(float *)(param_1 + 0x28) + DAT_0032a984;
    local_38 = *(float *)(param_1 + 0x2c) + DAT_0032a964;
    local_34 = *(float *)(param_1 + 0x30) + DAT_0032a988;
    FUN_003308a4(DAT_0032a98c,fVar7,DAT_0032a954,DAT_0032a94c,param_2,&local_3c);
    uVar8 = extraout_s2;
    uVar9 = extraout_s3;
  }
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0032a990 / fVar7 + fVar3) == (uint)uVar1) {
    local_3c = *(float *)(param_1 + 0x28) + fVar4;
    local_38 = *(float *)(param_1 + 0x2c) + DAT_0032a994;
    local_34 = *(float *)(param_1 + 0x30) + fVar5;
    FUN_003308a4(uVar6,DAT_0032a994,uVar8,uVar9,param_2,&local_3c);
  }
  return;
}
