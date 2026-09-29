// OoT3D decomp @ 00330768  name=FUN_00330768  size=228

void FUN_00330768(float param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6)

{
  int iVar1;
  int extraout_r1;

  iVar1 = FUN_00366738();
  if (iVar1 == 0) {
    FUN_00368d94(*(undefined4 *)(DAT_00330888 + param_2),param_5);
    iVar1 = extraout_r1;
    if (extraout_r1 < 0) {
      iVar1 = -extraout_r1;
    }
    if (iVar1 == param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0((int)(param_1 * DAT_00330890));
    }
  }
  return;
}
