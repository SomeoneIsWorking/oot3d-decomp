// OoT3D decomp @ 0029d5a0  name=FUN_0029d5a0  size=148

void FUN_0029d5a0(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_54 [48];

  FUN_00372224(auStack_54,param_1 + 0x148);
  FUN_00357fd0(*(undefined4 *)(DAT_0029d840 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  if (*(int *)(param_1 + 0x21c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x21c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x21c),auStack_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x21c),0);
  }
  iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(*(undefined1 *)(param_1 + 0x1a4),DAT_0029d844);
  }
  return;
}
