// OoT3D decomp @ 002ce4cc  name=FUN_002ce4cc  size=312

int FUN_002ce4cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  int iVar1;

  if (param_8 != *(int *)(DAT_002ce604 + 0xd4) || param_7 != *(int *)(DAT_002ce604 + 0xd0)) {
    software_interrupt(0x28);
    while ((iVar1 = FUN_002c31ac(param_1,param_2,param_3,param_4,param_5,param_6,1), iVar1 < 0 &&
           ((DAT_002ce60c != iVar1 * 0x400000 ||
            ((param_8 != DAT_002ce610[1] || param_7 != *DAT_002ce610 &&
             (software_interrupt(0x28), -1 < param_8))))))) {
      FUN_0030e604((int)((ulonglong)DAT_002ce614 * 10),(int)((ulonglong)DAT_002ce614 * 10 >> 0x20));
    }
    return iVar1;
  }
  iVar1 = FUN_002c31ac(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return iVar1;
}
