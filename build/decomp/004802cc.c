// OoT3D decomp @ 004802cc  name=FUN_004802cc  size=284

void FUN_004802cc(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  if (*(int *)(param_1 + 0x4a0) != 0) {
    FUN_00305364();
    (**(code **)**(undefined4 **)(param_1 + 0x4a0))();
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x4a0));
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  if (*(int *)(param_1 + 0x49c) != 0) {
    FUN_0034fc6c();
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  iVar2 = DAT_004803ec;
  puVar1 = DAT_004803e8;
  iVar5 = 0;
  do {
    if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_004803e8), iVar3 != 0)) {
      FUN_0036788c(DAT_004803f0);
    }
    iVar3 = param_1 + iVar5 * 4;
    FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),*(undefined4 *)(iVar3 + 0x5c4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar3 + 0x5c4) = 0;
  } while (iVar5 < 2);
  if (*(int *)(param_1 + 0x5bc) != 0) {
    uVar4 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_004803fc + 0x10))((int *)*DAT_004803fc,uVar4);
  }
  if (*(int *)(param_1 + 0x5c0) != 0) {
    uVar4 = FUN_00307674();
    (**(code **)(*(int *)*DAT_00480400 + 0x10))((int *)*DAT_00480400,uVar4);
  }
  *(undefined4 *)(param_1 + 0x5bc) = 0;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  return;
}
