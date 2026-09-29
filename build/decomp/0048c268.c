// OoT3D decomp @ 0048c268  name=FUN_0048c268  size=100

int FUN_0048c268(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + iVar1 * 0xc) == 0x7800) {
        iVar1 = param_1 + 0x14 + iVar1 * 0xc;
        goto LAB_0048c2b0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  iVar1 = 0;
LAB_0048c2b0:
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
