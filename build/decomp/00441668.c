// OoT3D decomp @ 00441668  name=FUN_00441668  size=88

void FUN_00441668(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = DAT_004416c0;
  if (*(int *)(DAT_004416c0 + 0x38) == 0) {
    iVar2 = FUN_00313ce0(0x18);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_0044bd34(iVar2,param_1);
    }
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
  }
  if (*(int *)(iVar1 + 0x3c) == 0) {
    iVar2 = FUN_00313ce0(0xc);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_0044d11c(iVar2,param_1);
    }
    *(undefined4 *)(iVar1 + 0x3c) = uVar3;
  }
  return;
}
