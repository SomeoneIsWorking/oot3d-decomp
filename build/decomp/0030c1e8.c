// OoT3D decomp @ 0030c1e8  name=FUN_0030c1e8  size=36

undefined4 FUN_0030c1e8(int param_1,undefined4 *param_2)

{
  if (*(undefined4 **)(param_1 + 0x16c) == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x168) = param_2;
  }
  else {
    **(undefined4 **)(param_1 + 0x16c) = param_2;
  }
  *(undefined4 **)(param_1 + 0x16c) = param_2;
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0x170);
}

