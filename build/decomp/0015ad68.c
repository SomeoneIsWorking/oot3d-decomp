// OoT3D decomp @ 0015ad68  name=FUN_0015ad68  size=396

void FUN_0015ad68(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;

  fVar2 = DAT_0015aefc;
  piVar1 = DAT_0015aef4;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015aef4 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(uint)*(ushort *)(param_2 + 0x22b8) < (int)(DAT_0015aef8 / fVar3 + DAT_0015aefc)) {
    FUN_0035ae08(param_1,DAT_0015af00);
    FUN_0035ae08(param_1,DAT_0015af04);
  }
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0015af08 / fVar3 + fVar2) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    FUN_003674e4(2);
  }
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0015af0c / fVar3 + fVar2) == (uint)*(ushort *)(param_1 + 0x2ee)) {
    FUN_0037547c(DAT_0015af18,0,4,DAT_0015af14,DAT_0015af14,DAT_0015af10);
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_0015af1c,
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0xf5,0,0,0,2,1);
  }
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0015af20 / fVar3 + fVar2) == (uint)*(ushort *)(param_1 + 0x2ee)) {
    FUN_00374428(param_1);
  }
  *(short *)(param_1 + 0x2ee) = *(short *)(param_1 + 0x2ee) + 1;
  return;
}
