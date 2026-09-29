// OoT3D decomp @ 0018ebc8  name=FUN_0018ebc8  size=88

void FUN_0018ebc8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar2 = *(int *)(param_1 + 0x124);
  bVar5 = iVar2 != 0;
  iVar4 = 0;
  if (bVar5) {
    iVar4 = *(int *)(iVar2 + 0x13c);
    param_3 = iVar4;
  }
  iVar1 = param_3;
  iVar3 = iVar2;
  if (bVar5 && param_3 != 0) {
    iVar3 = iVar2 + 0x100;
    iVar4 = (int)*(short *)(iVar2 + 0x1aa);
    iVar1 = iVar4;
  }
  if (((bVar5 && param_3 != 0) && iVar1 != 0) && -1 < iVar4) {
    *(short *)(iVar3 + 0xaa) = (short)iVar1 + -1;
  }
  FUN_00350b88(param_2,param_1 + 0xe10);
  FUN_003504d0(param_1,param_1 + 0xdfc);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
