// OoT3D decomp @ 0020c520  name=FUN_0020c520  size=124

void FUN_0020c520(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;

  uVar3 = FUN_00363c10(param_2 + 0x3a58,
                       (int)*(short *)(DAT_0020c59c + *(short *)(param_1 + 0x1c) * 2));
  iVar1 = (int)uVar3;
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  if (-1 < iVar1) {
    iVar2 = FUN_00373074(param_2 + 0x3a58,iVar1);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x1ac) = iVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(DAT_0020c5a0 + *(short *)(param_1 + 0x1c) * 4);
    iVar2 = DAT_0020c5a0;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0020c588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  FUN_00374428(param_1,iVar2);
  return;
}
