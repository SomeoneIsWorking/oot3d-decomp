// OoT3D decomp @ 0031d314  name=FUN_0031d314  size=156

void FUN_0031d314(int param_1)

{
  int iVar1;
  float local_10 [2];

  local_10[0] = *DAT_0031d3b0;
  local_10[1] = DAT_0031d3b0[1];
  if ((local_10[*(int *)(param_1 + 0xe7c)] < *(float *)(param_1 + 0xe78)) &&
     ((*(int *)(param_1 + 0xe7c) != 0 || (*(float *)(param_1 + 0xe78) <= DAT_0031d3b0[1])))) {
    FUN_0037547c(DAT_0031d3bc,param_1 + 0x28,4,DAT_0031d3b8,DAT_0031d3b8,DAT_0031d3b4);
    iVar1 = *(int *)(param_1 + 0xe7c) + 1;
    *(int *)(param_1 + 0xe7c) = iVar1;
    if (1 < iVar1) {
      *(undefined4 *)(param_1 + 0xe7c) = 0;
    }
  }
  return;
}
