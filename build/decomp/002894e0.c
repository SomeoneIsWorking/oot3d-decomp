// OoT3D decomp @ 002894e0  name=FUN_002894e0  size=600

void FUN_002894e0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;

  fVar2 = DAT_00289754;
  fVar7 = DAT_00289744;
  uVar1 = DAT_00289738;
  bVar4 = *(char *)(param_1 + 0xd0) != '\0';
  iVar3 = 0;
  if (bVar4) {
    iVar3 = *(int *)(param_1 + 0x7c);
  }
  if (((bVar4 && iVar3 != 0) &&
      (fVar6 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84),
      (uint)fVar6 <= (uint)DAT_0028973c)) && ((int)fVar6 < DAT_00289740)) {
    uVar5 = in_fpscr & 0xfffffff | (uint)(DAT_00289744 <= fVar6) << 0x1d;
    fVar9 = DAT_00289744;
    if ((SUB41(uVar5 >> 0x1d,0)) && (fVar9 = fVar6, DAT_00289748 < (int)fVar6)) {
      fVar9 = DAT_0028974c;
    }
    fVar9 = DAT_00289754 - fVar9 * DAT_00289750;
    FUN_003687b4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x7c),&local_54);
    local_60 = fVar7;
    local_5c = uVar1;
    local_58 = fVar7;
    FUN_00372070(&local_54,&local_54,&local_60);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(uVar5 >> 0x15) & 3);
    fVar6 = fVar6 * DAT_00289758;
    if (fVar6 != fVar7) {
      fVar7 = (float)FUN_003727f0(fVar6);
      fVar6 = (float)FUN_00372674(fVar6);
      fVar8 = local_54 * fVar7;
      local_54 = local_54 * fVar6 - local_4c * fVar7;
      local_4c = fVar8 + local_4c * fVar6;
      fVar8 = local_44 * fVar7;
      local_44 = local_44 * fVar6 - local_3c * fVar7;
      local_3c = fVar8 + local_3c * fVar6;
      fVar8 = local_34 * fVar7;
      local_34 = local_34 * fVar6 - local_2c * fVar7;
      local_2c = fVar8 + local_2c * fVar6;
    }
    fVar9 = *(float *)(param_1 + 0xcc) * fVar9;
    fVar7 = *(float *)(param_1 + 0x54) * fVar9;
    fVar9 = *(float *)(param_1 + 0x5c) * fVar9;
    local_54 = local_54 * fVar7;
    local_44 = local_44 * fVar7;
    local_34 = local_34 * fVar7;
    local_50 = local_50 * fVar2;
    local_40 = local_40 * fVar2;
    local_30 = local_30 * fVar2;
    local_4c = local_4c * fVar9;
    local_3c = local_3c * fVar9;
    local_2c = local_2c * fVar9;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1178),&local_54);
    *(undefined1 *)(*(int *)(param_1 + 0x1178) + 0xac) = 1;
    if (((*DAT_0028975c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0028975c), iVar3 != 0)) {
      FUN_0036788c(DAT_00289760);
    }
    FUN_00330b98(DAT_0028976c,*(undefined4 *)(param_1 + 0x1178),0);
  }
  return;
}
