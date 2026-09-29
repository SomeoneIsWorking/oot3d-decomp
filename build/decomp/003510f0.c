// OoT3D decomp @ 003510f0  name=FUN_003510f0  size=300

void FUN_003510f0(float param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint in_fpscr;
  float fVar14;

  uVar6 = DAT_00351238;
  uVar5 = DAT_00351230;
  uVar4 = DAT_0035122c;
  fVar3 = DAT_00351228;
  iVar2 = DAT_00351224;
  puVar1 = DAT_00351220;
  param_1 = param_1 * DAT_00351234;
  puVar13 = DAT_00351220 + -3;
  iVar8 = *(int *)(DAT_0035121c + param_2);
  uVar9 = *(undefined4 *)(iVar8 + 0x23ec);
  uVar11 = *(undefined4 *)(iVar8 + 0x23f0);
  *DAT_00351220 = *(undefined4 *)(iVar8 + 0x23e8);
  puVar1[1] = uVar9;
  puVar1[2] = uVar11;
  iVar12 = 0;
  *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(iVar8 + 0xbe);
  do {
    pcVar10 = *(char **)(param_2 + 0x5c28);
    sVar7 = 0;
    do {
      if (*pcVar10 == '\0') {
        *pcVar10 = '\n';
        uVar9 = puVar1[1];
        uVar11 = puVar1[2];
        fVar14 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(pcVar10 + 4) = *puVar1;
        *(undefined4 *)(pcVar10 + 8) = uVar9;
        *(undefined4 *)(pcVar10 + 0xc) = uVar11;
        uVar9 = puVar1[-2];
        uVar11 = puVar1[-1];
        *(undefined4 *)(pcVar10 + 0x10) = *puVar13;
        *(undefined4 *)(pcVar10 + 0x14) = uVar9;
        *(undefined4 *)(pcVar10 + 0x18) = uVar11;
        uVar9 = puVar1[-2];
        uVar11 = puVar1[-1];
        *(undefined4 *)(pcVar10 + 0x1c) = *puVar13;
        *(undefined4 *)(pcVar10 + 0x20) = uVar9;
        *(undefined4 *)(pcVar10 + 0x24) = uVar11;
        *(float *)(pcVar10 + 0x38) = fVar14 * fVar3;
        *(undefined4 *)(pcVar10 + 0x3c) = uVar4;
        *(undefined4 *)(pcVar10 + 0x34) = uVar5;
        *(float *)(pcVar10 + 0x30) = param_1;
        *(short *)(pcVar10 + 0x2c) = (short)param_3;
        pcVar10[0x2e] = '\0';
        pcVar10[0x2f] = '\0';
        pcVar10[2] = -1;
        pcVar10[3] = '\0';
        fVar14 = (float)FUN_00371e50(uVar6);
        uVar9 = 6;
        if (param_3 == 0) {
          uVar9 = 4;
        }
        pcVar10[1] = (char)(int)fVar14;
        uVar9 = FUN_00371178(*(undefined4 *)(iVar2 + 0x20),0,uVar9);
        *(undefined4 *)(pcVar10 + 0x44) = uVar9;
        break;
      }
      sVar7 = sVar7 + 1;
      pcVar10 = pcVar10 + 0x48;
    } while (sVar7 < 0x96);
    iVar12 = (int)(short)((short)iVar12 + 1);
    if (7 < iVar12) {
      return;
    }
  } while( true );
}
