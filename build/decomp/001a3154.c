// OoT3D decomp @ 001a3154  name=FUN_001a3154  size=172

uint FUN_001a3154(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  uint in_fpscr;
  undefined4 uVar4;

  FUN_003705a0(*(undefined4 *)(DAT_001a3200 + (uint)*(byte *)(param_1 + 0x23e) * 4),DAT_001a3204,
               param_1 + 0x6c);
  FUN_0035fb14(param_1);
  psVar3 = (short *)(*(int *)(*(int *)(DAT_001a3208 + param_2) +
                              (*(ushort *)(param_1 + 0x1c) & 0xff) * 8 + 4) +
                    *(short *)(DAT_001a320c + param_1) * 6);
  uVar4 = VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = FUN_003705a0(uVar4,ABS(*(float *)(param_1 + 0x60)),param_1 + 0x28);
  uVar4 = VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = FUN_003705a0(uVar4,ABS(*(float *)(param_1 + 0x68)),param_1 + 0x30);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
  return uVar2 & uVar1 & 1;
}
