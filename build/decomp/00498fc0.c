// OoT3D decomp @ 00498fc0  name=FUN_00498fc0  size=16

undefined4 FUN_00498fc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;

  if (param_1 != 0) {
    iVar1 = FUN_004a16f8(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
    if (iVar1 == 0) {
      uVar2 = 0x13;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}
