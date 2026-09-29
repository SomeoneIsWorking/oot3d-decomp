// OoT3D decomp @ 00463294  name=FUN_00463294  size=364

void FUN_00463294(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;

  *(undefined4 *)(param_1 + 0x2280) = 0;
  uVar6 = FUN_00363c10(param_1 + 0x3a58,1);
  if (((uVar6 & 0xff) < 0x13) &&
     (iVar7 = param_1 + (uVar6 & 0xff) * 0x80, *(int *)(DAT_00463400 + iVar7) != 0)) {
    iVar7 = iVar7 + 0x3a5c;
  }
  else {
    iVar7 = 0;
  }
  if (((*DAT_00463404 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_00463404), iVar8 != 0)) {
    FUN_0036788c(DAT_00463408);
  }
  uVar5 = DAT_00463428;
  uVar4 = DAT_00463424;
  uVar3 = DAT_00463420;
  uVar2 = DAT_0046341c;
  uVar1 = DAT_00463418;
  uVar11 = DAT_00463414;
  piVar13 = *(int **)(DAT_00463408 + 0x17c);
  iVar8 = 0;
  do {
    uVar9 = ObjectBankArchive_00358ef8(iVar7 + 0x10,iVar8 + 0x60);
    iVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar9,0);
    iVar12 = param_1 + 0x208c + iVar8 * 4;
    iVar8 = iVar8 + 1;
    *(int *)(iVar12 + 0x200) = iVar10;
    *(undefined4 *)(iVar10 + 0x24) = uVar11;
    *(undefined4 *)(iVar10 + 0x28) = uVar1;
    *(undefined4 *)(iVar10 + 0x2c) = uVar2;
    iVar10 = *(int *)(iVar12 + 0x200);
    *(undefined4 *)(iVar10 + 0x34) = uVar3;
    *(undefined4 *)(iVar10 + 0x38) = uVar3;
    *(undefined4 *)(iVar10 + 0x3c) = uVar4;
    iVar10 = *(int *)(iVar12 + 0x200);
    *(undefined4 *)(iVar10 + 0x40) = uVar5;
    *(undefined4 *)(iVar10 + 0x44) = uVar5;
    *(undefined4 *)(iVar10 + 0x48) = uVar5;
  } while (iVar8 < 3);
  uVar11 = FUN_00372f0c(iVar7 + 0x10,0x31);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x2294) + 0xc),uVar11);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2294) + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2294) + 0xc) + 0xc) = uVar2;
  return;
}
