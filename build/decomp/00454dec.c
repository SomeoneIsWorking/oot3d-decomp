// OoT3D decomp @ 00454dec  name=FUN_00454dec  size=328

void FUN_00454dec(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;

  puVar3 = DAT_00454f3c;
  iVar2 = DAT_00454f38;
  puVar1 = DAT_00454f34;
  if (param_1[1] != 0) {
    if (((*DAT_00454f34 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00454f34), iVar4 != 0)) {
      FUN_0036788c(iVar2 + -0x2000);
    }
    FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),param_1[1]);
    if (*param_1 != 0) {
      uVar5 = FUN_003488e4();
      piVar6 = (int *)*puVar3;
      (**(code **)(*piVar6 + 0x10))(piVar6,uVar5);
    }
  }
  if (param_1[4] != 0) {
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00454f34), iVar4 != 0)) {
      FUN_0036788c(DAT_00454f48);
    }
    FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),param_1[4]);
    if (param_1[3] != 0) {
      uVar5 = FUN_003488e4();
      piVar6 = (int *)*puVar3;
      (**(code **)(*piVar6 + 0x10))(piVar6,uVar5);
    }
  }
  if (param_1[2] != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
  }
  if (param_1[5] != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
    return;
  }
  return;
}
