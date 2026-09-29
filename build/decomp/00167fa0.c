// OoT3D decomp @ 00167fa0  name=FUN_00167fa0  size=116

void FUN_00167fa0(int param_1)

{
  if (*(short *)(DAT_00168014 + 0xb0) != 0) {
    *(undefined2 *)(DAT_00168014 + 0xb0) = 0;
  }
  if (*(short *)(param_1 + 0x1c) < -1) {
    FUN_003508b8(param_1,*(undefined4 *)(param_1 + 0x9c4),0);
  }
  else {
    FUN_003508b8(param_1,*(undefined4 *)(param_1 + 0x9c0),0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1e0);
}
