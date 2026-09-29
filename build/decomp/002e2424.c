// OoT3D decomp @ 002e2424  name=FUN_002e2424  size=36

undefined1 FUN_002e2424(int param_1)

{
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;

  local_c = *DAT_002e2448;
  uStack_8 = DAT_002e2448[1];
  uStack_4 = DAT_002e2448[2];
  return *(undefined1 *)((int)&local_c + *(int *)(param_1 + 0xf3c));
}
