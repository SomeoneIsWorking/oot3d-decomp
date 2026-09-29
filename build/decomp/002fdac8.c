// OoT3D decomp @ 002fdac8  name=FUN_002fdac8  size=764

void FUN_002fdac8(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 auStack_264 [524];
  undefined1 auStack_58 [8];
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38 [6];

  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[0] = *DAT_002fddc4;
  iVar10 = 0;
  *(int *)((int)local_38 + *(int *)(local_38[0] + -0x30)) = DAT_002fddc4[3];
  iVar5 = FUN_002e63c8(DAT_002fddc8);
  uVar6 = DAT_002fddd4;
  puVar1 = DAT_002fddd0;
  if (iVar5 != 0) {
    iVar10 = 3;
  }
  auStack_50[0] = *DAT_002fddcc;
  auStack_50[1] = DAT_002fddcc[1];
  auStack_50[2] = DAT_002fddcc[2];
  auStack_50[3] = DAT_002fddcc[3];
  uStack_40 = DAT_002fddcc[4];
  uStack_3c = DAT_002fddcc[5];
  if (*(char *)(param_1 + 0x100) == '\x03') {
    if (((*DAT_002fddd0 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_002fddd0), iVar5 != 0)) {
      FUN_0036788c(DAT_002fddd8);
    }
    FUN_002f5094(uVar6,param_1);
  }
  else {
    uVar9 = auStack_50[0];
    if ((*DAT_002fddd0 & 1) == 0) {
      uVar11 = FUN_003679b4(DAT_002fddd0);
      uVar9 = (int)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        FUN_0036788c(DAT_002fddd8);
        uVar9 = DAT_002fdde0;
      }
    }
    FUN_002f508c(uVar6,uVar9);
  }
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_002fddd0), iVar5 != 0)) {
    FUN_0036788c(DAT_002fddd8);
  }
  FUN_0044c89c(uVar6,DAT_002fdde4);
  iVar5 = DAT_002fdde8;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x100) == '\x03') {
      *(undefined2 *)(DAT_002fdde8 + 0x7e) = *(undefined2 *)(param_1 + 0x104);
      FUN_002e62dc(param_1);
    }
    *(short *)(iVar5 + 0x36) = *(short *)(iVar5 + 0x36) + 1;
  }
  else {
    FUN_002e631c(param_1,param_1 + 0x2e0);
    FUN_004499b0(param_1,param_1 + 0x2e0);
  }
  *(undefined1 *)(iVar5 + 0x2e) = 2;
  FUN_0044a48c(auStack_58);
  uVar6 = FUN_002e6280(auStack_58);
  iVar2 = DAT_002fddec;
  *(undefined4 *)(DAT_002fddec + 0x3bc) = uVar6;
  uVar6 = FUN_002e6224(auStack_58);
  *(undefined4 *)(iVar2 + 0x3c0) = uVar6;
  uVar6 = FUN_002e61c8(auStack_58);
  *(undefined4 *)(iVar2 + 0x3c4) = uVar6;
  uVar6 = FUN_00305a3c(auStack_58);
  *(undefined4 *)(iVar2 + 0x3c8) = uVar6;
  uVar6 = FUN_00305aa4(auStack_58);
  *(undefined4 *)(iVar2 + 0x3cc) = uVar6;
  cVar3 = *(char *)(iVar5 + 0x80);
  if (((cVar3 != ';' && cVar3 != '<') && cVar3 != '=') && cVar3 != 'U') {
    cVar3 = *(char *)(iVar2 + 0x56f);
    if (cVar3 == '\0') {
      cVar3 = -1;
    }
    *(char *)(iVar5 + 0x80) = cVar3;
  }
  uVar6 = DAT_002fddf4;
  iVar5 = DAT_002fddf0;
  iVar7 = DAT_002fddf0 + -0x1400;
  *(undefined2 *)(DAT_002fddf0 + 0xd8) = 0;
  uVar4 = FUN_002faf90(iVar7,uVar6,0);
  *(undefined2 *)(iVar5 + 0xd8) = uVar4;
  iVar5 = DAT_002fddfc;
  FUN_00371738(DAT_002fddfc + (*(int *)(iVar2 + 0x4dc) + iVar10) * DAT_002fddf8 * 4,DAT_002fdde8,
               uVar6);
  iVar7 = *(int *)(iVar2 + 0x4dc) + iVar10;
  iVar8 = iVar7 * DAT_002fddf8;
  FUN_00324f44(auStack_264,auStack_50[iVar7],DAT_002fde00);
  uVar6 = FUN_002e613c(auStack_264,iVar5 + iVar8 * 4,uVar6,1);
  *(undefined4 *)(DAT_002fde04 + 4) = uVar6;
  *(undefined4 *)(iVar5 + -0x18 + (*(int *)(iVar2 + 0x4dc) + iVar10) * 4) = 1;
  if ((local_38[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_38[1] & 0xfffffffe);
  }
  return;
}
