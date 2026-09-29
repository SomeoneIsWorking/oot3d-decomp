// OoT3D decomp @ 003079d0  name=FUN_003079d0  size=116

int FUN_003079d0(uint param_1)

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

  local_28 = *DAT_00307a44;
  uStack_24 = DAT_00307a44[1];
  uStack_20 = DAT_00307a44[2];
  uStack_1c = DAT_00307a44[3];
  iVar1 = 0;
  local_18 = DAT_00307a44[4];
  uStack_14 = DAT_00307a44[5];
  uStack_10 = DAT_00307a44[6];
  uStack_c = DAT_00307a44[7];
  while( true ) {
    if (*(ushort *)((int)&local_28 + iVar1 * 2) == param_1) {
      return iVar1;
    }
    if (*(ushort *)((int)&local_28 + iVar1 * 2 + 2) == param_1) break;
    iVar1 = iVar1 + 2;
    if (0x1d < iVar1) {
      return 0;
    }
  }
  return iVar1 + 1;
}
