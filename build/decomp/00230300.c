// OoT3D decomp @ 00230300  name=FUN_00230300  size=192

void FUN_00230300(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;

  FUN_003510b0(param_1,DAT_002303c0,param_3,param_4,param_4);
  FUN_00372d4c(DAT_002303cc,DAT_002303c4,param_1 + 0xbc,DAT_002303c8);
  FUN_00372f38(param_1,param_2,param_1 + 0x204,1,0);
  FUN_00353dd0(param_2,param_1 + 0x1ac);
  FUN_00353d24(param_2,param_1 + 0x1ac,param_1,DAT_002303d0);
  *(undefined1 *)(param_1 + 0x1aa) = 0;
  fVar1 = DAT_002303d4;
  uVar2 = *(ushort *)(param_1 + 0x1c) + 1;
  *(short *)(param_1 + 0x1c) = (short)uVar2;
  fVar3 = (float)VectorUnsignedToFloat((uVar2 & 0xff) * 10 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x1a8) = (short)(int)(DAT_002303d8 + fVar3 * fVar1 * DAT_002303d8);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_002303dc;
  return;
}
