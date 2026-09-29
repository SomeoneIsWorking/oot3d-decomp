// OoT3D decomp @ 001f80e4  name=FUN_001f80e4  size=100

void FUN_001f80e4(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;

  FUN_00350b88(param_2,param_1 + 0x6e4);
  if (0 < *(short *)(param_1 + 0x1c)) {
    iVar1 = *(int *)(param_1 + 0x124);
    iVar2 = extraout_r1;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x13c);
    }
    if (iVar1 != 0 && iVar2 != 0) {
      *(short *)(iVar1 + 0x686) = *(short *)(iVar1 + 0x686) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
