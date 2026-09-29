// OoT3D decomp @ 0020bdf0  name=FUN_0020bdf0  size=48

void FUN_0020bdf0(int param_1)

{
  uint uVar1;

  uVar1 = (int)*(short *)(param_1 + 0x1c) - 200;
  if (0x3b < uVar1) {
    uVar1 = param_1 + 0xf8c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a8,uVar1);
}
