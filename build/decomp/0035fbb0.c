// OoT3D decomp @ 0035fbb0  name=FUN_0035fbb0  size=68

void FUN_0035fbb0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint in_fpscr;

  puVar2 = (undefined4 *)(DAT_0035fbf4 + param_2 * 0x10);
  uVar1 = FUN_003603c0(param_1 + 0x1a4,*puVar2);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0035fbfc,DAT_0035fbf8,uVar1,puVar2[3],param_1 + 0x1a4,*puVar2,
               *(undefined1 *)(puVar2 + 2));
  return;
}
