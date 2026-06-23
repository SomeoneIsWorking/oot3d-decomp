// OoT3D decomp @ 00348800  name=FUN_00348800  size=72

void FUN_00348800(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint in_fpscr;
  
  puVar2 = (undefined4 *)(DAT_00348848 + param_2 * 0x10);
  uVar1 = FUN_0036ae14(param_1 + 0x95c,*puVar2);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00348850,DAT_0034884c,uVar1,puVar2[3],param_1 + 0x95c,*puVar2,
               *(undefined *)(puVar2 + 2));
  return;
}

