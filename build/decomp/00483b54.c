// OoT3D decomp @ 00483b54  name=FUN_00483b54  size=260

void FUN_00483b54(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;

  iVar1 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar1 == 0) {
    iVar1 = FUN_0036b1e0(DAT_00483c58,param_1 + 0x254);
    if (iVar1 != 0) {
      FUN_00355830(1,0xffffffff);
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x23e8),*(undefined4 *)(param_1 + 0x23ec),
                       *(undefined4 *)(param_1 + 0x23f0),param_2 + 0x208c,param_2,0x16,4000,
                       (int)*(short *)(param_1 + 0xbe),0,10,1);
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,DAT_00483c5c +
                             (uint)*(ushort *)(*(int *)(DAT_00483c60 + param_1) + 0xf4));
      }
      else {
        FUN_0036aeb4(param_1 + 0x28);
      }
    }
  }
  else {
    FUN_0033f7ac(param_1,0x87,param_2);
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00483c64 + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_00483c6c,fVar2 * DAT_00483c68,param_1 + 0x221c);
  return;
}
