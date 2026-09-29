// OoT3D decomp @ 0021173c  name=FUN_0021173c  size=332

void FUN_0021173c(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;

  FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  FUN_00350f34(param_1,param_1 + 0x1d4,param_1 + 0x1d8,0);
  iVar2 = DAT_0021188c;
  puVar1 = DAT_00211888;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    if (((*DAT_00211888 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00211888), iVar4 != 0)) {
      FUN_0036788c(iVar2 + -0x2000);
    }
    FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),*(undefined4 *)(param_1 + 0x1e0));
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00211888), iVar4 != 0)) {
      FUN_0036788c(DAT_00211898);
    }
    FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),*(undefined4 *)(param_1 + 0x1e8));
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  puVar3 = DAT_0021189c;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    uVar5 = FUN_003488e4();
    piVar6 = (int *)*puVar3;
    (**(code **)(*piVar6 + 0x10))(piVar6,uVar5);
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    uVar5 = FUN_003488e4();
    piVar6 = (int *)*puVar3;
    (**(code **)(*piVar6 + 0x10))(piVar6,uVar5);
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  return;
}
