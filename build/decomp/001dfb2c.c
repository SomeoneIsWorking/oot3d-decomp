// OoT3D decomp @ 001dfb2c  name=FUN_001dfb2c  size=116

void FUN_001dfb2c(int param_1,int param_2)

{
  z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,10,0,
                   (int)*(short *)(param_1 + 0xbe),0,
                   *(byte *)(DAT_001dfba0 + 0x1f) & 0x1f |
                   (uint)*(byte *)(DAT_001dfba4 +
                                  (((uint)*(byte *)(DAT_001dfba0 + 0x1f) << 0x18) >> 0x1d)) << 5 |
                   0x5000,1);
  FUN_00374428(param_1);
  return;
}
