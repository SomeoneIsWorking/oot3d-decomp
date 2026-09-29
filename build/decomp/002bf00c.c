// OoT3D decomp @ 002bf00c  name=FUN_002bf00c  size=104

void FUN_002bf00c(int param_1)

{
  int local_14;
  undefined4 local_10;
  undefined1 auStack_c [4];

  local_14 = *(int *)(param_1 + 0x44);
  local_10 = *(undefined4 *)(local_14 + 8);
  FUN_00304a60(auStack_c,param_1 + 0x30,&local_10,&local_14);
  FUN_003049b0(param_1 + 0x50);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x40;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x10000;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  return;
}
