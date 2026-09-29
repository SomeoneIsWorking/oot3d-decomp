// OoT3D decomp @ 0036a2dc  name=FUN_0036a2dc  size=44

void FUN_0036a2dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;

  iVar1 = FUN_0036cf80(param_1,param_2,param_4,param_5);
  if (iVar1 != -1) {
    *(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0xa54) + 0x170) = param_3;
  }
  return;
}
