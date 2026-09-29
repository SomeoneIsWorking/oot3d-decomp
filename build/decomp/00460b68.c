// OoT3D decomp @ 00460b68  name=FUN_00460b68  size=648

void FUN_00460b68(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;

  uVar3 = DAT_00460df0;
  *(undefined1 *)(param_1 + 0x2de) = 1;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0x130) = DAT_00460df4;
  *(undefined1 *)(param_1 + 0x2df) = 0;
  FUN_002ff5d4(param_1 + 0x104);
  FUN_002decfc(param_1,param_1 + 0x564);
  puVar1 = DAT_00460df8;
  uVar3 = extraout_r1;
  if (((*DAT_00460df8 & 1) == 0) &&
     (uVar10 = FUN_003679b4(DAT_00460df8), uVar3 = (int)((ulonglong)uVar10 >> 0x20),
     (int)uVar10 != 0)) {
    FUN_0036788c(DAT_00460dfc);
    uVar3 = DAT_00460e04;
  }
  FUN_0031025c(DAT_00460dfc,uVar3);
  FUN_002ee468();
  FUN_002dee5c();
  if (*(int **)(param_1 + 0x874) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x874) + 4))();
  }
  FUN_002f70c4();
  *(undefined4 *)(param_1 + 0x7fc) = 0;
  *(undefined4 *)(param_1 + 0x800) = 0;
  *(undefined4 *)(param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x80c) = 0;
  *(undefined4 *)(param_1 + 0x810) = 0;
  FUN_0034fc6c(*(undefined4 *)(param_1 + 0x7f8));
  *(undefined4 *)(param_1 + 0x7f8) = 0;
  puVar2 = DAT_00460e08;
  if (*(int *)(param_1 + 0x8b0) != 0) {
    uVar3 = FUN_00307674();
    piVar7 = (int *)*puVar2;
    (**(code **)(*piVar7 + 0x10))(piVar7,uVar3);
    *(undefined4 *)(param_1 + 0x8b0) = 0;
    bVar9 = *(int *)(param_1 + 0x8a4) != 0;
    uVar6 = extraout_r1_00;
    if (bVar9) {
      uVar6 = (uint)*(byte *)(param_1 + 0x8ac);
    }
    if (bVar9 && uVar6 != 0) {
      FUN_0034fc68();
    }
    *(undefined4 *)(param_1 + 0x8a4) = 0;
    *(undefined4 *)(param_1 + 0x8a8) = 0;
    *(undefined1 *)(param_1 + 0x8ac) = 0;
  }
  if (*(int *)(param_1 + 0x8bc) != 0) {
    FUN_00305364();
    (**(code **)**(undefined4 **)(param_1 + 0x8bc))();
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x8bc));
  }
  if (*(int *)(param_1 + 0x8b8) != 0) {
    FUN_0034fc6c();
  }
  iVar5 = DAT_00460e0c;
  iVar8 = 0;
  do {
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00460df8), iVar4 != 0)) {
      FUN_0036788c(DAT_00460dfc);
    }
    iVar4 = param_1 + iVar8 * 4;
    FUN_00348904(*(undefined4 *)(iVar5 + 0x47c),*(undefined4 *)(iVar4 + 0x9e4));
    iVar8 = iVar8 + 1;
    *(undefined4 *)(iVar4 + 0x9e4) = 0;
  } while (iVar8 < 2);
  if (*(int *)(param_1 + 0x9d8) != 0) {
    uVar3 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_00460e10 + 0x10))((int *)*DAT_00460e10,uVar3);
  }
  if (*(int *)(param_1 + 0x9dc) != 0) {
    uVar3 = FUN_00307674();
    piVar7 = (int *)*puVar2;
    (**(code **)(*piVar7 + 0x10))(piVar7,uVar3);
  }
  *(undefined4 *)(param_1 + 0x9d8) = 0;
  *(undefined4 *)(param_1 + 0x9dc) = 0;
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00460df8), iVar5 != 0)) {
    FUN_0036788c(DAT_00460dfc);
  }
  iVar5 = DAT_00460e14;
  *(undefined4 *)(DAT_00460e14 + 0x440) = 0;
  *(undefined4 *)(iVar5 + 0x444) = 0;
  return;
}
