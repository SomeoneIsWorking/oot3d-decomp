// OoT3D decomp @ 0020c65c  name=FUN_0020c65c  size=192

void FUN_0020c65c(int param_1)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;

  iVar1 = *DAT_0020c71c;
  if ((*(ushort *)(param_1 + 0x1a4) & 1) != 0) {
    FUN_00368d94(*(undefined2 *)(param_1 + 0x1a6),
                 *(undefined4 *)
                  (**(int **)(param_1 + 0x1b4) + *(int *)(**(int **)(param_1 + 0x1b4) + 0x14) + 4));
    uVar2 = VectorSignedToFloat(extraout_r1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar1 == 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 8) = uVar2;
      FUN_003586ec();
    }
    FUN_00372170(*(undefined4 *)(param_1 + 0x1ac),0);
    return;
  }
  if ((*(ushort *)(param_1 + 0x1a4) & 2) == 0) {
    return;
  }
  FUN_00368d94(*(undefined2 *)(param_1 + 0x1a6),
               *(undefined4 *)
                (**(int **)(param_1 + 0x1b8) + *(int *)(**(int **)(param_1 + 0x1b8) + 0x14) + 4));
  uVar2 = VectorSignedToFloat(extraout_r1_00,(byte)(in_fpscr >> 0x15) & 3);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 8) = uVar2;
    FUN_003586ec();
  }
  FUN_00372170(*(undefined4 *)(param_1 + 0x1b0),0);
  return;
}
