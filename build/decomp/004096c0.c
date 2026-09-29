// OoT3D decomp @ 004096c0  name=FUN_004096c0  size=124

int FUN_004096c0(int param_1)

{
  int iVar1;
  int local_30 [5];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  int iStack_c;

  local_30[0] = *DAT_0040973c;
  local_30[1] = DAT_0040973c[1];
  local_30[2] = DAT_0040973c[2];
  local_30[3] = DAT_0040973c[3];
  local_30[4] = DAT_0040973c[4];
  iStack_1c = DAT_0040973c[5];
  iStack_18 = DAT_0040973c[6];
  iStack_14 = DAT_0040973c[7];
  iVar1 = 0;
  local_10 = DAT_0040973c[8];
  iStack_c = DAT_0040973c[9];
  while( true ) {
    if (local_30[iVar1] == param_1) {
      return iVar1;
    }
    if (local_30[iVar1 + 1] == param_1) break;
    iVar1 = iVar1 + 2;
    if (0x27 < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}
