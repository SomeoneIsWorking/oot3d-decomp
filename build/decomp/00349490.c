// OoT3D decomp @ 00349490  name=FUN_00349490  size=96

void FUN_00349490(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;

  if (*(int *)(DAT_003494f0 + 4) == 0) {
    *(undefined4 *)(param_3 + 0x2a48) = param_2;
    if (param_4 == 0) {
      iVar1 = param_3 + 0x279c;
      *(uint *)(param_3 + 0x29b8) = *(uint *)(param_3 + 0x29b8) | 0x28;
    }
    else {
      if (param_4 != 1) {
        return;
      }
      iVar1 = param_3 + 0x2834;
      *(uint *)(param_3 + 0x29b8) = *(uint *)(param_3 + 0x29b8) | 0x30;
    }
    *(undefined4 *)(iVar1 + 0xc) = param_1;
  }
  return;
}
