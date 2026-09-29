// OoT3D decomp @ 00298828  name=FUN_00298828  size=116

void FUN_00298828(int param_1,int param_2)

{
  undefined4 uVar1;

  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 8;
  *(undefined2 *)(param_2 + 0x2248) = 0xfffd;
  uVar1 = FUN_0036aa20(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                       *(undefined4 *)(param_2 + 0x30),param_1 + 0x208c,param_2,param_1,0x66,0,
                       (int)*(short *)(param_2 + 0xbe),0,0);
  *(undefined4 *)(param_2 + 0x1224) = uVar1;
  return;
}
