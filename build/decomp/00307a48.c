// OoT3D decomp @ 00307a48  name=FUN_00307a48  size=116

int FUN_00307a48(uint param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;

  local_28 = *DAT_00307abc;
  uStack_24 = DAT_00307abc[1];
  uStack_20 = DAT_00307abc[2];
  uStack_1c = DAT_00307abc[3];
  iVar1 = 0;
  local_18 = DAT_00307abc[4];
  uStack_14 = DAT_00307abc[5];
  uStack_10 = DAT_00307abc[6];
  uStack_c = DAT_00307abc[7];
  while( true ) {
    if (*(ushort *)((int)&local_28 + iVar1 * 2) == param_1) {
      return iVar1;
    }
    if (*(ushort *)((int)&local_28 + iVar1 * 2 + 2) == param_1) break;
    iVar1 = iVar1 + 2;
    if (0x1d < iVar1) {
      return 1;
    }
  }
  return iVar1 + 1;
}
