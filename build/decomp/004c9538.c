// OoT3D decomp @ 004c9538  name=FUN_004c9538  size=124

void FUN_004c9538(int param_1,undefined4 param_2)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;

  FUN_0036b4ec(param_1 + 0x254);
  fVar1 = DAT_004c95bc;
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004c95b4 + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_004c95bc,fVar2 * DAT_004c95b8,param_1 + 0x221c);
  fVar2 = (float)FUN_0036b4d0(DAT_004c95c0,param_1 + 0x254);
  if (fVar1 <= fVar2) {
    FUN_002c2658(param_1,param_2);
    return;
  }
  return;
}
