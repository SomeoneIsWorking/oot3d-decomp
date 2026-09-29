// OoT3D decomp @ 0019454c  name=FUN_0019454c  size=224

void FUN_0019454c(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;

  if (*(short *)(param_1 + 0x510) == 0) {
    psVar2 = (short *)z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),
                                       *(undefined4 *)(param_1 + 0x2c),
                                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x10
                                       ,0,0,0,4,1);
    if (psVar2 != (short *)0x0) {
      sVar1 = *psVar2;
      if (sVar1 == 0x10 || sVar1 == 0x4c) {
        psVar2[0x136] = 0;
      }
      else if (sVar1 == 0xda) {
        psVar2[0xd4] = 0;
      }
    }
    *(undefined2 *)(param_1 + 0x516) = 0xc;
    *(undefined4 *)(param_1 + 0x498) = DAT_00194630;
    return;
  }
  if (*(short *)(DAT_0019462c + param_1) == 0) {
    FUN_00375ed8(param_1,0x400000,200,0,(int)*(short *)(param_1 + 0x510));
    *(short *)(param_1 + 0x510) = *(short *)(param_1 + 0x510) + -1;
  }
  return;
}
