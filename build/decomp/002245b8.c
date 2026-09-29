// OoT3D decomp @ 002245b8  name=FUN_002245b8  size=320

void FUN_002245b8(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  uVar3 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if ((uVar3 == 0xf || uVar3 == 0x18) || uVar3 == 0x19) {
    FUN_0033579c(param_1 + 0x1a4);
  }
  puVar1 = DAT_002246f8;
  iVar7 = 0;
  do {
    iVar8 = param_1 + iVar7 * 4;
    if (*(int *)(iVar8 + 0x2c0) != 0) {
      uVar4 = FUN_003685a0();
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,uVar4);
      *(undefined4 *)(iVar8 + 0x2c0) = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = 0;
  do {
    iVar8 = param_1 + iVar7 * 4;
    piVar5 = *(int **)(iVar8 + 0x2a8);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
      *(undefined4 *)(iVar8 + 0x2a8) = 0;
    }
    iVar8 = DAT_00224700;
    puVar2 = DAT_002246fc;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = 0;
  do {
    iVar9 = param_1 + iVar7 * 4;
    if (*(int *)(iVar9 + 0x2d0) != 0) {
      if (((*puVar2 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_002246fc), iVar6 != 0)) {
        FUN_0036788c(DAT_00224704);
      }
      FUN_00348904(*(undefined4 *)(iVar8 + 0x47c),*(undefined4 *)(iVar9 + 0x2d0));
      *(undefined4 *)(iVar9 + 0x2d0) = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if (*(int *)(param_1 + 0x2cc) != 0) {
    uVar4 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_00224710 + 0x10))((int *)*DAT_00224710,uVar4);
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  return;
}
