// OoT3D decomp @ 00190740  name=FUN_00190740  size=300

void FUN_00190740(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  char *pcVar6;
  short sVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  uVar3 = DAT_00190870;
  lVar1 = (ulonglong)(uint)*(ushort *)(param_1 + 700) * (ulonglong)DAT_0019086c;
  iVar2 = (uint)((ulonglong)lVar1 >> 0x22) * -5;
  if ((uint)*(ushort *)(param_1 + 700) + iVar2 == 0) {
    fVar8 = (float)FUN_003738a8(DAT_00190870,0,iVar2,(int)lVar1);
    fVar12 = *(float *)(param_1 + 0x28);
    uVar9 = *(undefined4 *)(param_1 + 0x2c8);
    fVar10 = (float)FUN_003738a8(uVar3);
    uVar4 = DAT_00190878;
    uVar3 = DAT_00190874;
    fVar13 = *(float *)(param_1 + 0x30);
    fVar11 = (float)FUN_00371e50(DAT_0019087c);
    pcVar6 = (char *)(param_1 + 0x2f0);
    sVar7 = 0;
    fVar11 = fVar11 + DAT_00190880;
    while (*pcVar6 != '\0') {
      sVar7 = sVar7 + 1;
      pcVar6 = pcVar6 + 0x40;
      if (0x3b < sVar7) {
        return;
      }
    }
    *pcVar6 = '\x01';
    fVar5 = DAT_00190884;
    *(float *)(pcVar6 + 4) = fVar8 + fVar12;
    *(undefined4 *)(pcVar6 + 8) = uVar9;
    *(float *)(pcVar6 + 0xc) = fVar10 + fVar13;
    *(undefined4 *)(pcVar6 + 0x10) = uVar3;
    *(undefined4 *)(pcVar6 + 0x14) = uVar3;
    *(undefined4 *)(pcVar6 + 0x18) = uVar3;
    *(undefined4 *)(pcVar6 + 0x1c) = uVar3;
    *(undefined4 *)(pcVar6 + 0x20) = uVar4;
    *(undefined4 *)(pcVar6 + 0x24) = uVar3;
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = '\0';
    *(float *)(pcVar6 + 0x30) = fVar11 * fVar5;
    pcVar6[0x2c] = '\0';
    pcVar6[0x2d] = '\0';
    pcVar6[1] = '\0';
  }
  return;
}
