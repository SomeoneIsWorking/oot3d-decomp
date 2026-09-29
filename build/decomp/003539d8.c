// OoT3D decomp @ 003539d8  name=FUN_003539d8  size=172

void FUN_003539d8(int param_1)

{
  int iVar1;
  short sVar2;

  iVar1 = DAT_00353a90;
  if ((~*(ushort *)(DAT_00353a84 + 0xfe) & 0xf) == 0) {
    if ((*(ushort *)(DAT_00353a8c + 0x3e) & 0x8000) == 0) {
      if (*(short *)(DAT_00353a90 + 0x1562) == 0) {
        *(short *)(param_1 + 0x116) = (short)DAT_00353aa0;
        *(ushort *)(iVar1 + 0x158c) = *(ushort *)(iVar1 + 0x158c) & 0xfffe;
        *(undefined4 *)(iVar1 + 0xee0) = 0x9e;
        return;
      }
LAB_00353a30:
      *(short *)(param_1 + 0x116) = (short)DAT_00353a94;
      return;
    }
    if ((*(ushort *)(DAT_00353a90 + 0x158c) & 1) == 0) {
      if (*(short *)(DAT_00353a90 + 0x1562) != 0) goto LAB_00353a30;
      if (*(int *)(DAT_00353a90 + 0xee0) == 0x9e) {
        sVar2 = (short)DAT_00353a9c;
      }
      else {
        sVar2 = (short)DAT_00353a98;
      }
    }
    else {
      sVar2 = (short)DAT_00353a94 + 0xc;
    }
  }
  else {
    sVar2 = (short)DAT_00353a88;
  }
  *(short *)(param_1 + 0x116) = sVar2;
  return;
}
