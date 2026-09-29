// OoT3D decomp @ 00164fcc  name=FUN_00164fcc  size=156

void FUN_00164fcc(int param_1,int param_2)

{
  int iVar1;

  if (*(char *)(param_1 + 0xe14) != '\0') {
    *(uint *)(*(int *)(DAT_00165068 + param_2) + 0x29b8) =
         *(uint *)(*(int *)(DAT_00165068 + param_2) + 0x29b8) & 0xfcffffff;
  }
  iVar1 = FUN_00369334(DAT_0016506c,param_2,param_1,DAT_00165070,5);
  if (iVar1 == 0) {
    FUN_00373d0c(param_2);
  }
  FUN_0034f6e8(param_2,param_1 + 0xf0c);
  FUN_003504d0(param_1,param_1 + 0xe20);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
