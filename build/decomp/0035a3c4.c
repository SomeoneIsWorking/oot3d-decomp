// OoT3D decomp @ 0035a3c4  name=FUN_0035a3c4  size=52

ushort FUN_0035a3c4(int param_1,int param_2)

{
  return *(ushort *)
          (param_1 + ((int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1c)) >> 4) * 2 + 0x5f98) &
         (ushort)(1 << (param_2 % 0x10 & 0xffU));
}
