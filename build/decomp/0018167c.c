// OoT3D decomp @ 0018167c  name=FUN_0018167c  size=112

void FUN_0018167c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;

  uVar2 = FUN_0036ae14(param_1 + 0x1a4,1);
  uVar1 = DAT_001816ec;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(*(undefined4 *)(param_1 + 0x8d0),DAT_001816ec,uVar2,*(undefined4 *)(param_1 + 0x8d4),
               param_1 + 0x1a4,1,0);
  *(undefined4 *)(param_1 + 0x8c4) = uVar1;
  *(undefined4 *)(param_1 + 0x8c0) = uVar1;
  fVar3 = (float)FUN_00371e50(DAT_001816f0);
  *(short *)(param_1 + 0x8ae) = (short)(int)fVar3;
  *(undefined4 *)(param_1 + 0x8a8) = DAT_001816f4;
  return;
}
