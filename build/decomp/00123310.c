// OoT3D decomp @ 00123310  name=FUN_00123310  size=132

void FUN_00123310(int param_1)

{
  int iVar1;

  if (*(short *)(param_1 + 0x8f6) != 0) {
    *(short *)(param_1 + 0x8f6) = *(short *)(param_1 + 0x8f6) + -1;
  }
  if (*(short *)(param_1 + 0x8fa) != 0) {
    *(short *)(param_1 + 0x8fa) = *(short *)(param_1 + 0x8fa) + -1;
  }
  iVar1 = FUN_003731e0(param_1 + 0x1e4);
  if (iVar1 != 0) {
    FUN_00373d40(param_1 + 0x1e4,0x14);
  }
  if (*(short *)(param_1 + 0x8f6) != 0) {
    if (*(short *)(param_1 + 0x8fa) == 0) {
      *(undefined2 *)(param_1 + 0x8fc) = 1;
    }
    return;
  }
  FUN_0036e734(param_1 + 0x1e4,0xe);
  *(undefined4 *)(param_1 + 0x6c) = DAT_001233a8;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x1e,0x32);
}
