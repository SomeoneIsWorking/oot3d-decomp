// OoT3D decomp @ 004beb58  name=FUN_004beb58  size=136

void FUN_004beb58(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004bebe0 + 0x6a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_004bebe8,fVar3 * DAT_004bebe4,param_1 + 0x221c);
  iVar1 = FUN_0034b33c(DAT_004bebec,param_2,param_1,param_1 + 0x254);
  if ((iVar1 != 0) && ((iVar2 = FUN_0036b4ec(param_1 + 0x254,param_2), iVar2 != 0 || (0 < iVar1))))
  {
    FUN_0036b2d4(DAT_004bebf0,param_1,param_2);
    return;
  }
  return;
}

