// OoT3D decomp @ 00307dc8  name=FUN_00307dc8  size=104

int FUN_00307dc8(uint param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;

  iVar1 = 0;
  local_18 = *DAT_00307e30;
  uStack_14 = DAT_00307e30[1];
  uStack_10 = DAT_00307e30[2];
  uStack_c = DAT_00307e30[3];
  while( true ) {
    if (*(ushort *)((int)&local_18 + iVar1 * 2) == param_1) {
      return iVar1;
    }
    if (*(ushort *)((int)&local_18 + iVar1 * 2 + 2) == param_1) break;
    iVar1 = iVar1 + 2;
    if (0xf < iVar1) {
      return 0;
    }
  }
  return iVar1 + 1;
}
