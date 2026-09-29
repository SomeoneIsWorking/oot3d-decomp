// OoT3D decomp @ 00299c0c  name=FUN_00299c0c  size=416

undefined4 FUN_00299c0c(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_r12;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;

  iVar5 = *(int *)(param_1 + 0x284);
  uVar2 = *(uint *)(param_1 + 0x1710);
  bVar9 = (uVar2 & 0x1000000) != 0;
  if (bVar9) {
    param_3 = (uint)*(ushort *)(param_1 + 0x2218);
  }
  iVar6 = DAT_00299db0;
  if (!bVar9 || param_3 == 0) {
    iVar6 = *(int *)(DAT_00299dac + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x90);
  }
  bVar9 = (uVar2 & 0x1000000) != 0;
  if (bVar9) {
    param_4 = (uint)*(ushort *)(param_1 + 0x2218);
  }
  iVar7 = DAT_00299db4;
  if (!bVar9 || param_4 == 0) {
    iVar7 = *(int *)(DAT_00299dac + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x78);
  }
  bVar9 = (uVar2 & 0x1000000) != 0;
  if (bVar9) {
    in_r12 = (uint)*(ushort *)(param_1 + 0x2218);
  }
  iVar8 = DAT_00299db8;
  if (!bVar9 || in_r12 == 0) {
    iVar8 = *(int *)(DAT_00299dac + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x2e8);
  }
  bVar9 = (uVar2 & 0x1000000) != 0;
  if (bVar9) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x2218);
  }
  iVar3 = DAT_00299dbc;
  if (!bVar9 || uVar2 == 0) {
    iVar3 = *(int *)(DAT_00299dac + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x2d0);
  }
  if (((iVar5 == iVar6 || iVar5 == iVar7) || iVar5 == iVar8) || iVar5 == iVar3) {
    uVar4 = FUN_00324154(param_2 + 0x3410,param_1 + 0x254);
    FUN_00324128(uVar4,*(undefined1 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x17dc),
                 *(undefined4 *)(param_1 + 0x2cc));
  }
  else {
    FUN_0036b4ec(param_1 + 0x1764,param_2);
  }
  uVar4 = FUN_0036c5bc(param_2,0);
  uVar10 = FUN_00351878(uVar4,10);
  if ((int)uVar10 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x1749);
    bVar9 = uVar2 == 0;
    uVar1 = (uint)((ulonglong)uVar10 >> 0x20);
    if (bVar9) {
      uVar2 = *(uint *)(param_1 + 0x1708);
      uVar1 = DAT_00299dc0;
    }
    if (bVar9 && uVar2 == uVar1) {
      *(undefined2 *)(param_1 + 0x2218) = 0;
      FUN_0035d27c(param_1,DAT_00299dc4);
      return 1;
    }
  }
  FUN_00336398(param_1,param_2);
  if (*(int *)(DAT_00299dc8 + 0x50) == 0) {
    FUN_0035d27c(param_1,DAT_00299dcc);
    uVar4 = DAT_00299dd0;
    if (0x3effffff < *(int *)(param_1 + 0x225c)) {
      uVar4 = 0x1c4;
    }
    FUN_003604f0(param_1 + 0x1764,param_2,uVar4);
  }
  return 1;
}
