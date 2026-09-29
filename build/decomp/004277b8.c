// OoT3D decomp @ 004277b8  name=FUN_004277b8  size=596

void FUN_004277b8(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;

  iVar2 = *(int *)(param_1 + 4);
  bVar5 = iVar2 == 0;
  if (!bVar5) {
    param_2 = (uint)*(byte *)(param_1 + 0x19);
  }
  bVar6 = param_2 == 0;
  if (!bVar5 && !bVar6) {
    param_2 = (uint)*(byte *)(param_1 + 0x1a);
  }
  if ((bVar5 || bVar6) || param_2 == 0) {
    return;
  }
  bVar5 = true;
  iVar4 = *(int *)(iVar2 + (*(int *)(param_1 + 0xc) + 3) * 4 + 0xaf8);
  if (*(char *)(iVar4 + 0x6c) == '\0') {
    return;
  }
  fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)FUN_002fd82c(iVar4);
  fVar8 = (float)FUN_002fd80c(iVar4);
  fVar9 = (float)FUN_002fd7f0(iVar4);
  fVar10 = (float)FUN_002fd7d4(iVar4);
  fVar10 = fVar10 + fVar8;
  if (*(char *)(param_1 + 0x18) != '\0') {
    fVar8 = fVar8 - DAT_00427a0c;
    fVar10 = fVar10 - DAT_00427a0c;
  }
  if ((((fVar11 < fVar7) || (fVar9 + fVar7 <= fVar11)) || (fVar12 < fVar8)) || (fVar10 <= fVar12)) {
    bVar5 = false;
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x15) != '\0' && bVar5) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = *(undefined4 *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 8);
    if (*(int *)(*(int *)(param_1 + 4) + 0x10) != iVar2 && iVar2 != 3) {
      *(int *)(*(int *)(param_1 + 4) + 0x10) = iVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 4);
  iVar2 = *(int *)(uVar3 + 0x20);
  bVar6 = iVar2 != *(int *)(param_1 + 8);
  if (!bVar6) {
    uVar3 = (uint)*(byte *)(uVar3 + 0x14);
  }
  if ((!bVar6 && uVar3 != 0) && bVar5) {
    iVar2 = 1;
  }
  if ((bVar6 || uVar3 == 0) || !bVar5) {
    iVar2 = 0;
  }
  uVar13 = FUN_002f4d98(param_1,iVar2);
  if (!bVar6) {
    uVar13 = (ulonglong)
             CONCAT14(*(undefined1 *)(*(int *)(param_1 + 4) + 0x16),*(int *)(param_1 + 4));
  }
  iVar2 = (int)uVar13;
  if (bVar6 || (int)(uVar13 >> 0x20) == 0) {
    return;
  }
  if (!bVar5) goto LAB_004279f4;
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(iVar2 + 0x10) != iVar4 && iVar4 != 3) {
    *(int *)(iVar2 + 0x10) = iVar4;
  }
  cVar1 = *(char *)(iVar2 + 8);
  if (cVar1 == '\x04') {
    if (iVar4 == 0) {
      FUN_0043c4a0();
    }
    else if (iVar4 == 1) {
      FUN_0043c590();
    }
    else if (iVar4 == 2) {
      FUN_0043c230();
    }
  }
  else if (cVar1 == '\n' || cVar1 == '\x0e') {
    if (iVar4 == 0) {
code_r0x004279b4:
      FUN_0043c67c();
    }
    else if (iVar4 == 1) {
      FUN_0043c36c();
    }
    else if (iVar4 == 3) goto code_r0x004279b4;
  }
  if (-1 < *(int *)(param_1 + 0x14)) {
    FUN_0037547c(*(int *)(param_1 + 0x14),0,4,DAT_00427a14,DAT_00427a14,DAT_00427a10);
  }
LAB_004279f4:
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = 0xffffffff;
  return;
}
