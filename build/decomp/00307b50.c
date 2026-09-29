// OoT3D decomp @ 00307b50  name=FUN_00307b50  size=132

int FUN_00307b50(int param_1)

{
  int iVar1;
  int local_48 [5];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;

  local_48[0] = *DAT_00307bd4;
  local_48[1] = DAT_00307bd4[1];
  local_48[2] = DAT_00307bd4[2];
  local_48[3] = DAT_00307bd4[3];
  local_48[4] = DAT_00307bd4[4];
  iStack_34 = DAT_00307bd4[5];
  iStack_30 = DAT_00307bd4[6];
  iStack_2c = DAT_00307bd4[7];
  local_28 = DAT_00307bd4[8];
  iStack_24 = DAT_00307bd4[9];
  iStack_20 = DAT_00307bd4[10];
  iStack_1c = DAT_00307bd4[0xb];
  iVar1 = 0;
  local_18 = DAT_00307bd4[0xc];
  iStack_14 = DAT_00307bd4[0xd];
  iStack_10 = DAT_00307bd4[0xe];
  iStack_c = DAT_00307bd4[0xf];
  while( true ) {
    if (local_48[iVar1] == param_1) {
      return iVar1;
    }
    if (local_48[iVar1 + 1] == param_1) break;
    iVar1 = iVar1 + 2;
    if (0x3f < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}
