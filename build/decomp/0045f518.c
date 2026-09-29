// OoT3D decomp @ 0045f518  name=FUN_0045f518  size=588

void FUN_0045f518(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_84;
  float local_80 [18];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;

  iVar6 = FUN_0047a910();
  uVar5 = DAT_0045f778;
  fVar3 = DAT_0045f770;
  fVar2 = DAT_0045f76c;
  fVar1 = DAT_0045f768;
  local_38 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 3),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_34 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 2),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_30 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 1),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_38 = local_38 * DAT_0045f764;
  local_34 = local_34 * DAT_0045f764;
  local_30 = local_30 * DAT_0045f764;
  local_2c = DAT_0045f768;
  *(float *)(iVar6 + 0xf0) = local_38;
  *(float *)(iVar6 + 0xf4) = local_34;
  *(float *)(iVar6 + 0xf8) = local_30;
  *(float *)(iVar6 + 0xfc) = fVar1;
  puVar4 = DAT_0045f774;
  if (fVar2 < *(float *)(param_1 + 0xc)) {
    fVar10 = fVar1 / *(float *)(param_1 + 0xc);
    pfVar9 = &local_84;
    iVar7 = 9;
    fVar11 = DAT_0045f77c[1];
    pfVar8 = DAT_0045f77c;
    do {
      iVar7 = iVar7 + -1;
      fVar12 = pfVar8[2];
      pfVar9[1] = fVar11 * fVar10;
      pfVar9 = pfVar9 + 2;
      fVar11 = pfVar8[3];
      *pfVar9 = fVar12 * fVar10;
      pfVar8 = pfVar8 + 2;
    } while (iVar7 != 0);
    FUN_0047cca4(0x48,local_80);
    local_84 = fVar2;
    local_84 = (float)FUN_0047c908();
    local_84 = local_84 * (fVar1 - *(float *)(param_1 + 0xc) * fVar3);
    *(float *)(iVar6 + 0x3c) = fVar2;
    *(float *)(iVar6 + 0x40) = fVar2;
    *(float *)(iVar6 + 0x44) = local_84;
    if (((*puVar4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_0045f774), iVar7 != 0)) {
      FUN_0036788c(DAT_0045f780);
    }
    FUN_00328350(uVar5,4,iVar6,9);
  }
  else {
    if (((*DAT_0045f774 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0045f774), iVar6 != 0)) {
      FUN_0036788c(DAT_0045f780);
    }
    FUN_003339e8(uVar5,4,&local_38,9);
  }
  local_2c = fVar1 - *(float *)(param_1 + 0xc) * fVar3;
  if (((*puVar4 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0045f774), iVar6 != 0)) {
    FUN_0036788c(DAT_0045f780);
  }
  FUN_003339e8(uVar5,6,&local_38,9);
  return;
}
