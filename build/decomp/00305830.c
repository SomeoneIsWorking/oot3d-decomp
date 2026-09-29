// OoT3D decomp @ 00305830  name=FUN_00305830  size=248

int FUN_00305830(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;

  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
  }
  puVar1 = DAT_00305928;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00305928), iVar2 != 0)) {
    FUN_0036788c(DAT_0030592c);
  }
  FUN_00348904(*(undefined4 *)(DAT_00305938 + 0x47c),*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_0030593c + 0x10))((int *)*DAT_0030593c,uVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar4 = *(int *)(param_1 + 0x428);
  bVar7 = SBORROW4(iVar4,7);
  iVar2 = iVar4 + -7;
  bVar6 = iVar4 == 7;
  if (!bVar6) {
    iVar4 = *(int *)(param_1 + 0x224);
  }
  iVar5 = 0;
  if (!bVar6) {
    iVar2 = iVar4;
  }
  if ((!bVar6 && iVar4 != 0) && iVar2 < 0 == (bVar6 && bVar7)) {
    do {
      if (*(int *)(param_1 + iVar5 * 4 + 0xc) != 0) {
        FUN_00454858();
        FUN_003525d4();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x224));
  }
  return param_1;
}
