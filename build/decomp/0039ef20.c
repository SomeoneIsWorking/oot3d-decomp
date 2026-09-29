// OoT3D decomp @ 0039ef20  name=FUN_0039ef20  size=172

void FUN_0039ef20(int param_1,undefined4 param_2)

{
  int iVar1;

  if ((*(int *)(param_1 + 0x98) < DAT_0039f1c0) &&
     (iVar1 = FUN_00346d94(param_2,param_1), iVar1 != 0)) {
    FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    FUN_00338f60((int)*(short *)(param_1 + 0xbe));
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
