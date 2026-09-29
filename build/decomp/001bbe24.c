// OoT3D decomp @ 001bbe24  name=FUN_001bbe24  size=76

void FUN_001bbe24(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = *(int *)(param_1 + 0x124);
  iVar3 = 0;
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x100;
    iVar3 = (int)*(short *)(iVar1 + 0x1aa);
    param_3 = iVar3;
  }
  if ((iVar1 != 0 && param_3 != 0) && -1 < iVar3) {
    *(short *)(iVar2 + 0xaa) = (short)param_3 + -1;
  }
  FUN_00350b88(param_2,param_1 + 0x660);
  FUN_003504d0(param_1,param_1 + 0x640);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
