// OoT3D decomp @ 00112fd0  name=FUN_00112fd0  size=124

void FUN_00112fd0(int param_1,int param_2)

{
  int iVar1;

  if ((*(int *)(param_1 + 0x98) <= DAT_0011304c) &&
     (iVar1 = *(int *)(param_1 + 0x1a8) + -1, *(int *)(param_1 + 0x1a8) = iVar1, iVar1 == 0)) {
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x16,
                     (int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                     (int)*(short *)(param_1 + 0xc0),0xffffffff,1);
    *(undefined4 *)(param_1 + 0x1a8) = 0x50;
  }
  return;
}
