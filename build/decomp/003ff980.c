// OoT3D decomp @ 003ff980  name=FUN_003ff980  size=72

void FUN_003ff980(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  int local_10;

  local_10 = param_4;
  FUN_0030ee14(&local_10,DAT_003ff9c8 + param_1 * 4);
  fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = extraout_r1;
  if (local_10 != 0) {
    uVar1 = param_2;
  }
  if (local_10 != 0) {
    FUN_00404b20(fVar2 * DAT_003ff9cc,local_10,uVar1);
  }
  FUN_0030ede0(&local_10);
  return;
}
