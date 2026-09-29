// OoT3D decomp @ 0043c104  name=FUN_0043c104  size=212

void FUN_0043c104(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_44 [4];
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;

  iVar1 = DAT_0043c1d8;
  iVar4 = *(int *)(DAT_0043c1d8 + 0x18) + *(int *)(DAT_0043c1d8 + 0x1c) * 4;
  local_44[0] = *DAT_0043c1dc;
  local_44[1] = DAT_0043c1dc[1];
  local_44[2] = DAT_0043c1dc[2];
  local_44[3] = DAT_0043c1dc[3];
  iStack_34 = DAT_0043c1dc[4];
  local_30 = DAT_0043c1dc[5];
  iStack_2c = DAT_0043c1dc[6];
  iStack_28 = DAT_0043c1dc[7];
  iStack_24 = DAT_0043c1dc[8];
  iStack_20 = DAT_0043c1dc[9];
  local_1c = DAT_0043c1dc[10];
  iStack_18 = DAT_0043c1dc[0xb];
  iStack_14 = DAT_0043c1dc[0xc];
  if (iVar4 != *(int *)(DAT_0043c1d8 + 0x20)) {
    if (*(int *)(DAT_0043c1d8 + 0x10) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    *(int *)(iVar1 + 0x20) = iVar4;
    if (iVar4 < 0xc) {
      if ((*(uint *)(DAT_0043c1e0 + 0xbc) &
          *(uint *)(DAT_0043c1e8 + *(int *)(DAT_0043c1e4 + iVar4 * 4) * 4 + -0x150)) != 0) {
        iVar2 = FUN_00313ce0(0x4c);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = FUN_002f57f0(iVar2,local_44[iVar4] + 0x9ad,0x20,0xd4,0);
        }
        *(undefined4 *)(iVar1 + 0x10) = uVar3;
      }
    }
  }
  return;
}
