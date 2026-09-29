// OoT3D decomp @ 0029828c  name=FUN_0029828c  size=712

undefined4 FUN_0029828c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_18;

  if (param_2 == 2) {
    fVar3 = (float)VectorSignedToFloat(-(int)*(short *)(DAT_00298554 + param_4),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00369014(fVar3 * DAT_00298558,param_3,1);
  }
  else if ((param_2 == 1) ||
          ((param_2 == 9 &&
           (iVar1 = *(int *)(param_4 + 0x63c), (iVar1 == 0 || iVar1 == 3) || iVar1 == 4)))) {
    FUN_003255d0(&local_18,*(undefined4 *)(param_4 + 0x1cc),param_2);
    pfVar2 = (float *)FUN_003478bc(*(undefined4 *)(param_4 + 0x1cc),*(undefined2 *)(local_18 + 2));
    fVar3 = DAT_0029855c;
    *pfVar2 = *pfVar2 * DAT_0029855c;
    pfVar2[4] = pfVar2[4] * fVar3;
    pfVar2[8] = pfVar2[8] * fVar3;
    pfVar2[1] = pfVar2[1] * fVar3;
    pfVar2[5] = pfVar2[5] * fVar3;
    fVar5 = DAT_00298560;
    pfVar2[9] = pfVar2[9] * fVar3;
    pfVar2[2] = pfVar2[2] * fVar3;
    pfVar2[6] = pfVar2[6] * fVar3;
    pfVar2[10] = pfVar2[10] * fVar3;
    FUN_00369014(*(float *)(param_4 + 0x670) * fVar5,pfVar2,1);
    FUN_003735e8(*(float *)(param_4 + 0x670) * DAT_00298564,pfVar2,1);
    FUN_00371234(*(float *)(param_4 + 0x670) * DAT_00298568,pfVar2,1);
    fVar4 = fVar3 - *(float *)(param_4 + 0x678);
    fVar5 = *(float *)(param_4 + 0x678) + fVar3;
    *pfVar2 = *pfVar2 * fVar4;
    pfVar2[4] = pfVar2[4] * fVar4;
    pfVar2[8] = pfVar2[8] * fVar4;
    pfVar2[1] = pfVar2[1] * fVar5;
    pfVar2[5] = pfVar2[5] * fVar5;
    pfVar2[9] = pfVar2[9] * fVar5;
    pfVar2[2] = pfVar2[2] * fVar4;
    pfVar2[6] = pfVar2[6] * fVar4;
    fVar5 = DAT_0029856c;
    pfVar2[10] = pfVar2[10] * fVar4;
    FUN_00371234(*(float *)(param_4 + 0x670) * fVar5,pfVar2,1);
    FUN_003735e8(*(float *)(param_4 + 0x670) * DAT_00298570,pfVar2,1);
    FUN_00369014(*(float *)(param_4 + 0x670) * DAT_00298574,pfVar2,1);
    if (((*DAT_00298578 & 1) == 0) &&
       (iVar1 = FUN_003679b4(DAT_00298578), pfVar2 = DAT_00298580, fVar5 = DAT_0029857c, iVar1 != 0)
       ) {
      *DAT_00298580 = fVar3;
      pfVar2[1] = fVar5;
      pfVar2[2] = fVar5;
      pfVar2[3] = fVar5;
      pfVar2[4] = fVar5;
      pfVar2[5] = fVar3;
      pfVar2[6] = fVar5;
      pfVar2[7] = fVar5;
      pfVar2[8] = fVar5;
      pfVar2[9] = fVar5;
      pfVar2[10] = fVar3;
      pfVar2[0xb] = fVar5;
    }
  }
  return 0;
}
