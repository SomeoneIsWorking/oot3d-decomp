// OoT3D decomp @ 002dbcbc  name=FUN_002dbcbc  size=76

void FUN_002dbcbc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;

  local_10 = param_4;
  while (iVar1 = FUN_002d2fc4(param_1,&local_10), iVar1 != 0) {
    FUN_0047e4b4(local_10);
    coproc_moveto_Data_Memory_Barrier(0);
    FUN_002d2ef4(param_1 + 0xb4,local_10);
  }
  return;
}
