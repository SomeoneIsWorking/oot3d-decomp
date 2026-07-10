// OoT3D decomp @ 003fa34c  name=FUN_003fa34c  size=672

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003fa34c(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_43c [1024];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  if (*(char *)*param_2 == '\0') {
    FUN_00307af4(*(undefined4 *)(param_1 + 0x24),&stack0xffffffe8,0x10);
    return;
  }
  FUN_00409390();
  iVar4 = FUN_00314318(param_2 + 3,0);
  fVar12 = DAT_003fa5bc;
  if (-1 < iVar4) {
    uVar5 = FUN_00314318(param_2 + 3,0);
    uVar5 = FUN_0040f74c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),uVar5);
    FUN_004003fc(fVar12,auStack_43c,uVar5,1);
    FUN_00408ef8(param_1 + 0x24,0,auStack_43c);
  }
  piVar7 = param_2 + 4;
  iVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0x10) + iVar4 * 0x60;
    iStack_20 = *(int *)(iVar6 + 0xe4);
    uStack_2c = *(undefined4 *)(iVar6 + 0xd8);
    uStack_28 = *(undefined4 *)(iVar6 + 0xdc);
    uStack_24 = *(undefined4 *)(iVar6 + 0xe0);
    if (iStack_20 == 0x3f800000) {
      *(undefined1 *)((int)piVar7 + iVar4 + 0x164) = 1;
    }
    fVar3 = DAT_003fa5cc;
    fVar2 = DAT_003fa5c8;
    fVar1 = DAT_003fa5c4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  iVar4 = *param_2;
  fVar8 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 0xa4),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 0xa5),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 * DAT_003fa5c0;
  fVar10 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 0xa6),(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 * DAT_003fa5c0;
  fVar11 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 0xa0),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 0xa1),(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 0xa2),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * DAT_003fa5c0;
  fVar14 = fVar14 * DAT_003fa5c0;
  fVar11 = fVar11 * DAT_003fa5c0 + fVar8 * DAT_003fa5c0 * 0.0;
  fVar8 = fVar12;
  if ((fVar12 <= fVar11) && (fVar8 = fVar11, 0x3f800000 < (int)fVar11)) {
    fVar8 = DAT_003fa5c4;
  }
  uVar5 = VectorFloatToUnsigned(DAT_003fa5cc + fVar8 * DAT_003fa5c8,3);
  *(char *)piVar7 = (char)uVar5;
  fVar13 = fVar13 + fVar9 * 0.0;
  fVar8 = fVar12;
  if ((fVar12 <= fVar13) && (fVar8 = fVar13, 0x3f800000 < (int)fVar13)) {
    fVar8 = fVar1;
  }
  uVar5 = VectorFloatToUnsigned(fVar3 + fVar8 * fVar2,3);
  *(char *)((int)param_2 + 0x11) = (char)uVar5;
  fVar14 = fVar14 + fVar10 * 0.0;
  if ((fVar12 <= fVar14) && (fVar12 = fVar14, 0x3f800000 < (int)fVar14)) {
    fVar12 = fVar1;
  }
  uVar5 = VectorFloatToUnsigned(fVar3 + fVar12 * fVar2,3);
  *(char *)((int)param_2 + 0x12) = (char)uVar5;
  FUN_00308498(param_1 + 0x24,piVar7);
  return;
}

