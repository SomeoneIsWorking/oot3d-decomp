// OoT3D decomp @ 0031b034  name=FUN_0031b034  size=80

void FUN_0031b034(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0xd);
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0031b084,fVar2 - DAT_0031b084,fVar2,DAT_0031b088,param_1 + 0x1a4,0xd,1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xf90) = DAT_0031b08c;
  return;
}
