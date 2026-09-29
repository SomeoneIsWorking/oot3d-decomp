// OoT3D decomp @ 00388148  name=FUN_00388148  size=376

void FUN_00388148(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_00388398,1);
  if (*(int *)(param_1 + 0x1c6c) == 0) {
    FUN_00375bcc(param_1,DAT_0038839c);
  }
  else {
    *(int *)(param_1 + 0x1c6c) = *(int *)(param_1 + 0x1c6c) + -1;
  }
  iVar1 = FUN_00370734(param_1 + 0x1e0);
  if (iVar1 == 0) {
    if (*(float *)(param_1 + 0x21c) == *(float *)(param_1 + 0x228) - DAT_003883bc) {
      FUN_00375bcc(param_1,DAT_003883c0);
      return;
    }
  }
  else {
    iVar1 = FUN_00328e08(param_2,param_1);
    if (iVar1 == 0) {
      if (DAT_003883a0 < *(int *)(param_1 + 0x98)) {
        if ((DAT_003883b4 < *(int *)(param_1 + 0x98)) ||
           (iVar1 = FUN_0036f18c(param_1,DAT_003883b8), iVar1 == 0)) {
          FUN_003231b8(param_1);
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        FUN_0035eff0(param_1);
      }
      else {
        iVar1 = FUN_0036f18c(param_1,DAT_003883b0);
        if (iVar1 == 0) {
          FUN_003231b8(param_1);
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        FUN_0035ecfc();
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
  }
  return;
}
