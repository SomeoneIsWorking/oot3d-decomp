// OoT3D decomp @ 003f5a3c  name=FUN_003f5a3c  size=276

void FUN_003f5a3c(int param_1,int param_2)

{
  uint in_fpscr;

  if ((*(byte *)(param_1 + 0x1cd) & 2) != 0) {
    *(byte *)(param_1 + 0x1cd) = *(byte *)(param_1 + 0x1cd) & 0xfd;
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x300);
    *(undefined2 *)(param_1 + 0x2f4) = 1;
    FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    VectorSignedToFloat((int)*DAT_003f5c18,(byte)(in_fpscr >> 0x15) & 3);
    VectorSignedToFloat((int)DAT_003f5c18[2],(byte)(in_fpscr >> 0x15) & 3);
    VectorSignedToFloat((int)DAT_003f5c18[1],(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(int *)(param_1 + 0x98) < DAT_003f5c38) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1bc);
    return;
  }
  return;
}
