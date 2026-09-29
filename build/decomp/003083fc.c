// OoT3D decomp @ 003083fc  name=FUN_003083fc  size=116

int FUN_003083fc(int param_1)

{
  int iVar1;
  int local_20 [5];
  int iStack_c;

  local_20[0] = *DAT_00308470;
  local_20[1] = DAT_00308470[1];
  local_20[2] = DAT_00308470[2];
  local_20[3] = DAT_00308470[3];
  iVar1 = 0;
  local_20[4] = DAT_00308470[4];
  iStack_c = DAT_00308470[5];
  while( true ) {
    if (local_20[iVar1] == param_1) {
      return iVar1;
    }
    if (local_20[iVar1 + 1] == param_1) break;
    iVar1 = iVar1 + 2;
    if (0x17 < iVar1) {
      return 0;
    }
  }
  return iVar1 + 1;
}
