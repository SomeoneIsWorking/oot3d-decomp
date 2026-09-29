// OoT3D decomp @ 004065e0  name=FUN_004065e0  size=44

void FUN_004065e0(int param_1)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 9) != '\0') {
    uVar1 = FUN_0030c7cc();
    FUN_00309bdc(uVar1,param_1 + 0x48);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}
