// OoT3D decomp @ 0039e804  name=FUN_0039e804  size=192

void FUN_0039e804(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x1cd) & 2) != 0) {
    FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    FUN_00338f60((int)*(short *)(param_1 + 0xbe));
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(int *)(param_1 + 0x98) < DAT_0039eadc) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1bc);
    return;
  }
  return;
}
