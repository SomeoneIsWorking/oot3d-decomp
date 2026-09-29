// OoT3D decomp @ 004957e8  name=FUN_004957e8  size=92

void FUN_004957e8(int param_1,uint *param_2)

{
  uint *puVar1;

  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 4));
  if (*puVar1 == 0) {
    *param_2 = 0xffffffff;
  }
  else {
    *param_2 = puVar1[1];
  }
  if (*puVar1 < 2) {
    param_2[1] = 0xffffffff;
  }
  else {
    param_2[1] = puVar1[2];
  }
  if (*puVar1 < 3) {
    param_2[2] = 0xffffffff;
  }
  else {
    param_2[2] = puVar1[3];
  }
  if (*puVar1 < 4) {
    param_2[3] = 0xffffffff;
  }
  else {
    param_2[3] = puVar1[4];
  }
  return;
}
