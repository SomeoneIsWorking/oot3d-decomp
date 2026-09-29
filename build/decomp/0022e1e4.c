// OoT3D decomp @ 0022e1e4  name=FUN_0022e1e4  size=76

void FUN_0022e1e4(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0x1c) != 0xff) {
    FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x91c));
    param_2 = param_1 + 0x938;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4,param_2);
}
