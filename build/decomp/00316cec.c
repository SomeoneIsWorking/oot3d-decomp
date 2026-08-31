// OoT3D decomp @ 00316cec  name=FUN_00316cec  size=132

undefined4 FUN_00316cec(undefined4 param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = iRam00316d70;
  iVar2 = 0;
  do {
    if (*(byte *)(iRam00316d70 + iVar2 + 0x8c) == param_2) {
      *(undefined1 *)(iVar2 + iRam00316d70 + 0x8c) = param_3;
      if (*(byte *)(iVar1 + 0x81) == param_2) {
        *(undefined1 *)(iVar1 + 0x81) = param_3;
      }
      else if (*(byte *)(iVar1 + 0x82) == param_2) {
        *(undefined1 *)(iVar1 + 0x82) = param_3;
      }
      else if (*(byte *)(iVar1 + 0x83) == param_2) {
        *(undefined1 *)(iVar1 + 0x83) = param_3;
      }
      else if (*(byte *)(iVar1 + 0x84) == param_2) {
        *(undefined1 *)(iVar1 + 0x84) = param_3;
      }
      return 1;
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0x18);
  return 0;
}
