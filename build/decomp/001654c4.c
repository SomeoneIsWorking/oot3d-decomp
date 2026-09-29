// OoT3D decomp @ 001654c4  name=FUN_001654c4  size=104

void FUN_001654c4(int param_1,int param_2)

{
  if (*(ushort *)(param_1 + 0x1c) == 0xffff) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00350be0(param_1 + 0x1bc,param_2);
  }
  if (*(ushort *)(param_1 + 0x1c) < 2) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    return;
  }
  return;
}
