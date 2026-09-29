// OoT3D decomp @ 002503e4  name=FUN_002503e4  size=196

void FUN_002503e4(int param_1,int param_2)

{
  int iVar1;

  *(short *)(param_1 + 0x4d8) = *(short *)(param_1 + 0x4d8) + 0x5dc;
  *(short *)(param_1 + 0x4e0) = *(short *)(param_1 + 0x4e0) + 0x683;
  FUN_00376864(param_1);
  iVar1 = *(int *)(param_1 + 0x4a4) + -1;
  *(int *)(param_1 + 0x4a4) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  iVar1 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x10,0,0,
                           DAT_002504a8,0,1);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x26c) = 0;
  }
  FUN_00374444(param_2,param_1,param_1 + 0x28,0xa0);
  FUN_00374428(param_1);
  return;
}
