// OoT3D decomp @ 004097c8  name=FUN_004097c8  size=116

int FUN_004097c8(int param_1)

{
  int iVar1;
  int local_28 [5];
  int iStack_14;
  int iStack_10;
  int iStack_c;

  local_28[0] = *DAT_0040983c;
  local_28[1] = DAT_0040983c[1];
  local_28[2] = DAT_0040983c[2];
  local_28[3] = DAT_0040983c[3];
  iVar1 = 0;
  local_28[4] = DAT_0040983c[4];
  iStack_14 = DAT_0040983c[5];
  iStack_10 = DAT_0040983c[6];
  iStack_c = DAT_0040983c[7];
  while( true ) {
    if (local_28[iVar1] == param_1) {
      return iVar1;
    }
    if (local_28[iVar1 + 1] == param_1) break;
    iVar1 = iVar1 + 2;
    if (0x1f < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}
