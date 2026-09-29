// OoT3D decomp @ 002e5b18  name=FUN_002e5b18  size=128

void FUN_002e5b18(uint param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;

  software_interrupt(0x28);
  lVar1 = (ulonglong)param_1 * 3 +
          CONCAT44(((int)param_2 >> 0x1f) * DAT_002e5b98 +
                   (int)((ulonglong)DAT_002e5b98 * (ulonglong)param_2 >> 0x20),
                   (int)((ulonglong)DAT_002e5b98 * (ulonglong)param_2)) +
          CONCAT44(param_2 * 3,(int)((ulonglong)DAT_002e5b98 * (ulonglong)param_1 >> 0x20));
  uVar3 = FUN_00332754((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),DAT_002e5b9c,0);
  *(undefined8 *)(param_1 + 0x24f0) = uVar3;
  uVar2 = FUN_002d5a0c();
  *(undefined4 *)(param_1 + 0x2508) = uVar2;
  *(undefined1 *)(param_1 + 0x2510) = 0;
  *(undefined1 *)(param_1 + 0x2511) = 0;
  return;
}
