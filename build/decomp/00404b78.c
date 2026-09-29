// OoT3D decomp @ 00404b78  name=FUN_00404b78  size=448

void FUN_00404b78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  FUN_0030ae84(*(undefined4 *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x34) == 0) && (iVar4 = *(int *)(param_1 + 0x30), iVar4 != -1)) {
    iVar1 = FUN_0030acc0(*(int *)(param_1 + 0x18) + 0xc,iVar4,*(undefined4 *)(param_1 + 0x1c),1,0);
    if ((iVar1 == 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00404bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x20))(0,0,0,*(undefined4 *)(param_1 + 0x24));
      return;
    }
    uVar2 = FUN_0030abf4(*(int *)(param_1 + 0x18) + 0xc,iVar4);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  uVar5 = 0;
  do {
    iVar4 = param_1 + uVar5 * 8;
    if (*(int *)(iVar4 + 0x3c) == 0) {
      iVar1 = *(int *)(iVar4 + 0x38);
      if (iVar1 != -1) {
        iVar3 = FUN_0030acc0(*(int *)(param_1 + 0x18) + 0xc,iVar1,*(undefined4 *)(param_1 + 0x1c),4,
                             0);
        if ((iVar3 == 0) && (*(code **)(param_1 + 0x20) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00404c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_1 + 0x20))(0,0,0,*(undefined4 *)(param_1 + 0x24));
          return;
        }
        uVar2 = FUN_0030abf4(*(int *)(param_1 + 0x18) + 0xc,iVar1);
        *(undefined4 *)(iVar4 + 0x3c) = uVar2;
        goto LAB_00404c90;
      }
    }
    else {
LAB_00404c90:
      if (*(int *)(iVar4 + 0x38) != -1) {
        iVar1 = *(int *)(param_1 + 0x28);
        if (iVar1 != 0) {
          iVar1 = iVar1 + 0xc;
        }
        iVar1 = FUN_0030b500(*(undefined4 *)(iVar4 + 0x3c),*(undefined4 *)(param_1 + 0x2c),iVar1);
        if ((iVar1 == 0) &&
           (iVar4 = FUN_0040526c(*(int *)(param_1 + 0x18) + 0xc,*(undefined4 *)(iVar4 + 0x3c),
                                 *(undefined4 *)(param_1 + 0x1c)), iVar4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00404cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_1 + 0x20))(0,0,0,*(undefined4 *)(param_1 + 0x24));
          return;
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (3 < uVar5) {
      if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00404d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x20))
                  (1,param_1 + 0x30,param_1 + 0x38,*(undefined4 *)(param_1 + 0x24));
        return;
      }
      return;
    }
  } while( true );
}
