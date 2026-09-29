// OoT3D decomp @ 0040fb0c  name=FUN_0040fb0c  size=64

void FUN_0040fb0c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int local_10;
  undefined1 local_c;

  local_10 = (int)*(short *)(*param_1 + 0x10);
  if (local_10 != 0) {
    local_10 = *param_1 + local_10;
    local_c = 0;
    uVar1 = FUN_003087a4(&local_10);
    *param_2 = uVar1;
  }
  return;
}
