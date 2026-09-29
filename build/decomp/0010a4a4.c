// OoT3D decomp @ 0010a4a4  name=FUN_0010a4a4  size=140

void FUN_0010a4a4(int param_1)

{
  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  if (((int)*(short *)(param_1 + 0x1c2) / 4) * 4 - (int)*(short *)(param_1 + 0x1c2) != 0) {
    if (*(short *)(param_1 + 0x1c2) == 0) {
      *(undefined2 *)(param_1 + 0x1c2) = 0x14;
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0010a5c4;
    }
    return;
  }
  FUN_003738a8();
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
