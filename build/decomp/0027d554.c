// OoT3D decomp @ 0027d554  name=FUN_0027d554  size=172

void FUN_0027d554(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(DAT_0027d600,param_2,param_1,param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x1e0) < 0x42000001) {
    *(undefined2 *)(DAT_0027d604 + param_1) = 3;
  }
  else {
    FUN_0033398c(param_1);
  }
  FUN_00376340(DAT_0027d608,DAT_0027d60c,DAT_0027d608,param_2,param_1,7);
  if (iVar1 != 0) {
    FUN_0033391c(DAT_0027d610,param_1,9,0);
    *(undefined4 *)(DAT_0027d614 + param_1) = 0x12;
  }
  return;
}
