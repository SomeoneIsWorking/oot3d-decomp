// OoT3D decomp @ 002d1210  name=FUN_002d1210  size=48

undefined4 FUN_002d1210(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < 0x20) &&
     (puVar1 = *(undefined4 **)(*piRam002d1240 + param_1 * 4 + 0x828), puVar1 != (undefined4 *)0x0))
  {
    return *puVar1;
  }
  return 0;
}

