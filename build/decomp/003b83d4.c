// OoT3D decomp @ 003b83d4  name=FUN_003b83d4  size=660

uint FUN_003b83d4(int param_1,int param_2,float *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_s0;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  float unaff_s16;
  float local_34;
  undefined2 local_30;
  undefined2 local_2e;

  fVar9 = DAT_003b8668;
  param_4 = param_4 + param_1 * 0x34;
  uVar5 = 0;
  fVar3 = (float)((int)param_3[0x10] + 1);
  param_3[0x10] = fVar3;
  iVar2 = DAT_003b8674;
  fVar10 = (float)VectorSignedToFloat(fVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = *(float *)(param_4 + 0x30);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar8) << 0x1f;
  uVar7 = uVar1 | (uint)(NAN(fVar10) || NAN(fVar8)) << 0x1c;
  if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar7 >> 0x1c) & 1)) {
    bVar6 = *(int *)(param_4 + 0x34) != -1;
    uVar5 = (uint)bVar6;
    fVar3 = fVar9;
    if (!bVar6) {
      uVar5 = 0xffffffff;
    }
  }
  else {
    fVar3 = (float)VectorSignedToFloat(fVar3,(byte)(uVar7 >> 0x15) & 3);
    fVar3 = fVar3 / fVar8;
  }
  iVar4 = *(int *)(param_4 + 0x2c);
  fVar8 = fVar3;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      fVar8 = (float)FUN_0037103c(fVar3 * DAT_003b866c * DAT_003b8670);
      fVar8 = fVar3 + *(float *)(iVar2 + 0x74) * DAT_003b867c * fVar8;
    }
    else {
      fVar8 = unaff_s16;
      if (iVar4 == 2) {
        fVar8 = (float)FUN_0037103c(fVar3 * DAT_003b866c * DAT_003b8670);
        fVar8 = fVar3 + *(float *)(iVar2 + 0x74) * DAT_003b8678 * fVar8;
      }
    }
  }
  if (*(int *)(param_4 + 0x1c) != 0) {
    fVar3 = fVar9 - fVar8;
    *(float *)(param_2 + 0x80) = param_3[10] * fVar3 + param_3[0xd] * fVar8;
    *(float *)(param_2 + 0x84) = param_3[0xb] * fVar3 + param_3[0xe] * fVar8;
    *(float *)(param_2 + 0x88) = param_3[0xc] * fVar3 + param_3[0xf] * fVar8;
  }
  if (*(int *)(param_4 + 4) == 1) {
    fVar9 = fVar9 - fVar8;
    *(float *)(param_2 + 0x8c) = *param_3 * fVar9 + param_3[5] * fVar8;
    uVar11 = VectorSignedToFloat((int)(short)(int)(param_3[1] * fVar9 + param_3[6] * fVar8),
                                 (byte)(uVar7 >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x90) = uVar11;
    uVar11 = VectorSignedToFloat((int)(short)(int)(param_3[2] * fVar9 + param_3[7] * fVar8),
                                 (byte)(uVar7 >> 0x15) & 3);
    *(undefined4 *)(param_2 + 0x94) = uVar11;
    *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x94);
  }
  else if (*(int *)(param_4 + 4) == 2) {
    uVar1 = uVar7 & 0xfffffff | (uint)(*(float *)(param_4 + 0x14) == DAT_003b8680) << 0x1e;
    if (SUB41(uVar1 >> 0x1e,0)) {
      local_34 = param_3[3];
    }
    else {
      local_34 = param_3[3] * (fVar9 - fVar8) + *(float *)(param_4 + 0x14) * fVar8;
    }
    if (*(short *)(param_4 + 0x1a) == 0) {
      local_2e = *(undefined2 *)((int)param_3 + 0x12);
    }
    else {
      fVar3 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x12),
                                         (byte)(uVar1 >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1a),(byte)(uVar1 >> 0x15) & 3)
      ;
      local_2e = (undefined2)(int)(fVar3 * (fVar9 - fVar8) + fVar10 * fVar8);
    }
    if (*(short *)(param_4 + 0x18) == 0) {
      local_30 = *(undefined2 *)(param_3 + 4);
    }
    else {
      fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 4),(byte)(uVar1 >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x18),(byte)(uVar1 >> 0x15) & 3)
      ;
      local_30 = (undefined2)(int)(fVar3 * (fVar9 - fVar8) + fVar10 * fVar8);
    }
    FUN_00372448(param_2 + 0x80,&local_34);
    *(undefined4 *)(param_2 + 0xa4) = extraout_s0;
    *(undefined4 *)(param_2 + 0xa8) = extraout_s1;
    *(undefined4 *)(param_2 + 0xac) = extraout_s2;
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0xac);
  }
  return uVar5;
}
