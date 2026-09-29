// OoT3D decomp @ 00194634  name=FUN_00194634  size=184

void FUN_00194634(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  fVar4 = (float)VectorUnsignedToFloat
                           ((uint)*(ushort *)(DAT_001946f0 + param_1),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x51c) = DAT_001946ec * fVar4 * DAT_001946f4;
  FUN_0035fb14(param_1);
  iVar2 = FUN_0035d0bc(param_1,param_2);
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x516) = 0x5a;
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,4);
    uVar1 = DAT_001946f8;
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001946fc,DAT_001946f8,uVar3,DAT_001946f8,param_1 + 0x1a4,4,0);
    uVar3 = DAT_00194700;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    *(undefined2 *)(param_1 + 0x510) = 7;
    *(undefined4 *)(param_1 + 0x498) = DAT_00194704;
  }
  return;
}
