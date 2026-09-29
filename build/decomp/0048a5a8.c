// OoT3D decomp @ 0048a5a8  name=FUN_0048a5a8  size=144

int FUN_0048a5a8(int param_1,uint param_2)

{
  int iVar1;

  if ((param_2 & 1) != 0) {
    FUN_002ce2bc(param_1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0xc))
    ;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((param_2 & 2) != 0) {
    FUN_002ce2bc(param_1,*(int *)(param_1 + 0x2c),
                 *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x2c));
    for (iVar1 = *(int *)(param_1 + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  }
  return param_1;
}
