// OoT3D decomp @ 003e1c50  name=FUN_003e1c50  size=212

void FUN_003e1c50(int param_1,undefined4 param_2)

{
  short sVar1;

  FUN_003731e0(param_1 + 0x1a4);
  if ((*(short *)(param_1 + 0x7dc) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x7dc) + -1, *(short *)(param_1 + 0x7dc) = sVar1, sVar1 == 0)) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      if (DAT_003e1d24 < *(int *)(param_1 + 0x54)) {
        *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x92) + -0x8000;
        FUN_003641d0(*(undefined4 *)(param_1 + 0x128));
        FUN_003641d0(*(undefined4 *)(param_1 + 0x124));
        FUN_003641d0(param_1);
        FUN_00375bcc(param_1,DAT_003e1d28);
        return;
      }
      FUN_00374444(param_2,param_1,param_1 + 0x28,0x90);
      FUN_00364084(param_1,param_2);
      return;
    }
    FUN_00374a58(DAT_003e1d2c,param_1 + 0x1a4,0xb);
    *(undefined4 *)(param_1 + 0x7d8) = DAT_003e1d30;
  }
  return;
}
