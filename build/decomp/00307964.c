// OoT3D decomp @ 00307964  name=FUN_00307964  size=104

int FUN_00307964(uint param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;

  iVar1 = 0;
  local_14 = *DAT_003079cc;
  uStack_10 = DAT_003079cc[1];
  uStack_c = DAT_003079cc[2];
  while( true ) {
    if (*(ushort *)((int)&local_14 + iVar1 * 2) == param_1) {
      return iVar1;
    }
    if (*(ushort *)((int)&local_14 + iVar1 * 2 + 2) == param_1) break;
    iVar1 = iVar1 + 2;
    if (9 < iVar1) {
      return 0;
    }
  }
  return iVar1 + 1;
}
