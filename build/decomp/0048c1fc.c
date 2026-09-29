// OoT3D decomp @ 0048c1fc  name=FUN_0048c1fc  size=104

int FUN_0048c1fc(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(ushort *)(param_1 + 0x14 + iVar1 * 0xc) == DAT_0048c264) {
        iVar1 = param_1 + 0x14 + iVar1 * 0xc;
        goto LAB_0048c248;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  iVar1 = 0;
LAB_0048c248:
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    param_1 = param_1 + iVar2;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
