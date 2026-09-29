// OoT3D decomp @ 00302058  name=FUN_00302058  size=188

void FUN_00302058(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_10;

  piVar1 = DAT_00302114;
  uVar2 = DAT_00302114[1];
  if (uVar2 < param_1) {
    if (uVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *DAT_00302114 + uVar2;
    }
    iVar3 = FUN_00301a0c(&local_10,iVar3,0,param_1 - uVar2,0x10003,3);
    if (iVar3 < 0) {
      return;
    }
    if (piVar1[1] != 0) goto LAB_003020c4;
  }
  else {
    iVar3 = FUN_00301a0c(&local_10,*DAT_00302114 + param_1,0,uVar2 - param_1,1,0);
    if (iVar3 < 0) {
      return;
    }
    if (param_1 != 0) goto LAB_003020c4;
    local_10 = 0;
  }
  *piVar1 = local_10;
LAB_003020c4:
  piVar1[1] = param_1;
  return;
}
