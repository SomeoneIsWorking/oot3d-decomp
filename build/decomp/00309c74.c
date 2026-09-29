// OoT3D decomp @ 00309c74  name=FUN_00309c74  size=124

int FUN_00309c74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_0030c758();
  iVar1 = FUN_004062d4();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 199) = 1;
    uVar2 = FUN_0030c6e0();
    iVar3 = FUN_00308d4c(uVar2,param_1,param_2,DAT_00309cf0,iVar1);
    if (iVar3 != 0) {
      *(int *)(iVar1 + 0x134) = iVar3;
      FUN_00407f9c(iVar1,param_3,param_4);
      return iVar1;
    }
    uVar2 = FUN_0030c758();
    FUN_00308d10(uVar2,iVar1);
  }
  return 0;
}
