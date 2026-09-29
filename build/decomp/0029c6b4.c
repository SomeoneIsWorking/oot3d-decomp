// OoT3D decomp @ 0029c6b4  name=FUN_0029c6b4  size=172

void FUN_0029c6b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;

  FUN_003510b0(param_1,DAT_0029c77c,param_3,param_4,param_4);
  FUN_0037572c(*(undefined4 *)(DAT_0029c780 + *(short *)(param_1 + 0x1c) * 4),param_1);
  FUN_00372f38(param_1,param_2,param_1 + 0x21c,
               *(undefined4 *)(DAT_0029c784 + *(short *)(param_1 + 0x1c) * 4),0);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0) {
    FUN_00350eb8(param_2,param_1 + 0x1a8);
    FUN_00350d48(param_2,param_1 + 0x1a8,param_1,DAT_0029c788,param_1 + 0x1c8);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_0029c798;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0029c794;
  return;
}
