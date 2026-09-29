// OoT3D decomp @ 002e9b4c  name=FUN_002e9b4c  size=528

void FUN_002e9b4c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_48 [4];
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;

  iVar2 = DAT_002e9d74;
  piVar1 = DAT_002e9d64;
  uVar3 = param_2 + 1;
  iVar4 = *(int *)(DAT_002e9d60 + 4);
  if (param_1 == 0) {
    local_48[0] = *DAT_002e9d5c;
    local_48[1] = DAT_002e9d5c[1];
    local_48[2] = DAT_002e9d5c[2];
    local_48[3] = DAT_002e9d5c[3];
    local_38 = DAT_002e9d5c[4];
    local_34 = DAT_002e9d5c[5];
    iStack_30 = DAT_002e9d5c[6];
    iStack_2c = DAT_002e9d5c[7];
    iStack_28 = DAT_002e9d5c[8];
    if ((local_48[param_2] == 9 || iVar4 == local_48[param_2]) && (*DAT_002e9d64 != param_2)) {
      *(char *)(DAT_002e9d60 + 0x80) = (char)(param_2 + 0x3b);
      *(undefined2 *)(iVar2 + 0x4a) = 0;
      FUN_0033187c(0,uVar3 & 0xffff);
      iVar2 = DAT_002e9d68;
      if (*(int *)(DAT_002e9d68 + 0x2c) != 0) {
        *(undefined4 *)(DAT_002e9d70 + *(int *)(DAT_002e9d6c + *(int *)(DAT_002e9d68 + 0x2c))) = 0;
        FUN_0034913c();
      }
      *(int *)(iVar2 + 0x4c) = param_2 + 0x3b;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x40) = 0;
      iVar4 = *piVar1;
      *(undefined4 *)(iVar2 + 0x18) = 3;
      *(int *)(iVar2 + 0x44) = param_2;
      *(int *)(iVar2 + 0x48) = iVar4 * 0x32;
      return;
    }
  }
  else if (param_1 == 1) {
    local_48[0] = *DAT_002e9d5c;
    local_48[1] = DAT_002e9d5c[1];
    local_48[2] = DAT_002e9d5c[2];
    local_48[3] = DAT_002e9d5c[3];
    local_38 = DAT_002e9d5c[4];
    local_34 = DAT_002e9d5c[5];
    iStack_30 = DAT_002e9d5c[6];
    iStack_2c = DAT_002e9d5c[7];
    iStack_28 = DAT_002e9d5c[8];
    if ((local_48[param_2 + 3] == 9 || iVar4 == local_48[param_2 + 3]) &&
       (DAT_002e9d64[1] != param_2)) {
      FUN_0033187c(1,uVar3 & 0xffff);
      iVar2 = DAT_002e9d68;
      if (*(int *)(DAT_002e9d68 + 0x2c) != 0) {
        *(undefined4 *)(DAT_002e9d70 + *(int *)(DAT_002e9d6c + *(int *)(DAT_002e9d68 + 0x2c))) = 0;
        FUN_0034913c();
      }
      *(int *)(iVar2 + 0x4c) = param_2 + 0x3e;
      *(undefined4 *)(iVar2 + 0x40) = 1;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      iVar4 = piVar1[1];
      *(undefined4 *)(iVar2 + 0x18) = 3;
      *(int *)(iVar2 + 0x44) = param_2;
      *(int *)(iVar2 + 0x48) = iVar4 * 0x32;
      return;
    }
  }
  else if (param_1 == 2) {
    local_48[0] = *DAT_002e9d5c;
    local_48[1] = DAT_002e9d5c[1];
    local_48[2] = DAT_002e9d5c[2];
    local_48[3] = DAT_002e9d5c[3];
    local_38 = DAT_002e9d5c[4];
    local_34 = DAT_002e9d5c[5];
    iStack_30 = DAT_002e9d5c[6];
    iStack_2c = DAT_002e9d5c[7];
    iStack_28 = DAT_002e9d5c[8];
    if ((local_48[param_2 + 6] == 9 || iVar4 == local_48[param_2 + 6]) &&
       (DAT_002e9d64[2] != param_2)) {
      FUN_0033187c(2,uVar3 & 0xffff);
      iVar2 = DAT_002e9d68;
      if (*(int *)(DAT_002e9d68 + 0x2c) != 0) {
        *(undefined4 *)(DAT_002e9d70 + *(int *)(DAT_002e9d6c + *(int *)(DAT_002e9d68 + 0x2c))) = 0;
        FUN_0034913c();
      }
      *(int *)(iVar2 + 0x4c) = param_2 + 0x41;
      *(undefined4 *)(iVar2 + 0x40) = 2;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      iVar4 = piVar1[2];
      *(undefined4 *)(iVar2 + 0x18) = 3;
      *(int *)(iVar2 + 0x44) = param_2;
      *(int *)(iVar2 + 0x48) = iVar4 * 0x32;
    }
  }
  return;
}
