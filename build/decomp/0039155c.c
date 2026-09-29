// OoT3D decomp @ 0039155c  name=FUN_0039155c  size=44

void FUN_0039155c(int param_1)

{
  undefined4 uVar1;

  FUN_0031c07c();
  if (*(int *)(param_1 + 3000) != 0x45) {
    if (*(int *)(param_1 + 3000) == 0xb) {
      uVar1 = 0x46;
    }
    else {
      uVar1 = 0x44;
    }
    *(undefined4 *)(param_1 + 3000) = uVar1;
  }
  return;
}
