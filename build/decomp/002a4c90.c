// OoT3D decomp @ 002a4c90  name=FUN_002a4c90  size=216

void FUN_002a4c90(int param_1,int param_2)

{
  short sVar1;
  int iVar2;

  if ((*(short *)(param_1 + 0x688) == 5) &&
     (iVar2 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x10,0,0,
                               DAT_002a4d68,0,1), iVar2 != 0)) {
    *(undefined2 *)(iVar2 + 0x26c) = 0;
  }
  sVar1 = *(short *)(param_1 + 0x688) + -1;
  *(short *)(param_1 + 0x688) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  FUN_00374444(param_2,param_1,param_1 + 0x28,0x40);
  FUN_00374444(param_2,param_1,param_1 + 0x28,0x40);
  FUN_00374444(param_2,param_1,param_1 + 0x28,0x40);
  FUN_00374428(param_1);
  return;
}
