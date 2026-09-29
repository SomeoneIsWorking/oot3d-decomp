// OoT3D decomp @ 0035c414  name=FUN_0035c414  size=68

void FUN_0035c414(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint in_fpscr;

  puVar2 = (undefined4 *)(DAT_0035c458 + param_2 * 0x10);
  uVar1 = FUN_0036ae14(param_1 + 0x1a4,*puVar2);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0035c460,DAT_0035c45c,uVar1,puVar2[3],param_1 + 0x1a4,*puVar2,
               *(undefined1 *)(puVar2 + 2));
  return;
}
