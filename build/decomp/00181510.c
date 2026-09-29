// OoT3D decomp @ 00181510  name=FUN_00181510  size=76

void FUN_00181510(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1e4,3);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00181588,DAT_00181588,uVar1,DAT_00181584,param_1 + 0x1e4,3,0);
  *(undefined4 *)(param_1 + 0x6c) = DAT_0018158c;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x32,0x46);
}
