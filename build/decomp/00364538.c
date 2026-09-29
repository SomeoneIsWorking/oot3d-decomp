// OoT3D decomp @ 00364538  name=FUN_00364538  size=140

void FUN_00364538(int param_1,int param_2)

{
  int iVar1;

  iVar1 = 0;
  do {
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x34,0,
                     (int)*(short *)(param_1 + 0x36),0,0,1);
    iVar1 = iVar1 + 1;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 0x5555;
  } while (iVar1 < 3);
  FUN_00374444(param_2,param_1,param_1 + 0x28,0x50);
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(10);
}
