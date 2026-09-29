// OoT3D decomp @ 00254f2c  name=FUN_00254f2c  size=332

void FUN_00254f2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;

  *(char *)(param_1 + 0x1a9) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(short *)(param_1 + 0x1c) = (short)uVar1;
  if (uVar1 < 3) {
    FUN_0037572c(*(undefined4 *)(DAT_00255078 + uVar1 * 4),param_1,DAT_00255078,param_3,param_4);
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(DAT_0025507c + *(short *)(param_1 + 0x1c) * 2
                                                      ),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar2;
    FUN_00353dd0(param_2,param_1 + 0x1ac);
    FUN_00353d24(param_2,param_1 + 0x1ac,param_1,DAT_00255080);
    FUN_00353dd0(param_2,param_1 + 0x204);
    FUN_00353d24(param_2,param_1 + 0x204,param_1,DAT_00255084);
    FUN_0037632c(param_1,param_1 + 0x1ac);
    FUN_0037632c(param_1,param_1 + 0x204);
    *(float *)(param_1 + 0x1ec) = *(float *)(param_1 + 0x1ec) * *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1f0) * *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x244) = *(float *)(param_1 + 0x244) * *(float *)(param_1 + 0x54);
    fVar2 = DAT_00255088;
    *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x248) * *(float *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    *(undefined1 *)(param_1 + 0x1a8) = 0xff;
    FUN_0037322c(*(float *)(param_1 + 0x58) * fVar2,param_1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0025508c;
    FUN_00372f38(param_1,param_2,param_1 + 0x25c,0x10);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
