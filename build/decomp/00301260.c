// OoT3D decomp @ 00301260  name=FUN_00301260  size=84

void FUN_00301260(int param_1)

{
  uint uVar1;

  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 < 2) {
      FUN_0034fc6c();
    }
    else if (uVar1 == 2 || uVar1 == 3) {
      FUN_00350ef4();
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
