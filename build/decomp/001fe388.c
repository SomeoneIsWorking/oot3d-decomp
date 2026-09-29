// OoT3D decomp @ 001fe388  name=FUN_001fe388  size=20

undefined4 FUN_001fe388(undefined4 param_1)

{
  if ((*(ushort *)(DAT_001fe39c + 0xe) & 0x8000) == 0) {
    param_1 = 0xffffffff;
  }
  return param_1;
}
