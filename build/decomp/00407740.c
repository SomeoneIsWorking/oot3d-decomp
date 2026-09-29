// OoT3D decomp @ 00407740  name=FUN_00407740  size=108

void FUN_00407740(int param_1,undefined4 param_2,int param_3)

{
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;

  if (*(int *)(param_1 + 0x7c) != 0) {
    local_20 = param_1 + 0xc4;
    local_1c = DAT_004077ac;
    local_18 = FUN_00308f80(param_3,0);
    local_14 = *(undefined1 *)(param_3 + 0x24);
    (**(code **)(param_1 + 0x7c))(param_2,&local_20,*(undefined4 *)(param_1 + 0x80));
    *(undefined1 *)(param_3 + 0x24) = local_14;
  }
  return;
}
