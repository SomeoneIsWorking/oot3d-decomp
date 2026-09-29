// OoT3D decomp @ 0040dbe4  name=FUN_0040dbe4  size=100

int FUN_0040dbe4(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + iVar1 * 0xc) == 0x5000) {
        iVar1 = param_1 + 0x14 + iVar1 * 0xc;
        goto LAB_0040dc2c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  iVar1 = 0;
LAB_0040dc2c:
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
