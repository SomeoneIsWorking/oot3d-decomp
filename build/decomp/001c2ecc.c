// OoT3D decomp @ 001c2ecc  name=FUN_001c2ecc  size=144

void FUN_001c2ecc(int param_1,undefined4 param_2)

{
  ushort uVar1;
  float fVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;

  fVar2 = DAT_001c2f64;
  FUN_00373500(DAT_001c2f64,DAT_001c2f60,DAT_001c2f5c,param_1 + 0x37c);
  if (((int)*(uint *)(param_1 + 0x37c) < 0x3f000000) && (*(uint *)(param_1 + 0x37c) < 0xbf000000)) {
    FUN_0034e32c(fVar2,param_1,param_2);
  }
  FUN_0034e32c(*(undefined4 *)(param_1 + 0x37c),param_1,param_2);
  if (*(float *)(param_1 + 0x37c) == fVar2) {
    *(undefined2 *)(param_1 + 0x2a0) = 2;
    if (*(short *)(param_1 + 0x1c) == 10) {
      uVar1 = *(ushort *)(DAT_00355f44 + 0xe);
      if ((((uVar1 & 0x100) == 0 || (uVar1 & 0x200) == 0) || (uVar1 & 0x400) == 0) ||
          (uVar1 & 0x800) == 0) {
        FUN_0036be34(param_2,DAT_00355f4c,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,
                     unaff_lr);
      }
      else {
        FUN_0036be34(param_2,DAT_00355f48,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,
                     unaff_lr);
      }
    }
    else {
      FUN_0036be34(param_2,0x83,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
    }
    *(undefined4 *)(param_1 + 0x368) = 1;
    *(undefined4 *)(param_1 + 0x330) = 1;
    FUN_0034e32c(DAT_00355f50,param_1,param_2);
    return;
  }
  return;
}
