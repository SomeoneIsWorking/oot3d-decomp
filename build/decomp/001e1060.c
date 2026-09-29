// OoT3D decomp @ 001e1060  name=FUN_001e1060  size=320

void FUN_001e1060(int param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  short sVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;

  uVar3 = DAT_001e11a4;
  lVar2 = (ulonglong)(uint)*(ushort *)(param_1 + 700) * (ulonglong)DAT_001e11a0;
  uVar1 = (uint)((ulonglong)lVar2 >> 0x25);
  iVar6 = (uint)*(ushort *)(param_1 + 700) + uVar1 * -0x30;
  if (0x17 < iVar6) {
    fVar9 = (float)FUN_003738a8(DAT_001e11a4,iVar6,uVar1 * -3,(int)lVar2);
    fVar13 = *(float *)(param_1 + 0x28);
    fVar10 = (float)FUN_003738a8(uVar3);
    fVar10 = fVar10 + DAT_001e11a8;
    fVar14 = *(float *)(param_1 + 0x2c);
    fVar11 = (float)FUN_003738a8(uVar3);
    uVar4 = DAT_001e11b0;
    uVar3 = DAT_001e11ac;
    fVar15 = *(float *)(param_1 + 0x30);
    fVar12 = (float)FUN_00371e50(DAT_001e11b4);
    pcVar7 = (char *)(param_1 + 0x2f0);
    sVar8 = 0;
    fVar12 = fVar12 + DAT_001e11b8;
    while (*pcVar7 != '\0') {
      sVar8 = sVar8 + 1;
      pcVar7 = pcVar7 + 0x40;
      if (0x3b < sVar8) {
        return;
      }
    }
    *pcVar7 = '\x01';
    fVar5 = DAT_001e11bc;
    *(float *)(pcVar7 + 4) = fVar9 + fVar13;
    *(float *)(pcVar7 + 8) = fVar10 + fVar14;
    *(float *)(pcVar7 + 0xc) = fVar11 + fVar15;
    *(undefined4 *)(pcVar7 + 0x10) = uVar3;
    *(undefined4 *)(pcVar7 + 0x14) = uVar3;
    *(undefined4 *)(pcVar7 + 0x18) = uVar3;
    *(undefined4 *)(pcVar7 + 0x1c) = uVar3;
    *(undefined4 *)(pcVar7 + 0x20) = uVar4;
    *(undefined4 *)(pcVar7 + 0x24) = uVar3;
    pcVar7[0x2e] = '\0';
    pcVar7[0x2f] = '\0';
    *(float *)(pcVar7 + 0x30) = fVar12 * fVar5;
    pcVar7[0x2c] = '\0';
    pcVar7[0x2d] = '\0';
    pcVar7[1] = '\0';
  }
  return;
}
