// OoT3D decomp @ 003ff1b0  name=FUN_003ff1b0  size=532

void FUN_003ff1b0(int *param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  int iStack_44;
  undefined1 uStack_40;

  func_0x0040c6c8(*param_1);
  iVar4 = *(int *)(*param_1 + 0xc);
  piVar3 = (int *)param_1[1];
  if (piVar3 == (int *)0x0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x11) != '\0') goto LAB_003ff270;
  fVar11 = (float)param_1[2] + (float)param_1[3];
  param_1[2] = (int)fVar11;
  iVar5 = *(int *)(*piVar3 + *(int *)(*piVar3 + 0x14) + 0x10);
  fVar14 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar14) << 0x1f | (uint)(fVar11 == fVar14) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar11) || NAN(fVar14))) {
    if ((uint)fVar11 <= (uint)fRam003ff280) goto LAB_003ff270;
    if ((char)param_1[4] == '\0') goto LAB_003ff234;
    fVar14 = (float)VectorSignedToFloat(iVar5 + 1,(byte)(uVar1 >> 0x15) & 3);
    fVar11 = fVar11 + fVar14;
  }
  else if ((char)param_1[4] == '\0') {
LAB_003ff234:
    fVar11 = (float)VectorSignedToFloat(iVar5,(byte)(uVar1 >> 0x15) & 3);
  }
  else {
    fVar14 = (float)VectorSignedToFloat(iVar5 + 1,(byte)(uVar1 >> 0x15) & 3);
    fVar11 = fVar11 - fVar14;
  }
  param_1[2] = (int)fVar11;
LAB_003ff270:
  iVar12 = param_1[2];
  iVar5 = 0;
  iVar10 = *piVar3 + *(int *)(*piVar3 + 0x14);
  if (0 < *(int *)(iVar10 + 0x18)) {
    do {
      iVar6 = iVar10 + *(int *)(iVar10 + 0x20 + (*(int *)(iVar10 + 0x1c) + 1U & 0xfffffffe) * 2 +
                               iVar5 * 4);
      if (-1 < *(short *)(iVar6 + 4)) {
        iVar7 = 0;
        iVar9 = iVar4 + *(short *)(iVar6 + 4) * 0x24;
        iVar8 = iVar9 + 0xc;
        do {
          iStack_44 = (int)*(short *)(iVar6 + iVar7 * 2 + 8);
          if (iStack_44 != 0) {
            iStack_44 = iStack_44 + iVar6;
            uStack_40 = 1;
            uVar13 = func_0x003087a4(iVar12,&iStack_44);
            *(undefined4 *)(iVar9 + iVar7 * 4) = uVar13;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
        iVar7 = 0;
        do {
          iStack_44 = (int)*(short *)(iVar6 + iVar7 * 2 + 0xe);
          if (iStack_44 != 0) {
            iStack_44 = iStack_44 + iVar6;
            uStack_40 = 1;
            if (*(char *)(iVar6 + 6) == '\0') {
              uVar13 = func_0x003087a4(iVar12,&iStack_44);
              *(undefined4 *)(iVar8 + iVar7 * 4) = uVar13;
            }
            else {
              uVar13 = func_0x003084e8();
              *(undefined4 *)(iVar8 + iVar7 * 4) = uVar13;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar10 + 0x18));
  }
  return;
}
