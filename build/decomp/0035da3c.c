// OoT3D decomp @ 0035da3c  name=FUN_0035da3c  size=100

void FUN_0035da3c(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(DAT_0035daa4 + param_1);
  iVar2 = (int)sVar1;
  if (*(int *)(DAT_0035daa0 + 0x10) == 0) {
    if (*(int *)(DAT_0035daa0 + 4) != 0) goto LAB_0035da84;
    sVar1 = sVar1 + 2;
  }
  else {
    if (*(int *)(DAT_0035daa0 + 4) == 0) {
      iVar2 = (int)(short)(sVar1 + 3);
      goto LAB_0035da84;
    }
    sVar1 = sVar1 + 1;
  }
  iVar2 = (int)sVar1;
LAB_0035da84:
  *(byte *)(param_1 + 0x5c76) = (byte)*(undefined2 *)(DAT_0035daa8 + iVar2 * 4 + 2) & 0x7f;
  return;
}

