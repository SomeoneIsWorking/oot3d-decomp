// OoT3D decomp @ 0027458c  name=FUN_0027458c  size=164

void FUN_0027458c(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;

  iVar2 = FUN_0036bc98();
  if (iVar2 == 0) {
    *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
    sVar1 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0x36);
    if (*(int *)(param_1 + 0x98) <= DAT_00274634) {
      if ((*(uint *)(DAT_00274638 + 0xbc) & *(uint *)(DAT_0027463c + 0x3c)) != 0) {
        *(short *)(param_1 + 0x116) = (short)DAT_00274640;
      }
      if (sVar1 < 0) {
        sVar1 = -sVar1;
      }
      if (sVar1 < 0x4300) {
        *(undefined2 *)(param_1 + 0x1b2) = 0;
        FUN_0036bb28(DAT_00274644,param_1,param_2);
        return;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00274630;
  }
  return;
}
