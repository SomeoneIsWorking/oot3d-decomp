// OoT3D decomp @ 0045c84c  name=FUN_0045c84c  size=628

void FUN_0045c84c(undefined4 param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  if (*(int *)(param_2 + 0x268) != 0) {
    FUN_002f70c4();
    puVar2 = *(undefined4 **)(param_2 + 0x268);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    FUN_0034fc6c(*(undefined4 *)(param_2 + 0x268));
    *(undefined4 *)(param_2 + 0x268) = 0;
    FUN_0034fc6c(*(undefined4 *)(param_2 + 0x264));
    *(undefined4 *)(param_2 + 0x264) = 0;
  }
  puVar1 = DAT_0045cac0;
  *(undefined4 *)(param_2 + 0x26c) = 0;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(puVar1), iVar3 != 0)) {
    FUN_0036788c(DAT_0045cac4);
  }
  iVar3 = DAT_0045cad0;
  FUN_00348904(*(undefined4 *)(DAT_0045cad0 + 0x47c),*(undefined4 *)(param_2 + 0x1e8));
  *(undefined4 *)(param_2 + 0x1e8) = 0;
  puVar2 = DAT_0045cad4;
  if (*(int *)(param_2 + 0x1e4) != 0) {
    uVar4 = FUN_003488e4();
    (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
  }
  *(undefined4 *)(param_2 + 0x1e4) = 0;
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0045cac0), iVar5 != 0)) {
    FUN_0036788c(DAT_0045cac4);
  }
  FUN_00348904(*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(param_2 + 0x1f0));
  *(undefined4 *)(param_2 + 0x1f0) = 0;
  if (*(int *)(param_2 + 0x1ec) != 0) {
    uVar4 = FUN_003488e4();
    (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
  }
  iVar5 = 0;
  *(undefined4 *)(param_2 + 0x1ec) = 0;
  do {
    if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0045cac0), iVar6 != 0)) {
      FUN_0036788c(DAT_0045cac4);
    }
    iVar6 = param_2 + iVar5 * 4;
    FUN_00348904(*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(iVar6 + 0x224));
    *(undefined4 *)(iVar6 + 0x224) = 0;
    if (*(int *)(iVar6 + 500) != 0) {
      uVar4 = FUN_003488e4();
      (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
    }
    iVar5 = iVar5 + 1;
    *(undefined4 *)(iVar6 + 500) = 0;
  } while (iVar5 < 0xc);
  if (*(int *)(param_2 + 0x274) != 0) {
    if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0045cac0), iVar5 != 0)) {
      FUN_0036788c(DAT_0045cac4);
    }
    FUN_00348904(*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(param_2 + 0x274));
    *(undefined4 *)(param_2 + 0x274) = 0;
  }
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar4 = FUN_003488e4();
    (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
  }
  *(undefined4 *)(param_2 + 0x270) = 0;
  return;
}
