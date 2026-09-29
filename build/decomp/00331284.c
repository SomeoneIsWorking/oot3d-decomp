// OoT3D decomp @ 00331284  name=FUN_00331284  size=108

void FUN_00331284(undefined4 param_1,int param_2)

{
  undefined1 auStack_1c [12];
  undefined4 local_10;

  FUN_00313cd4(param_2);
  *(undefined1 *)(param_2 + 0x1b7) = *(undefined1 *)(param_2 + 0x1b6);
  *(undefined1 *)(param_2 + 0x1b6) = 0;
  FUN_00357a28(param_2,1,auStack_1c);
  local_10 = DAT_003312f0;
  FUN_00358964(param_2,1,auStack_1c);
  FUN_003589cc(param_2,1);
  *(undefined1 *)(param_2 + 0x1b6) = *(undefined1 *)(param_2 + 0x1b7);
  return;
}
