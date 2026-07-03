// OoT3D decomp @ 0023d904  name=FUN_0023d904  size=996

undefined4 FUN_0023d904(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  undefined4 extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_s0_00;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar12;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  float fVar13;
  short local_40;
  undefined2 local_3e;
  undefined4 local_38;
  short local_34;
  undefined2 local_32;
  
  fVar6 = (float)FUN_00367ef0(*(undefined4 *)(param_1 + 0xd8));
  fVar10 = DAT_0023dd04;
  iVar5 = DAT_0023dd00;
  *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xffef;
  uVar3 = DAT_0023dd18;
  psVar4 = *(short **)
            (*(int *)(iVar5 + *(short *)(param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 0x18c) * 8 + 4);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023dd08 + 0x1f0),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023dd08 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xc) =
       fVar12 * DAT_0023dd0c * fVar6 *
       ((DAT_0023dd10 + fVar13 * DAT_0023dd0c) - (fVar10 / fVar6) * fVar9 * DAT_0023dd0c);
  iVar5 = DAT_0023dd14;
  uVar7 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  sVar2 = psVar4[4];
  *(short *)(param_1 + 0x14) = sVar2;
  *(int *)(iVar5 + 0x14) = (int)sVar2;
  switch(*(undefined2 *)(param_1 + 0x1a6)) {
  case 0:
    FUN_00338c04(param_1);
    *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xfff3;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x144);
    uVar7 = FUN_00338a90(param_1 + 0x80,param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_0023d9ec_caseD_2;
  case 3:
    goto switchD_0023d9ec_caseD_3;
  case 4:
    goto switchD_0023d9ec_caseD_4;
  case 5:
    goto switchD_0023d9ec_caseD_5;
  default:
    goto switchD_0023d9ec_caseD_6;
  }
  sVar2 = *(short *)(param_1 + 6);
  *(short *)(param_1 + 6) = sVar2 + -1;
  if (sVar2 < 1) {
    psVar4 = (short *)FUN_00338c5c(*(int *)(param_1 + 0xd4) + 0xa98,(int)*(short *)(param_1 + 400),
                                   0x32);
    if (-1 < psVar4[8]) {
      *(undefined1 *)(param_1 + 0x1b6) = 0;
      fVar10 = (float)VectorSignedToFloat((int)psVar4[8],(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * DAT_0023dd1c;
      *(float *)(param_1 + 0xd0) = fVar10;
      if ((int)fVar10 < 0x34000001) {
        fVar10 = DAT_0023dd20;
      }
      *(float *)(param_1 + 0xd0) = fVar10;
    }
    uVar7 = VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    uVar11 = VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
    uVar8 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0xa4) = uVar7;
    *(undefined4 *)(param_1 + 0xa8) = uVar11;
    *(undefined4 *)(param_1 + 0xac) = uVar8;
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xac);
    FUN_0035fb94(&local_40,psVar4 + 3);
    local_38 = uVar3;
    local_32 = local_3e;
    local_34 = -local_40;
    FUN_00372448(param_1 + 0x8c,&local_38);
    *(undefined4 *)(param_1 + 0x80) = extraout_s0;
    *(undefined4 *)(param_1 + 0x84) = extraout_s1;
    *(undefined4 *)(param_1 + 0x88) = extraout_s2;
    *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
switchD_0023d9ec_caseD_2:
    if ((*(ushort *)(param_1 + 0x14) & 4) != 0) {
      *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0xdc);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xe4);
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0xc) + fVar6;
    }
    sVar2 = *(short *)(param_1 + 8);
    *(short *)(param_1 + 8) = sVar2 + -1;
    if (sVar2 < 1) {
      *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
switchD_0023d9ec_caseD_3:
      uVar1 = *(ushort *)(param_1 + 0x194);
      *(ushort *)(param_1 + 0x194) = uVar1 | 0x410;
      if ((uVar1 & 8) != 0) {
        *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
switchD_0023d9ec_caseD_4:
        if ((*(ushort *)(param_1 + 0x14) & 2) == 0) {
          *(undefined2 *)(param_1 + 10) = 5;
          if ((DAT_0023dd24 < *(int *)(param_1 + 0x120)) || (iVar5 = FUN_003389e0(), iVar5 != 0)) {
            *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
switchD_0023d9ec_caseD_5:
            uVar11 = DAT_0023dd2c;
            uVar7 = DAT_0023dd28;
            uVar8 = FUN_00355780(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x144),
                                 DAT_0023dd2c,DAT_0023dd28);
            *(undefined4 *)(param_1 + 0x144) = uVar8;
            FUN_00372474(&local_38,param_1 + 0x80,param_1 + 0x8c);
            local_38 = FUN_00355780(uVar3,local_38,uVar11,uVar7);
            FUN_00372448(param_1 + 0x80,&local_38);
            *(undefined4 *)(param_1 + 0xa4) = extraout_s0_00;
            *(undefined4 *)(param_1 + 0xa8) = extraout_s1_00;
            *(undefined4 *)(param_1 + 0xac) = extraout_s2_00;
            *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xa4);
            *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa8);
            *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xac);
            sVar2 = *(short *)(param_1 + 10);
            *(short *)(param_1 + 10) = sVar2 + -1;
            if (sVar2 < 1) {
              *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
switchD_0023d9ec_caseD_6:
              *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xfff7 | 4;
              *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x10);
              FUN_00338864(param_1,(int)*(short *)(param_1 + 0x19c),2);
              *(undefined4 *)(param_1 + 0x148) = DAT_0023dd30;
              *(float *)(param_1 + 300) = *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0xdc);
              *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0xe0);
              *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0xe4);
            }
          }
        }
        else {
          *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xfff7 | 4;
          FUN_00338864(param_1,0x18,2);
        }
      }
    }
  }
  return 1;
}

