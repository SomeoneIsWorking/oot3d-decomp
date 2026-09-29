// OoT3D decomp @ 0015af24  name=FUN_0015af24  size=316

void FUN_0015af24(int param_1)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if (*(short *)(param_1 + 0x462) == 0) {
    if (*(int *)(param_1 + 0x98) < DAT_0015b060) {
      *(undefined4 *)(param_1 + 0x28) = DAT_0015b064;
      *(undefined4 *)(param_1 + 0x2c) = DAT_0015b068;
      *(undefined4 *)(param_1 + 0x30) = DAT_0015b06c;
    }
    uVar3 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar2 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar1 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                                (byte)(in_fpscr >> 0x15) & 3);
    FUN_003591e4(uVar1,uVar2,uVar3,param_1 + 0x498,100,0x7f,0x7f,0xff,0);
    uVar3 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar2 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                (byte)(in_fpscr >> 0x15) & 3);
    uVar1 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                                (byte)(in_fpscr >> 0x15) & 3);
    FUN_003591e4(uVar1,uVar2,uVar3,param_1 + 0x4b4,100,0x7f,0x7f,0xff,0);
    *(undefined4 *)(param_1 + 0x490) = DAT_0015b070;
  }
  *(short *)(param_1 + 0x462) = *(short *)(param_1 + 0x462) + -1;
  return;
}
