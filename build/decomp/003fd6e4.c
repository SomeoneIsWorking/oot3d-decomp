// OoT3D decomp @ 003fd6e4  name=FUN_003fd6e4  size=32

void FUN_003fd6e4(uint param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;

  FUN_0016cb24();
  software_interrupt(0x28);
  lVar1 = (ulonglong)param_1 * 3 +
          CONCAT44(((int)param_2 >> 0x1f) * DAT_003fd778 +
                   (int)((ulonglong)DAT_003fd778 * (ulonglong)param_2 >> 0x20),
                   (int)((ulonglong)DAT_003fd778 * (ulonglong)param_2)) +
          CONCAT44(param_2 * 3,(int)((ulonglong)DAT_003fd778 * (ulonglong)param_1 >> 0x20));
  iVar2 = FUN_00332754((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0,unaff_r4,unaff_r5,unaff_r6)
  ;
  *(int *)(DAT_003fd77c + 0x10) = iVar2 - *(int *)(DAT_003fd77c + 0xc);
  return;
}
