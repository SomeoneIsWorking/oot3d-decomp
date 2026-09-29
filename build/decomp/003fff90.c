// OoT3D decomp @ 003fff90  name=FUN_003fff90  size=40

int FUN_003fff90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    software_interrupt(0x23);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return param_1;
}
