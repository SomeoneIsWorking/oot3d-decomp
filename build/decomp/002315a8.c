// OoT3D decomp @ 002315a8  name=FUN_002315a8  size=332

void FUN_002315a8(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;

  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,1,param_1 + 0x1c4,0,0);
  uVar2 = FUN_00353fd4(param_1,param_2,
                       *(undefined4 *)(DAT_002316f4 + (*(ushort *)(param_1 + 0x1c) & 3) * 4));
  FUN_003532e8(param_1,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_003510b0(param_1,DAT_002316f8);
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1a) < 0) {
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,DAT_002316fc,
                 (int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
                 (int)*(short *)(param_1 + 0x38),1);
  }
  uVar3 = (int)*(short *)(param_1 + 0x1c) & 3;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      iVar4 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a);
      fVar1 = DAT_00231700;
      if (iVar4 == 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
        uVar2 = DAT_00231704;
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar1;
        *(undefined4 *)(param_1 + 0x1bc) = uVar2;
        return;
      }
    }
    else if (uVar3 != 2) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  return;
}
