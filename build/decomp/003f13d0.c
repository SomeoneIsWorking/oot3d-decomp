// OoT3D decomp @ 003f13d0  name=FUN_003f13d0  size=296

void FUN_003f13d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_40;
  float local_3c;
  float local_38;

  fVar4 = DAT_003f1508;
  fVar3 = DAT_003f1504;
  iVar2 = DAT_003f1500;
  iVar1 = DAT_003f14fc;
  pcVar6 = (char *)(param_1 + 0x1c8);
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x1c0);
  local_3c = DAT_003f14f8;
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    iVar9 = DAT_003f1500 + 0x1a80000;
    do {
      FUN_0036df4c(pcVar6 + 0x1c,pcVar6 + 8);
      (**(code **)(iVar1 + *pcVar6 * 4))(pcVar6,param_1,param_2);
      uVar5 = *(undefined4 *)(pcVar6 + 0xc);
      uVar10 = *(undefined4 *)(pcVar6 + 0x10);
      *(float *)(iVar7 + 0x38) = *(float *)(pcVar6 + 8);
      *(undefined4 *)(iVar7 + 0x3c) = uVar5;
      *(undefined4 *)(iVar7 + 0x40) = uVar10;
      if ((int)ABS(*(float *)(pcVar6 + 0xc) - local_3c) < iVar2) {
        fVar13 = *(float *)(pcVar6 + 8);
        fVar14 = fVar13 - local_40;
        fVar11 = *(float *)(pcVar6 + 0x10) - local_38;
        fVar12 = fVar14 * fVar14 + fVar11 * fVar11;
        if ((int)fVar12 < iVar9) {
          if (fVar12 == fVar3) {
            *(float *)(pcVar6 + 8) = fVar13 + fVar4;
            fVar11 = fVar4;
          }
          else {
            fVar11 = fVar11 / SQRT(fVar12);
            *(float *)(pcVar6 + 8) = fVar14 / SQRT(fVar12) + fVar13;
          }
          *(float *)(pcVar6 + 0x10) = *(float *)(pcVar6 + 0x10) + fVar11;
        }
      }
      local_40 = *(float *)(pcVar6 + 8);
      local_3c = *(float *)(pcVar6 + 0xc);
      local_38 = *(float *)(pcVar6 + 0x10);
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + 0x5c;
      iVar7 = iVar7 + 0x50;
    } while (iVar8 < (int)(uint)*(byte *)(param_1 + 0x1c4));
  }
  return;
}
