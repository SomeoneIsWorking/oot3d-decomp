// OoT3D decomp @ 0040e0c0  name=FUN_0040e0c0  size=80

bool FUN_0040e0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = FUN_00304308(*(undefined4 *)(param_1 + 4));
  FUN_0040db4c(uVar1,param_4);
  iVar2 = FUN_0040dadc();
  if (iVar2 != 0) {
    FUN_0034338c(param_2,iVar2,0x26);
    FUN_0035fb94(param_3,iVar2 + 0x26);
  }
  return iVar2 != 0;
}
