// OoT3D decomp @ 003d0744  name=FUN_003d0744  size=208

void FUN_003d0744(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  if (*(short *)(param_1 + 0x512) != 0) {
    uVar1 = *(short *)(param_1 + 0x512) - 1;
    *(ushort *)(param_1 + 0x512) = uVar1;
    fVar4 = DAT_003d0814;
    if (uVar1 != 0) {
      if ((short)uVar1 < 0x2d) {
        if ((uVar1 & 1) == 0) {
          *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - DAT_003d0814;
          fVar4 = *(float *)(param_1 + 0x30) - fVar4;
        }
        else {
          *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + DAT_003d0814;
          fVar4 = *(float *)(param_1 + 0x30) + fVar4;
        }
        *(float *)(param_1 + 0x30) = fVar4;
      }
      return;
    }
  }
  uVar3 = FUN_0036ae14(param_1 + 0x1a4,1);
  uVar2 = DAT_003d081c;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003d0820,DAT_003d081c,uVar3,DAT_003d0818,param_1 + 0x1a4,1);
  uVar3 = DAT_003d0824;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar2 = DAT_003d082c;
  *(undefined4 *)(param_1 + 0x70) = DAT_003d0828;
  *(undefined4 *)(param_1 + 0x498) = uVar2;
  return;
}
