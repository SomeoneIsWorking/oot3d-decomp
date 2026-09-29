// OoT3D decomp @ 002935b0  name=FUN_002935b0  size=436

void FUN_002935b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00330370(param_1);
  iVar4 = DAT_00293768;
  uVar1 = DAT_00293764;
  iVar5 = param_1 + 0x1a4;
  iVar2 = FUN_003736fc(*(undefined4 *)(DAT_00293768 + 0x1c),DAT_00293764,iVar5);
  uVar3 = DAT_0029376c;
  if (iVar2 == 0) {
    iVar2 = FUN_003736fc(*(undefined4 *)(iVar4 + 0x20),uVar1,iVar5);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_003736fc(*(undefined4 *)(iVar4 + 0x24),uVar1,iVar5), uVar3 = DAT_0029377c,
        iVar2 == 0)) &&
       (iVar4 = FUN_003736fc(*(undefined4 *)(iVar4 + 0x28),uVar1,iVar5), iVar4 == 0))
    goto LAB_002936b0;
  }
  else {
    FUN_0037547c(DAT_0029376c,param_1 + 0x28,4,DAT_00293774,DAT_00293774,DAT_00293770);
    uVar3 = DAT_00293778;
  }
  FUN_0037547c(uVar3,param_1 + 0x28,4,DAT_00293774,DAT_00293774,DAT_00293770);
LAB_002936b0:
  iVar4 = FUN_00326528(param_1,param_2);
  uVar1 = DAT_00293784;
  if (iVar4 != 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x1d4) != 2) || (*(int *)(param_1 + 0x1e0) <= DAT_00293780)) &&
     (*(float *)(param_1 + 0x20c) <=
      *(float *)(*(int *)(param_1 + 0x21c) + (uint)*(byte *)(param_1 + 0x219) * 0x34 + 0x1c))) {
    *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
    FUN_003fd1b8(uVar1,param_2,param_1,param_1 + 0x1a4);
  }
  FUN_00376340(DAT_0029378c,DAT_00293788,DAT_00293788,param_2,param_1,4);
  return;
}
