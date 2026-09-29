// OoT3D decomp @ 00451c10  name=FUN_00451c10  size=120

void FUN_00451c10(int param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;

  *(undefined1 *)(param_1 + 0x2511) = 1;
  software_interrupt(0x28);
  uVar1 = (uint)((ulonglong)DAT_00451c88 * (ulonglong)param_2);
  uVar2 = FUN_00332754(uVar1 + 3,
                       ((int)param_2 >> 0x1f) * DAT_00451c88 +
                       (int)((ulonglong)DAT_00451c88 * (ulonglong)param_2 >> 0x20) +
                       (uint)(0xfffffffc < uVar1) + param_2 * 3,DAT_00451c8c,0);
  *(undefined8 *)(param_1 + 0x2500) = uVar2;
  return;
}
