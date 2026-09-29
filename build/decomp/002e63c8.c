// OoT3D decomp @ 002e63c8  name=FUN_002e63c8  size=28

bool FUN_002e63c8(byte *param_1)

{
  byte *pbVar1;

  pbVar1 = param_1 + 0x1f;
  if (*pbVar1 == 0xef) {
    param_1 = (byte *)(uint)*param_1;
  }
  return *pbVar1 == 0xef && param_1 == (byte *)0xbe;
}
