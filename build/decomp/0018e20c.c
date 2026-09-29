// OoT3D decomp @ 0018e20c  name=FUN_0018e20c  size=96

void FUN_0018e20c(int param_1,int param_2)

{
  short *psVar1;
  short *psVar2;

  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x958));
  FUN_00350b88(param_2,param_1 + 0x9cc);
  psVar1 = DAT_0018e288;
  psVar2 = (short *)(param_1 + 0x974);
  if (*(short *)(param_1 + 0x1c) == 1) {
    *DAT_0018e288 = *DAT_0018e288 + -1;
    psVar2 = psVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4,psVar2);
}
