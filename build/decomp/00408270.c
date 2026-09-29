// OoT3D decomp @ 00408270  name=FUN_00408270  size=260

void FUN_00408270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;

  FUN_0030ae84(*(undefined4 *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x34) == 0) && (iVar3 = *(int *)(param_1 + 0x30), iVar3 != -1)) {
    param_4 = 0;
    iVar1 = FUN_0030acc0(*(int *)(param_1 + 0x18) + 0xc,iVar3,*(undefined4 *)(param_1 + 0x1c),2,0);
    if ((iVar1 == 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20), UNRECOVERED_JUMPTABLE != (code *)0x0))
    goto LAB_00408334;
    uVar2 = FUN_0030abf4(*(int *)(param_1 + 0x18) + 0xc,iVar3);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    iVar3 = iVar3 + 0xc;
  }
  iVar3 = FUN_0030b804(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                       *(undefined4 *)(param_1 + 0x2c),iVar3,param_4);
  if ((iVar3 == 0) &&
     (iVar3 = FUN_00405370(*(int *)(param_1 + 0x18) + 0xc,*(undefined4 *)(param_1 + 0x34),
                           *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x1c)),
     iVar3 == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_00408334:
                    /* WARNING: Could not recover jumptable at 0x00408348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0,0,*(undefined4 *)(param_1 + 0x24));
      return;
    }
  }
  else if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040836c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(1,param_1 + 0x30,*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}
