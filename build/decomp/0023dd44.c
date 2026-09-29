// OoT3D decomp @ 0023dd44  name=FUN_0023dd44  size=368

undefined4 FUN_0023dd44(ushort *param_1)

{
  ushort uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  float local_1c;
  float local_18;
  undefined4 uStack_14;

  iVar4 = DAT_0023deb4;
  uVar1 = **(ushort **)
            (*(int *)(DAT_0023deb4 + (short)param_1[0xc5] * 8 + 4) + (short)param_1[0xc6] * 8 + 4);
  *param_1 = uVar1;
  *(int *)(iVar4 + -0x140) = (int)(short)uVar1;
  if (param_1[0xd3] == 0) {
    param_1[0xd3] = 1;
    piVar2 = DAT_0023debc;
    *(undefined4 *)(param_1 + 0x88) = DAT_0023deb8;
    iVar4 = *piVar2;
    uVar7 = VectorSignedToFloat((int)*(short *)(iVar4 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x86) = uVar7;
    uVar7 = VectorSignedToFloat((int)*(short *)(iVar4 + 0x1a0),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x84) = uVar7;
    fVar3 = DAT_0023dec0;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x198),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8a) = fVar8 * DAT_0023dec0;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x19a),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8c) = fVar8 * fVar3;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x19c),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8e) = fVar8 * fVar3;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar7 = FUN_00338a90(param_1 + 0x40,param_1 + 0x46);
    *(undefined4 *)(param_1 + 0x92) = uVar7;
  }
  else {
    local_18 = (float)FUN_00367ef0();
    local_1c = *(float *)(param_1 + 0x6e);
    uStack_14 = *(undefined4 *)(param_1 + 0x72);
    local_18 = *(float *)(param_1 + 0x70) + local_18;
    uVar7 = FUN_00338a90(&local_1c,param_1 + 0x46);
    *(undefined4 *)(param_1 + 0x92) = uVar7;
    *(float *)(param_1 + 0x96) = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x6e);
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x42) - *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x9a) = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x72);
  }
  uVar5 = *param_1 & 1;
  bVar6 = (*param_1 & 1) != 0;
  if (bVar6) {
    uVar5 = (uint)(short)param_1[0xd4];
  }
  if (bVar6 && 0 < (int)uVar5) {
    param_1[0xd4] = (short)uVar5 - 1;
  }
  return 1;
}
