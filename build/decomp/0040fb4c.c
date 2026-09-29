// OoT3D decomp @ 0040fb4c  name=FUN_0040fb4c  size=72

void FUN_0040fb4c(int *param_1,int *param_2)

{
  float fVar1;
  int local_10;
  undefined1 local_c;

  local_10 = (int)*(short *)(*param_1 + 0x10);
  if (local_10 != 0) {
    local_10 = *param_1 + local_10;
    local_c = 0;
    fVar1 = (float)FUN_003087a4(&local_10);
    *param_2 = (int)fVar1;
  }
  return;
}
