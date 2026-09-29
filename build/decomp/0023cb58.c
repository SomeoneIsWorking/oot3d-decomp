// OoT3D decomp @ 0023cb58  name=FUN_0023cb58  size=980

undefined4 FUN_0023cb58(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined4 extraout_s0;
  undefined4 uVar9;
  undefined4 extraout_s1;
  undefined4 uVar10;
  undefined4 extraout_s2;
  short local_48;
  undefined2 local_46;
  undefined4 local_40;
  short local_3c;
  undefined2 local_3a;
  float local_38;
  float local_34;
  undefined4 uStack_30;

  local_34 = (float)FUN_00367ef0(*(undefined4 *)(param_1 + 0xd8));
  iVar7 = *(int *)(param_1 + 0xd8);
  pfVar6 = (float *)(param_1 + 0xdc);
  pfVar5 = (float *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0xc) =
       **(undefined2 **)
         (*(int *)(DAT_0023cf2c + *(short *)(param_1 + 0x18a) * 8 + 4) +
         *(short *)(param_1 + 0x18c) * 8 + 4);
  local_38 = *pfVar6;
  fVar4 = *(float *)(param_1 + 0xe0);
  uStack_30 = *(undefined4 *)(param_1 + 0xe4);
  local_34 = fVar4 + local_34;
  *(int *)((int)DAT_0023cf30 + 0x14) = (int)(short)*(ushort *)(param_1 + 0xc);
  if (*(short *)(param_1 + 0x1a6) == 0) {
    FUN_00338c04(param_1);
    *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) & 0xfffb;
    psVar2 = (short *)FUN_00338c5c(*(int *)(param_1 + 0xd4) + 0xa98,(int)*(short *)(param_1 + 400),
                                   0x32);
    if (-1 < psVar2[8]) {
      *(undefined1 *)(param_1 + 0x1b6) = 0;
      fVar4 = (float)VectorSignedToFloat((int)psVar2[8],(byte)(in_fpscr >> 0x15) & 3);
      fVar4 = fVar4 * DAT_0023cf34;
      *(float *)(param_1 + 0xd0) = fVar4;
      if ((int)fVar4 < 0x34000001) {
        fVar4 = DAT_0023cf38;
      }
      *(float *)(param_1 + 0xd0) = fVar4;
    }
    uVar8 = VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar9 = VectorSignedToFloat((int)psVar2[1],(byte)(in_fpscr >> 0x15) & 3);
    uVar10 = VectorSignedToFloat((int)psVar2[2],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x20) = uVar8;
    *(undefined4 *)(param_1 + 0x24) = uVar9;
    *(undefined4 *)(param_1 + 0x28) = uVar10;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xac);
    FUN_0035fb94(&local_48,psVar2 + 3);
    iVar3 = (int)psVar2[6];
    if (iVar3 != -1) {
      fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar3 < 0x169) {
        *(float *)(param_1 + 0x144) = fVar4;
      }
      else {
        *(float *)(param_1 + 0x144) = fVar4 * DAT_0023cf3c;
      }
    }
    sVar1 = psVar2[7];
    *(short *)(param_1 + 0x1c) = sVar1;
    if (sVar1 == -1) {
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 8) + *(short *)(param_1 + 6);
    }
    local_40 = FUN_00338a90(&local_38,param_1 + 0x8c);
    local_3a = local_46;
    local_3c = -local_48;
    FUN_0035579c(&local_40);
    *(undefined4 *)(param_1 + 0x2c) = extraout_s0;
    *(undefined4 *)(param_1 + 0x30) = extraout_s1;
    *(undefined4 *)(param_1 + 0x34) = extraout_s2;
    FUN_00330e1c(param_1 + 0x20,pfVar6,param_1 + 0x80);
    fVar4 = *(float *)(param_1 + 0xe4);
    *pfVar5 = *pfVar6;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xe0);
    *(float *)(param_1 + 0x18) = fVar4;
    *(short *)(param_1 + 0x1a6) = *(short *)(param_1 + 0x1a6) + 1;
  }
  uVar8 = DAT_0023cf40;
  if ((*(uint *)(iVar7 + 0x1710) & 0x20000000) != 0) {
    fVar4 = *(float *)(param_1 + 0xe0);
    *pfVar5 = *pfVar6;
    *(float *)(param_1 + 0x14) = fVar4;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xe4);
  }
  sVar1 = *(short *)(param_1 + 0x1c);
  if ((*(ushort *)(param_1 + 0xc) & 1) == 0) {
    if (sVar1 < 1) {
      *pfVar5 = *pfVar6;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xe4);
    }
    else {
      sVar1 = sVar1 + -1;
      if (sVar1 == 0) {
        fVar4 = DAT_0023cf30;
      }
      *(short *)(param_1 + 0x1c) = sVar1;
      if (sVar1 == 0) {
        *(undefined4 *)((int)fVar4 + 0x14) = 0;
      }
    }
    if (((*(uint *)(iVar7 + 0x1710) & 0x20000000) == 0) &&
       ((DAT_0023cf48 < *(int *)(param_1 + 0x120) || (iVar7 = FUN_003389e0(), iVar7 != 0)))) {
      uVar9 = FUN_00338a90(param_1 + 0x80,param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0x124) = uVar9;
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x80) - *pfVar6;
      *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0xe0);
      *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0xe4);
      *(undefined4 *)(param_1 + 0x148) = uVar8;
      FUN_00338864(param_1,(int)*(short *)(param_1 + 0x19c),2);
      *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) | 4;
    }
  }
  else if (sVar1 < 1) {
    if (((*(uint *)(iVar7 + 0x1710) & 0x20000000) == 0) &&
       ((iVar7 = FUN_00367e60(pfVar6,pfVar5), DAT_0023cf44 <= iVar7 ||
        (iVar7 = FUN_003389e0(), iVar7 != 0)))) {
      uVar9 = FUN_00338a90(param_1 + 0x80,param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0x124) = uVar9;
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x80) - *pfVar6;
      *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0xe0);
      *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0xe4);
      *(undefined4 *)(param_1 + 0x148) = uVar8;
      *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) | 4;
      FUN_00338864(param_1,(int)*(short *)(param_1 + 0x19c),2);
    }
  }
  else {
    *(short *)(param_1 + 0x1c) = sVar1 + -1;
    *pfVar5 = *pfVar6;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xe4);
  }
  return 1;
}
