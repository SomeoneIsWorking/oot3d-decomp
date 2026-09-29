// OoT3D decomp @ 00177d44  name=FUN_00177d44  size=136

void FUN_00177d44(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x2fc);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
    FUN_0036ae48(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
    *(undefined2 *)(*(int *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54) + 0x1b0) = 0;
    FUN_0036e980(param_2,0,8);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00177dcc;
  }
  return;
}
