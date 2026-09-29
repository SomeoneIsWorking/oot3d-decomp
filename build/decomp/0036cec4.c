// OoT3D decomp @ 0036cec4  name=FUN_0036cec4  size=152

void FUN_0036cec4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;

  uVar1 = FUN_0036ae14(param_1 + 0x1e4);
  fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = DAT_0036cf5c;
  if (param_5 != 0) {
    fVar4 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = (fVar4 * fVar3) / ABS(fVar2);
  }
  uVar1 = FUN_0036ae14(param_1 + 0x1e4,param_2);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(fVar2,DAT_0036cf64,uVar1,DAT_0036cf60,param_1 + 0x1e4,param_2,3);
  uVar1 = DAT_0036cf68;
  *(undefined4 *)(param_1 + 0x8e8) = param_4;
  *(undefined4 *)(param_1 + 0x8f0) = uVar1;
  return;
}
