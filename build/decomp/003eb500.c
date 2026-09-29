// OoT3D decomp @ 003eb500  name=FUN_003eb500  size=120

void FUN_003eb500(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  fVar1 = DAT_003eb578;
  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  uVar2 = (uint)*(short *)(param_1 + 0x1c2);
  fVar3 = (float)VectorUnsignedToFloat(uVar2 & 0xfe,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = DAT_003eb57c;
  if ((uVar2 & 1) != 0) {
    fVar4 = DAT_003eb580;
  }
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar3 * fVar1 * fVar4;
  if (uVar2 == 0) {
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_003eb584);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003eb588;
  }
  return;
}
