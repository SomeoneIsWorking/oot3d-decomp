// OoT3D decomp @ 00301fc4  name=FUN_00301fc4  size=144

void FUN_00301fc4(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_10 [4];

  iVar1 = DAT_00302054;
  uVar2 = *(uint *)(DAT_00302054 + 8);
  if (uVar2 < param_1) {
    iVar3 = FUN_00301a0c(auStack_10,uVar2 + 0x8000000,0,param_1 - uVar2,3,3);
    if (iVar3 < 0) {
      return;
    }
  }
  else {
    iVar3 = FUN_00301a0c(auStack_10,param_1 + 0x8000000,0,uVar2 - param_1,1,0);
    if (iVar3 < 0) {
      return;
    }
  }
  *(uint *)(iVar1 + 8) = param_1;
  return;
}
