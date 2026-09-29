// OoT3D decomp @ 001c832c  name=FUN_001c832c  size=292

void FUN_001c832c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;

  if ((*(short *)(param_1 + 0x1c2) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x1c2) + -1, *(short *)(param_1 + 0x1c2) = sVar1, sVar1 == 0)) {
    uVar2 = FUN_0036f848(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54),1);
    FUN_0036f7c0(uVar2,DAT_001c8450);
    FUN_0036f6b0(uVar2,0,1,0xfa,1);
    FUN_0036f628(uVar2,10);
  }
  if (*(int *)(param_1 + 0x21c) == 4) {
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_001c8454,
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0xc6,0,
                 (int)(short)(*(short *)(param_1 + 0xbe) + -0x8000),0,0);
    *(ushort *)(DAT_001c8458 + 0x38) = *(ushort *)(DAT_001c8458 + 0x38) | 0x40;
    *(undefined2 *)(param_1 + 0x1c2) = 0xf;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001c845c;
    FUN_0036ae48(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
    return;
  }
  return;
}
