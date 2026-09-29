// OoT3D decomp @ 00454c98  name=FUN_00454c98  size=328

undefined4 FUN_00454c98(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_2c [4];
  int local_1c [4];

  local_1c[0] = *DAT_00454de0;
  local_1c[1] = DAT_00454de0[1];
  local_1c[2] = DAT_00454de0[2];
  local_1c[3] = DAT_00454de0[3];
  local_2c[0] = DAT_00454de0[4];
  local_2c[1] = DAT_00454de0[5];
  local_2c[2] = DAT_00454de0[6];
  local_2c[3] = DAT_00454de0[7];
  if ((*(int *)(DAT_00454de4 + 0x24) != 7) || (sVar2 = *(short *)(DAT_00454de8 + 0xe), sVar2 == 0))
  {
    sVar2 = *(short *)(DAT_00454de8 + *(int *)(DAT_00454de4 + 0x24) * 2 + -2);
  }
  iVar5 = 0;
  do {
    iVar4 = local_1c[iVar5];
    iVar3 = 0;
    do {
      if (*(short *)(iVar4 + iVar3 * 2) == sVar2) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 1);
    iVar3 = 1;
    do {
      sVar1 = *(short *)(iVar4 + iVar3 * 2);
      bVar6 = sVar1 != sVar2;
      if (bVar6) {
        sVar1 = *(short *)(iVar4 + iVar3 * 2 + 2);
      }
      if (!bVar6 || sVar1 == sVar2) {
        return 0;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < 0x33);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar5 = 0;
  do {
    iVar3 = 0;
    iVar4 = local_2c[iVar5];
    do {
      if (*(short *)(iVar4 + iVar3 * 2) == sVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 1);
    iVar3 = 1;
    do {
      sVar1 = *(short *)(iVar4 + iVar3 * 2);
      bVar6 = sVar1 != sVar2;
      if (bVar6) {
        sVar1 = *(short *)(iVar4 + iVar3 * 2 + 2);
      }
      if (!bVar6 || sVar1 == sVar2) {
        return 1;
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < 0x33);
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return 0xffffffff;
    }
  } while( true );
}
