// OoT3D decomp @ 00375ed8  name=FUN_00375ed8  size=156

void FUN_00375ed8(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint in_fpscr;
  float fVar1;

  if (param_2 == 0x800000 && (param_3 & 0x8000) == 0) {
    FUN_0037547c(DAT_00375f7c,param_1 + 0x28,4,DAT_00375f78,DAT_00375f78,DAT_00375f74);
  }
  fVar1 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  if (param_5 < 1) {
    fVar1 = fVar1 * DAT_00375f80 * DAT_00375f84 - DAT_00375f84;
  }
  else {
    fVar1 = DAT_00375f84 + fVar1 * DAT_00375f80 * DAT_00375f84;
  }
  *(short *)(param_1 + 0x11a) = (short)(int)fVar1;
  *(uint *)(param_1 + 0x11c) = (int)fVar1 & 0xffffU | param_2 | param_4 | (param_3 & 0xf8) << 0xd;
  return;
}
