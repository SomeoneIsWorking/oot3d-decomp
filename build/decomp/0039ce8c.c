// OoT3D decomp @ 0039ce8c  name=FUN_0039ce8c  size=204

void FUN_0039ce8c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;

  FUN_00376864();
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_0039cf5c,DAT_0039cf58,DAT_0039cf58,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_0031ebe4(param_1,param_2);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0039cf60 + 0x145a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 + DAT_0039cf64 < *(float *)(param_1 + 0x98)) << 0x1f;
  uVar4 = uVar1 | (uint)(NAN(fVar5 + DAT_0039cf64) || NAN(*(float *)(param_1 + 0x98))) << 0x1c;
  if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar4 >> 0x1c) & 1)) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar2 = DAT_0039cf6c;
    uVar3 = VectorSignedToFloat(uVar3,(byte)(uVar4 >> 0x15) & 3);
    FUN_00375c08(DAT_0039cf70,DAT_0039cf6c,uVar3,DAT_0039cf68,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 3000) = 5;
    *(undefined4 *)(param_1 + 0xbc0) = uVar2;
  }
  return;
}
