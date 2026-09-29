// OoT3D decomp @ 0020f534  name=FUN_0020f534  size=132

void FUN_0020f534(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x128) == 0) {
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_00374428();
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  else {
    FUN_00374428();
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  FUN_0034f0f4(param_2,*(undefined4 *)(param_1 + 0xa44));
  FUN_0034f6e8(param_2,param_1 + 0xac8);
  FUN_00350b88(param_2,param_1 + 0xbfc);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4,param_1 + 0xa48);
}
