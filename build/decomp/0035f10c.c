// OoT3D decomp @ 0035f10c  name=FUN_0035f10c  size=84

void FUN_0035f10c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1e0,6);
  uVar1 = DAT_0035f210;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0035f20c,DAT_0035f210,uVar2,DAT_0035f20c,param_1 + 0x1e0,6,2);
  *(undefined1 *)(param_1 + 0x1c4c) = 0x15;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
