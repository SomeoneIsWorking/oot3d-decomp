// OoT3D decomp @ 002dbbac  name=FUN_002dbbac  size=144

int FUN_002dbbac(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_28 [8];

  local_28[0] = *DAT_002dbc3c;
  local_28[1] = DAT_002dbc3c[1];
  local_28[2] = DAT_002dbc3c[2];
  local_28[3] = DAT_002dbc3c[3];
  iVar2 = 0;
  local_28[4] = DAT_002dbc3c[4];
  local_28[5] = DAT_002dbc3c[5];
  local_28[6] = DAT_002dbc3c[6];
  local_28[7] = DAT_002dbc3c[7];
  do {
    iVar1 = 0;
    do {
      if (*(short *)(local_28[iVar2] + iVar1 * 2) ==
          *(short *)(DAT_002dbc44 + *(int *)(DAT_002dbc40 + 0x24) * 2)) {
        *param_1 = iVar2;
        return local_28[iVar2];
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x33);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return 0;
}
