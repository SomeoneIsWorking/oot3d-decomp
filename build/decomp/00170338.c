// OoT3D decomp @ 00170338  name=FUN_00170338  size=64

void FUN_00170338(int param_1)

{
  undefined4 uVar1;

  uVar1 = DAT_001706f4;
  *(short *)(param_1 + 0xace) = *(short *)(param_1 + 0xace) + 1;
  *(undefined1 *)(*(int *)(param_1 + 0x124) + 0xacc) = 1;
  FUN_0037572c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
