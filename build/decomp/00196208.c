// OoT3D decomp @ 00196208  name=FUN_00196208  size=300

void FUN_00196208(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_00196338;
  iVar2 = param_2 + 0x208c;
  z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_00196334,
                   *(undefined4 *)(param_1 + 0x30),iVar2,param_2,DAT_00196338,
                   (int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                   (int)*(short *)(param_1 + 0xc0),1,1);
  z_actor_003738d0(*(float *)(param_1 + 0x28) + DAT_00196340,
                   *(float *)(param_1 + 0x2c) + DAT_0019633c,*(undefined4 *)(param_1 + 0x30),iVar2,
                   param_2,uVar1,(int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                   (int)*(short *)(param_1 + 0xc0),2,1);
  z_actor_003738d0(*(float *)(param_1 + 0x28) - DAT_00196348,
                   *(float *)(param_1 + 0x2c) + DAT_00196344,*(undefined4 *)(param_1 + 0x30),iVar2,
                   param_2,uVar1,(int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                   (int)*(short *)(param_1 + 0xc0),3,1);
  z_actor_003738d0(*(float *)(param_1 + 0x28) + DAT_00196350,
                   *(float *)(param_1 + 0x2c) + DAT_0019634c,*(undefined4 *)(param_1 + 0x30),iVar2,
                   param_2,uVar1,(int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),
                   (int)*(short *)(param_1 + 0xc0),4,1);
  return;
}
