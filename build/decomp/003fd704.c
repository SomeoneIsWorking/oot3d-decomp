// OoT3D decomp @ 003fd704  name=FUN_003fd704  size=116

void FUN_003fd704(uint param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;

  software_interrupt(0x28);
  lVar1 = (ulonglong)param_1 * 3 +
          CONCAT44(((int)param_2 >> 0x1f) * DAT_003fd778 +
                   (int)((ulonglong)DAT_003fd778 * (ulonglong)param_2 >> 0x20),
                   (int)((ulonglong)DAT_003fd778 * (ulonglong)param_2)) +
          CONCAT44(param_2 * 3,(int)((ulonglong)DAT_003fd778 * (ulonglong)param_1 >> 0x20));
  iVar2 = FUN_00332754((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
  *(int *)(DAT_003fd77c + 0x10) = iVar2 - *(int *)(DAT_003fd77c + 0xc);
  return;
}
