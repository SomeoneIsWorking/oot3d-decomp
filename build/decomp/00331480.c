// OoT3D decomp @ 00331480  name=FUN_00331480  size=684

int FUN_00331480(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [12];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;

  iVar1 = DAT_0033172c;
  if ((*(uint *)(DAT_0033172c + 0x30) & 1) == 0) {
    FUN_003679b4(DAT_0033172c + 0x30);
  }
  fVar7 = (float)FUN_002cfca0(param_2);
  fVar8 = (float)FUN_00338f60(param_2);
  fVar9 = (float)FUN_00367ef0(*(undefined4 *)(param_1 + 0xd8));
  pfVar4 = DAT_00331738;
  fVar3 = DAT_00331734;
  piVar2 = DAT_00331730;
  iVar6 = *DAT_00331730;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x1ba),(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x1b6),(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar12 * DAT_00331734 * fVar9;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x1b8),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * DAT_00331734 * fVar9;
  local_3c = *(float *)(param_1 + 0xdc);
  local_44 = *(float *)(param_1 + 0x14c) + fVar11 * DAT_00331734 * fVar9;
  local_48 = local_3c + fVar12 * fVar7;
  local_34 = *(float *)(param_1 + 0xe4);
  local_40 = local_34 + fVar12 * fVar8;
  local_38 = local_44;
  if ((param_3 == 0) && ((*(uint *)(*(int *)(param_1 + 0xd4) + 0xf8) & 1) != 0)) {
    fVar13 = (float)FUN_00367e60(&local_3c,DAT_00331738);
    fVar7 = DAT_0033173c;
    *pfVar4 = *pfVar4 + pfVar4[3] * DAT_0033173c;
    pfVar4[1] = pfVar4[1] + pfVar4[4] * fVar7;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar13) << 0x1d;
    pfVar4[2] = pfVar4[2] + pfVar4[5] * fVar7;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      uVar10 = FUN_003552bc(param_1,auStack_54,&local_48,auStack_58);
      pfVar4 = DAT_00331738;
      *(undefined4 *)(iVar1 + 0x34) = uVar10;
      uVar10 = FUN_003552bc(param_1,auStack_54,pfVar4,auStack_58);
      *(undefined4 *)(iVar1 + 0x38) = uVar10;
      iVar6 = *(int *)(iVar1 + 0x34);
    }
    else {
      iVar6 = FUN_003552bc(param_1,auStack_54,DAT_00331738,auStack_58);
      *(int *)(iVar1 + 0x38) = iVar6;
      *(int *)(iVar1 + 0x34) = iVar6;
      fVar12 = fVar13;
    }
    iVar5 = DAT_00331740;
    if (iVar6 == DAT_00331740) {
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x14c);
    }
    if (*(int *)(iVar1 + 0x38) == iVar5) {
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x34);
    }
  }
  else {
    *DAT_00331738 = local_3c + fVar13 * fVar7;
    pfVar4[1] = local_44;
    pfVar4[2] = local_34 + fVar13 * fVar8;
    FUN_003553fc(param_1,&local_3c,pfVar4);
    if (param_3 != 0) {
      uVar10 = *(undefined4 *)(param_1 + 0x14c);
      *(undefined4 *)(iVar1 + 0x38) = uVar10;
      *(undefined4 *)(iVar1 + 0x34) = uVar10;
    }
  }
  fVar9 = *(float *)(param_1 + 0x14c);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1bc),(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = *(float *)(iVar1 + 0x38);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1bc),(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = DAT_00331744 - fVar8 * fVar3;
  fVar8 = (float)FUN_003696ec((*(float *)(iVar1 + 0x34) - fVar9) * fVar7 * fVar3,fVar12);
  fVar7 = DAT_00331750;
  fVar12 = DAT_0033174c;
  fVar3 = DAT_00331748;
  fVar8 = DAT_00331750 + fVar8 * DAT_00331748 * DAT_0033174c;
  fVar9 = (float)FUN_003696ec((fVar14 - fVar9) * fVar11,fVar13);
  return (int)(short)((short)(int)(fVar7 + fVar9 * fVar3 * fVar12) + (short)(int)fVar8);
}
