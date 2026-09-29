// OoT3D decomp @ 003715d0  name=FUN_003715d0  size=164

void FUN_003715d0(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 uStack_18;

  local_1c = *DAT_00371674;
  uStack_18 = DAT_00371674[1];
  if (*(char *)(param_1 + 0xd6c) == '\0') {
    FUN_003716f0(param_2,(int)*(short *)((int)&local_1c + param_3 * 2),0x14,param_4);
    *(undefined1 *)(param_1 + 0xd6c) = 1;
  }
  iVar1 = DAT_00371678;
  if (param_3 == 2) {
    *(undefined2 *)(DAT_00371678 + 0xa0) = 0xfff0;
  }
  FUN_0036e980(param_2,param_1,8);
  FUN_0034be04(1);
  if (param_3 == 0) {
    *(undefined2 *)(*DAT_0037167c + 0xe60) = 0;
  }
  *(undefined2 *)(iVar1 + 0x5e) = 0;
  return;
}
