// OoT3D decomp @ 003cdaac  name=FUN_003cdaac  size=148

void FUN_003cdaac(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;

  iVar2 = FUN_0035f5e4(DAT_003cdbac,param_1,1000,1,param_2);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (((*(short *)(param_1 + 0x7d6) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x7d6) + -1, *(short *)(param_1 + 0x7d6) = sVar1, sVar1 == 0))
     && (iVar2 = FUN_0035f830(param_1,param_2,1), iVar2 != 0)) {
    FUN_00375bcc(param_1,DAT_003cdbc8);
    *(undefined2 *)(param_1 + 0x7d6) = 0x14;
    *(undefined4 *)(param_1 + 0x6a0) = DAT_003cdbcc;
  }
  return;
}
