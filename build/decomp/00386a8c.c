// OoT3D decomp @ 00386a8c  name=FUN_00386a8c  size=116

void FUN_00386a8c(int param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;

  if ((*(short *)(param_2 + 0x104) == 99) &&
     ((iVar1 = FUN_00350cf4(0x18), iVar1 != 0 || (*(short *)(*piRam00386b00 + 0x556) != 0)))) {
    *(undefined2 *)(param_1 + 0x1c) = 4;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iRam00386b04 + *(short *)(param_1 + 0x1c) * 4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00386af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  return;
}
