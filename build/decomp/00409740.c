// OoT3D decomp @ 00409740  name=FUN_00409740  size=132

int FUN_00409740(int param_1)

{
  int iVar1;
  int local_40 [5];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  int iStack_c;

  local_40[0] = *DAT_004097c4;
  local_40[1] = DAT_004097c4[1];
  local_40[2] = DAT_004097c4[2];
  local_40[3] = DAT_004097c4[3];
  local_40[4] = DAT_004097c4[4];
  iStack_2c = DAT_004097c4[5];
  iStack_28 = DAT_004097c4[6];
  iStack_24 = DAT_004097c4[7];
  local_20 = DAT_004097c4[8];
  iStack_1c = DAT_004097c4[9];
  iStack_18 = DAT_004097c4[10];
  iStack_14 = DAT_004097c4[0xb];
  iVar1 = 0;
  local_10 = DAT_004097c4[0xc];
  iStack_c = DAT_004097c4[0xd];
  while( true ) {
    if (local_40[iVar1] == param_1) {
      return iVar1;
    }
    if (local_40[iVar1 + 1] == param_1) break;
    iVar1 = iVar1 + 2;
    if (0x37 < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}
