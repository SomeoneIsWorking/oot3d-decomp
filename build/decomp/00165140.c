// OoT3D decomp @ 00165140  name=FUN_00165140  size=56

void FUN_00165140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0x3fc);
  iVar1 = param_2;
  if (iVar2 != 0) {
    iVar1 = DAT_00165184;
  }
  if (iVar2 == 0 || iVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4,param_1 + 0x400,param_2);
}
