// OoT3D decomp @ 004663f4  name=FUN_004663f4  size=40

void FUN_004663f4(int param_1)

{
  undefined1 uVar1;

  if (param_1 == 1) {
    uVar1 = 2;
  }
  else {
    if (param_1 != 0) {
      return;
    }
    uVar1 = 3;
  }
  *(undefined1 *)(DAT_0046641c + 3) = uVar1;
  FUN_002fa198();
  return;
}
