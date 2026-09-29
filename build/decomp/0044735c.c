// OoT3D decomp @ 0044735c  name=FUN_0044735c  size=416

void FUN_0044735c(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;

  iVar8 = 0;
  iVar6 = FUN_002e63c8(DAT_004474fc);
  uVar2 = DAT_0044750c;
  if (iVar6 != 0) {
    iVar8 = 3;
  }
  if (*(int *)(DAT_00447500 + (param_2 + iVar8) * 4) == 0) {
    return;
  }
  FUN_00371738(DAT_00447510,DAT_00447508 + (param_2 + iVar8) * DAT_00447504 * 4,DAT_0044750c);
  iVar6 = DAT_00447514;
  uVar1 = *(ushort *)(DAT_00447514 + 0xd8);
  iVar8 = DAT_00447514 + -0x1400;
  *(undefined2 *)(DAT_00447514 + 0xd8) = 0;
  uVar4 = FUN_002faf90(iVar8,uVar2,0);
  *(undefined2 *)(iVar6 + 0xd8) = uVar4;
  iVar8 = DAT_00447518;
  uVar5 = (ushort)*(byte *)(iVar6 + -0x13d2);
  bVar9 = uVar5 == 2;
  if (bVar9) {
    uVar5 = *(ushort *)(iVar6 + 0xd8);
  }
  if (!bVar9 || uVar5 != uVar1) {
    *(undefined1 *)(iVar6 + -0x13d1) = 1;
  }
  *(int *)(iVar8 + 0x4dc) = param_2;
  FUN_002e631c(param_1,param_1 + 0x2e0);
  puVar3 = DAT_0044751c;
  if (*(short *)(iVar6 + -0x13ca) == 0) {
    *(undefined1 *)(iVar6 + -0x13f1) = 0;
    *(undefined2 *)(iVar6 + -0x13ca) = 1;
  }
  if (((*puVar3 & 1) == 0) && (iVar8 = FUN_003679b4(puVar3), iVar8 != 0)) {
    FUN_0036788c(DAT_00447520);
  }
  uVar2 = DAT_0044752c;
  FUN_0044c75c(DAT_0044752c,DAT_00447530);
  uVar7 = extraout_r1;
  if (((*puVar3 & 1) == 0) &&
     (uVar10 = FUN_003679b4(DAT_0044751c), uVar7 = (int)((ulonglong)uVar10 >> 0x20),
     (int)uVar10 != 0)) {
    FUN_0036788c(DAT_00447520);
    uVar7 = DAT_00447528;
  }
  FUN_0044c74c(uVar2,uVar7);
  if (*(short *)(iVar6 + -0x13bc) < 0x30) {
    *(undefined2 *)(iVar6 + -0x13bc) = 0x30;
  }
  FUN_0044baf4();
  FUN_0044b570();
  FUN_0044cba4();
  FUN_0044b584();
  FUN_00449dec(param_1);
  return;
}
