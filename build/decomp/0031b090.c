// OoT3D decomp @ 0031b090  name=FUN_0031b090  size=144

void FUN_0031b090(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_40 [9];

  local_40[0] = *DAT_0031b120;
  local_40[1] = DAT_0031b120[1];
  local_40[2] = DAT_0031b120[2];
  local_40[3] = DAT_0031b120[3];
  local_40[4] = DAT_0031b120[4];
  local_40[5] = DAT_0031b120[5];
  local_40[6] = DAT_0031b120[6];
  local_40[7] = DAT_0031b120[7];
  local_40[8] = DAT_0031b120[8];
  uVar2 = 0;
  do {
    iVar1 = 0;
    if (local_40[uVar2 * 3] == param_2) {
      do {
        if (local_40[uVar2 * 3 + iVar1] != -1) {
          FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
    }
    else {
      do {
        if (local_40[uVar2 * 3 + iVar1] != -1) {
          FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}
