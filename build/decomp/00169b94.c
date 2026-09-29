// OoT3D decomp @ 00169b94  name=FUN_00169b94  size=96

void FUN_00169b94(int param_1,int param_2)

{
  if ((*(short *)(param_1 + 0x1c) != 1 && *(short *)(param_1 + 0x1c) != 2) &&
     (*(short *)(param_2 + 0x104) == 0x4c)) {
    *(undefined2 *)(DAT_00169c00 + 0x5e) = 0;
  }
  if ((*(ushort *)(DAT_00169c04 + param_1) & 0x200) != 0) {
    FUN_0034ec14();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}
