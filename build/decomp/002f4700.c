// OoT3D decomp @ 002f4700  name=FUN_002f4700  size=124

void FUN_002f4700(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 extraout_s1;
  float fVar9;

  iVar6 = DAT_002f4790;
  fVar5 = DAT_002f478c;
  uVar4 = DAT_002f4788;
  fVar3 = DAT_002f4784;
  uVar2 = DAT_002f4780;
  iVar1 = DAT_002f477c;
  iVar7 = 0;
  do {
    if (*(int *)(iVar6 + iVar7 * 4) != 0) {
      if (*(int *)(iVar1 + 8) < 4) {
        param_2 = uVar4;
      }
      if (3 < *(int *)(iVar1 + 8)) {
        param_2 = uVar2;
      }
      fVar8 = fVar3;
      if (param_3 != 0) {
        fVar8 = fVar5;
      }
      fVar9 = (float)VectorSignedToFloat(iVar7 * 0x16,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002e946c(fVar9 + fVar8,param_2);
      param_2 = extraout_s1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return;
}
