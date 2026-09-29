// OoT3D decomp @ 0021df78  name=FUN_0021df78  size=124

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0021df78(int param_1,int param_2)

{
  undefined4 unaff_r4;
  int unaff_pc;
  undefined4 in_cr1;

  if ((*(int *)(param_1 + 0x98) < DAT_0021e080) &&
     ((int)ABS(*(float *)(param_1 + 0x9c)) < DAT_0021e084)) {
    coprocessor_loadlong(1,in_cr1,unaff_pc + 0x2f0);
    return unaff_r4;
  }
  if (*(char *)(param_1 + 0x1a7) != '\0') {
    *(undefined1 *)(param_1 + 0x1a7) = 0;
    *(undefined2 *)(param_2 + 0x5c30) = 0;
  }
  return 0;
}
