// OoT3D decomp @ 00153e3c  name=FUN_00153e3c  size=292

void FUN_00153e3c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  uVar2 = (uint)*(short *)(param_1 + 0x234);
  if (((int)uVar2 / 4) * 4 - uVar2 == 0) {
    if ((uVar2 & 7) == 0) {
      FUN_00374a58(DAT_00153f6c,param_1 + 0x1a4,
                   *(undefined4 *)(DAT_00153f68 + *(short *)(param_1 + 0x1c) * 4));
    }
    else {
      FUN_00374a58(DAT_00153f64,param_1 + 0x1a4,
                   *(undefined4 *)(DAT_00153f60 + *(short *)(param_1 + 0x1c) * 4));
    }
  }
  uVar1 = DAT_00153f70;
  *(undefined2 *)(param_1 + 0x11a) = 300;
  fVar3 = (float)FUN_003738a8(uVar1);
  *(float *)(param_1 + 0x28) = fVar3 + *(float *)(param_1 + 0x28);
  fVar3 = (float)FUN_003738a8(uVar1);
  *(float *)(param_1 + 0x2c) = fVar3 + *(float *)(param_1 + 0x2c);
  fVar3 = (float)FUN_003738a8(uVar1);
  *(float *)(param_1 + 0x30) = fVar3 + *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x84) + DAT_00153f74;
  if (*(float *)(param_1 + 0x2c) < fVar3) {
    FUN_003705a0(fVar3,uVar1,param_1 + 0x2c);
  }
  if (*(short *)(param_1 + 0x234) == 0) {
    FUN_00374a58(DAT_00153f7c,param_1 + 0x1a4,
                 *(undefined4 *)(DAT_00153f78 + *(short *)(param_1 + 0x1c) * 4));
    *(undefined4 *)(param_1 + 0x22c) = DAT_00153f80;
  }
  return;
}
