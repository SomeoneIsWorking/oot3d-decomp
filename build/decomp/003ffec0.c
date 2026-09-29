// OoT3D decomp @ 003ffec0  name=FUN_003ffec0  size=204

void FUN_003ffec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 local_24;

  if (*(int *)(param_1 + 4) == 0) {
    FUN_003351b4(DAT_003fff8c);
  }
  local_24 = *(undefined4 *)(param_1 + 4);
  FUN_00400318(&local_24,param_2,param_3,param_4,param_5,param_6,param_7 & 0xff | 0x100);
  return;
}
