// OoT3D decomp @ 00487d00  name=FUN_00487d00  size=144

void FUN_00487d00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;

  if ((*(int *)(param_1 + 0x920) != 0) && (iVar1 = FUN_002c454c(), iVar1 != 0)) {
    iVar2 = *(int *)(param_1 + 0x920);
    iVar3 = *(int *)(iVar2 + 4);
    iVar1 = iVar2;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar2 + 100);
    }
    if ((iVar3 != 0 && iVar1 != 0) &&
       (*(char *)(*(int *)(iVar3 + *(int *)(iVar2 + 0x78) * 4) + 0x390) != '\0')) {
      if (param_2 < 0) {
        param_2 = 0;
      }
      FUN_00333294(iVar1,param_2,*(int *)(iVar2 + 0x78),extraout_r3,unaff_r4,unaff_r5,unaff_r6,
                   unaff_lr);
      FUN_00333294(*(undefined4 *)(iVar2 + 0x68),param_2);
      *(int *)(iVar2 + 0xb0) = param_2;
    }
    return;
  }
  return;
}
