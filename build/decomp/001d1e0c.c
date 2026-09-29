// OoT3D decomp @ 001d1e0c  name=FUN_001d1e0c  size=184

void FUN_001d1e0c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;

  param_2 = param_2 + 0x3a58;
  sVar1 = *(short *)(DAT_001d1ec8 + *(short *)(param_1 + 0x1c) * 2);
  iVar2 = FUN_00363c10(param_2,(int)*(short *)(DAT_001d1ec4 + *(short *)(param_1 + 0x1c) * 2));
  uVar5 = FUN_00363c10(param_2,(int)sVar1);
  iVar3 = (int)uVar5;
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if (-1 < iVar3 && -1 < iVar2) {
    iVar4 = FUN_00373074(param_2,iVar2);
    if ((iVar4 == 0) || (iVar4 = FUN_00373074(param_2,iVar3), iVar4 == 0)) {
      return;
    }
    *(int *)(param_1 + 0x1278) = iVar2;
    *(int *)(param_1 + 0x127c) = iVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(DAT_001d1ecc + *(short *)(param_1 + 0x1c) * 4);
    iVar4 = DAT_001d1ecc;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001d1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
  }
  FUN_00374428(param_1,iVar4);
  return;
}
