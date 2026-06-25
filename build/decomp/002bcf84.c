// OoT3D decomp @ 002bcf84  name=FUN_002bcf84  size=364

void FUN_002bcf84(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  
  iVar4 = (int)*(short *)(DAT_002bd0f0 + 4);
  if (DAT_002bd0f4 < (uint)(iVar4 + ((int)DAT_002bd0f4 >> 1))) {
    iVar2 = DAT_002bd0f8;
    if ((iVar4 < DAT_002bd0f8) ||
       (iVar2 = -DAT_002bd0f8, iVar4 != iVar2 && iVar4 + DAT_002bd0f8 < 0 == SBORROW4(iVar4,iVar2)))
    {
      iVar4 = iVar2;
    }
  }
  else {
    iVar4 = 0;
  }
  fVar8 = (float)FUN_00370378(param_1 + 0x2288,iVar4,400);
  uVar3 = (uint)*(byte *)(param_1 + 0x1b3);
  if (uVar3 != 3) {
    fVar5 = (float)(int)*(short *)(DAT_002bd100 + param_1);
    if (fVar5 == 0.0) {
      fVar8 = *(float *)(param_1 + 0x1760);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == DAT_002bd104) << 0x1e |
                 (uint)(DAT_002bd104 <= fVar8) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) goto LAB_002bd018;
    }
    bVar7 = fVar5 == 0.0;
    if (!bVar7) {
      fVar8 = fVar5;
    }
    fVar5 = DAT_002bd10c;
    if (bVar7) {
      fVar8 = *(float *)(param_1 + 0x1760);
      fVar5 = DAT_002bd108;
    }
    if (!bVar7) {
      fVar8 = (float)VectorSignedToFloat(fVar8,(byte)(in_fpscr >> 0x15) & 3);
    }
    fVar8 = ABS(*(float *)(param_1 + 0x221c)) * DAT_002bd110 * fVar8 * fVar5;
    if (0x3f800000 < (int)fVar8) {
      fVar8 = DAT_002bd114;
    }
    if (fVar8 < DAT_002bd104) {
      fVar8 = -fVar8;
      uVar6 = 0xce;
    }
    else {
      uVar6 = 199;
    }
    if (param_2 == 0) {
      FUN_002dd7b8();
      return;
    }
    FUN_002c371c(*(undefined4 *)(param_1 + 0x2254),*(undefined4 *)(param_1 + 0x2254),fVar8,
                 param_1 + 0x254,param_3,*(undefined4 *)(DAT_002bd0fc + uVar3 * 4 + 0x18),uVar6,
                 param_1 + 0xd00);
    return;
  }
LAB_002bd018:
  iVar4 = DAT_002bd0fc + uVar3 * 4;
  if (param_2 == 0) {
    FUN_00317dbc(param_1 + 0x254,*(undefined4 *)(iVar4 + 0x18));
    FUN_002bd118(*(undefined4 *)(param_1 + 0x2254),param_1 + 0x254,param_3,
                 *(undefined4 *)(param_1 + 0x284),param_4);
    return;
  }
  FUN_002bcaa4(*(undefined4 *)(param_1 + 0x2254),param_1 + 0x254,param_3,
               *(undefined4 *)(iVar4 + 0x18),param_4);
  return;
}

