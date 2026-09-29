// OoT3D decomp @ 001bc740  name=FUN_001bc740  size=320

void FUN_001bc740(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;

  if (((*(int *)(param_1 + 0xcb8) != 0) || (*(short *)(param_1 + 0xce4) == 0)) &&
     (DAT_001bc880 < *(float *)(param_1 + 0x58))) {
    FUN_00357fd0(*(undefined4 *)(DAT_001bc884 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    FUN_0035e3a4(param_1 + 0x264,0,*(undefined1 *)(param_1 + 0xce6));
    FUN_0035e3a4(param_1 + 0x264,1,*(short *)(param_1 + 0x1c) != 0);
    FUN_0035e330(param_1 + 0x264);
    FUN_0035e240(param_1 + 0x1e0,param_1 + 0x148,DAT_001bc88c,DAT_001bc888,param_1,0);
    if (*(short *)(param_1 + 0xcc8) != 0) {
      sVar1 = *(short *)(param_1 + 0xcc8) + -1;
      iVar2 = (int)sVar1;
      *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
      iVar3 = DAT_001bc890;
      *(short *)(param_1 + 0xcc8) = sVar1;
      iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)iVar2) >> 0x20);
      if (iVar2 + (iVar3 - (iVar3 >> 0x1f)) * -6 == 0) {
        iVar3 = (iVar2 * DAT_001bc894 >> 0x10) - (iVar2 * DAT_001bc894 >> 0x1f);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (10 < iVar3) {
          iVar3 = 10;
        }
        FUN_0020d318(param_2,param_1,param_1 + iVar3 * 6 + 0x1a4,0x4b,0,0,(int)(short)iVar3,1);
      }
    }
  }
  return;
}
