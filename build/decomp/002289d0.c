// OoT3D decomp @ 002289d0  name=FUN_002289d0  size=84

void FUN_002289d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  FUN_00350b88(param_2,param_1 + 0xa54);
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x58;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4,param_1 + iVar1 + 0xac4);
}
