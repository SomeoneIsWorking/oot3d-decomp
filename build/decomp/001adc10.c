// OoT3D decomp @ 001adc10  name=FUN_001adc10  size=608

void FUN_001adc10(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;

  uVar1 = FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1bc,0,0,param_1 + 0x244,param_1 + 0x37c,6);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(*(int *)(param_1 + 0x1e4) + 0xc);
  uVar1 = FUN_00372f0c(uVar1,0);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x240),uVar1);
  *(undefined1 *)(*(int *)(param_1 + 0x240) + 0x10) = 1;
  FUN_003532e8(param_1,0);
  uVar1 = FUN_00353fd4(param_1,param_2,0);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  FUN_00353dd0(param_2,param_1 + 0x4c0);
  FUN_00353d24(param_2,param_1 + 0x4c0,param_1,DAT_001ade70);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x518,param_1,DAT_001ade70);
  FUN_00350d20(param_1 + 0xa0,0,DAT_001ade74);
  if (((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18 == 0) {
    FUN_0037572c(DAT_001ade78,param_1);
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
    *(short *)(param_1 + 0x1c) = (short)uVar2;
    if (uVar2 != 0xff) {
      fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar3 * DAT_001ade7c;
    }
  }
  else {
    FUN_0037572c(DAT_001ade80,param_1);
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0xff;
    *(short *)(param_1 + 0x1c) = (short)uVar2;
    if (uVar2 != 0xff) {
      fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar3 * DAT_001ade84;
    }
  }
  fVar3 = DAT_001ade88;
  *(float *)(param_1 + 0x500) = *(float *)(param_1 + 0x500) * *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x504) = *(float *)(param_1 + 0x58) * fVar3;
  *(undefined4 *)(param_1 + 0x508) = DAT_001ade8c;
  *(float *)(param_1 + 0x558) = *(float *)(param_1 + 0x558) * *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x55c) = *(float *)(param_1 + 0x55c) * *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x560) = *(float *)(param_1 + 0x560) * *(float *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  uVar1 = DAT_001ade94;
  if (*(int *)(param_1 + 0x4b4) == DAT_001ade90) {
    *(undefined2 *)(param_1 + 0x4b8) = 300;
  }
  else {
    *(undefined2 *)(param_1 + 0x4b8) = 0;
    uVar1 = DAT_001ade94;
  }
  *(undefined2 *)(param_1 + 0x4ba) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = uVar1;
  *(undefined1 *)(param_1 + 0x19b) = 4;
  return;
}
