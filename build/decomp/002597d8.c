// OoT3D decomp @ 002597d8  name=FUN_002597d8  size=160

void FUN_002597d8(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c0));
  if (iVar1 == 0) {
    return;
  }
  if (*(short *)(param_2 + 0x104) == 7) {
    if (*(char *)(DAT_00259878 + param_2) == '\x06') {
      FUN_0036cf80(param_2,param_1,DAT_0025987c,0x32);
      goto LAB_0025986c;
    }
    if (*(char *)(DAT_00259878 + param_2) == '\x10') {
      FUN_0036cf80(param_2,param_1,DAT_00259880,0x32);
      goto LAB_0025986c;
    }
  }
  FUN_0036cf80(param_2,param_1,0);
LAB_0025986c:
  *(undefined4 *)(param_1 + 0x1bc) = DAT_00259884;
  return;
}
