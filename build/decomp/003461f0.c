// OoT3D decomp @ 003461f0  name=FUN_003461f0  size=164

void FUN_003461f0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined2 uVar4;
  float fVar5;

  uVar3 = FUN_0036ae14(param_1 + 0x1a4,7);
  fVar1 = DAT_00346294;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00346298,DAT_00346294,uVar3,DAT_00346294,param_1 + 0x1a4,7,3);
  uVar3 = DAT_003462a4;
  fVar5 = *(float *)(param_1 + 0x1f0);
  if (fVar1 < fVar5) {
    uVar4 = (undefined2)(int)(DAT_0034629c + fVar5 * DAT_003462a0);
  }
  else {
    uVar4 = (undefined2)(int)(fVar5 * DAT_003462a0 - DAT_0034629c);
  }
  *(undefined2 *)(param_1 + 0x22c) = uVar4;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  uVar2 = DAT_003462a8;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(float *)(param_1 + 0x70) = fVar1;
  *(float *)(param_1 + 100) = fVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  return;
}
