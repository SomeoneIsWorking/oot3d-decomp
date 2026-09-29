// OoT3D decomp @ 002e1d58  name=FUN_002e1d58  size=148

undefined4 FUN_002e1d58(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;

  iVar1 = DAT_002e1df0;
  iVar2 = *(int *)(DAT_002e1df0 + 8);
  uVar3 = DAT_002e1dec;
  if (iVar2 != 0) {
    uVar4 = 1 << (param_2 + param_3 & 0xffU);
    uVar5 = *(uint *)(DAT_002e1df0 + 0xc) & uVar4;
    if (param_1 == 0) {
      if (uVar5 == 0) {
        return DAT_002e1dec;
      }
      uVar3 = FUN_002dcea8(iVar2,0,param_2,param_3);
      uVar4 = *(uint *)(iVar1 + 0xc) & ~uVar4;
    }
    else {
      if (uVar5 != 0) {
        return DAT_002e1dec;
      }
      uVar3 = FUN_002dcea8(iVar2,param_1,param_2,param_3);
      uVar4 = *(uint *)(iVar1 + 0xc) | uVar4;
    }
    *(uint *)(iVar1 + 0xc) = uVar4;
  }
  return uVar3;
}
