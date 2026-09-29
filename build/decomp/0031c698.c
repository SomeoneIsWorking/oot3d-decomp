// OoT3D decomp @ 0031c698  name=FUN_0031c698  size=80

undefined4 FUN_0031c698(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = DAT_0031c6f0;
  if ((*(int *)(DAT_0031c6ec + 4) != 0) &&
     (iVar1 = FUN_00369334(DAT_0031c6f4,param_1,*(undefined4 *)(DAT_0031c6e8 + param_1),DAT_0031c6f8
                           ,4), uVar2 = DAT_0031c6fc, iVar1 != 0)) {
    return 0x160;
  }
  uVar2 = FUN_0034ca4c(uVar2);
  return uVar2;
}
