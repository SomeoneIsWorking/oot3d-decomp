// OoT3D decomp @ 0039d078  name=FUN_0039d078  size=44

void FUN_0039d078(int param_1)

{
  undefined4 uVar1;

  FUN_0031c07c();
  if (*(int *)(param_1 + 3000) != 0x23) {
    if (*(int *)(param_1 + 3000) == 0xb) {
      uVar1 = 0x24;
    }
    else {
      uVar1 = 0x22;
    }
    *(undefined4 *)(param_1 + 3000) = uVar1;
  }
  return;
}
