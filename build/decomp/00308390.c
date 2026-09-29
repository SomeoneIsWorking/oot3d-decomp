// OoT3D decomp @ 00308390  name=FUN_00308390  size=104

int FUN_00308390(int param_1)

{
  int iVar1;
  int local_18 [4];

  iVar1 = 0;
  local_18[0] = *DAT_003083f8;
  local_18[1] = DAT_003083f8[1];
  local_18[2] = DAT_003083f8[2];
  local_18[3] = DAT_003083f8[3];
  while( true ) {
    if (local_18[iVar1] == param_1) {
      return iVar1;
    }
    if (local_18[iVar1 + 1] == param_1) break;
    iVar1 = iVar1 + 2;
    if (0xf < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}
