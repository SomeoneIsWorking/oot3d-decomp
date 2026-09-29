// OoT3D decomp @ 00269414  name=FUN_00269414  size=328

void FUN_00269414(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;

  (**(code **)(param_1 + 0x1a4))();
  if (*(short *)(param_1 + 0x1ae) != 0) {
    *(short *)(param_1 + 0x1ae) = *(short *)(param_1 + 0x1ae) + -1;
  }
  if (*(short *)(param_1 + 0x1bc) != 0) {
    *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + -1;
  }
  if (*(short *)(param_1 + 0x1ba) != 0) {
    *(short *)(param_1 + 0x1ba) = *(short *)(param_1 + 0x1ba) + -1;
  }
  if (1 < *(ushort *)(param_1 + 0x1a8) && *(ushort *)(param_1 + 0x1a8) != 3) {
    FUN_00376864(param_1);
    FUN_00376340(DAT_0026963c,DAT_0026963c,DAT_00269638,param_2,param_1,0x1c);
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    if (*(short *)(param_1 + 0x1a8) == 3) {
      iVar2 = param_1 + 0x22c;
      sVar3 = 0;
      if (0 < *(short *)(param_1 + 0x1b4)) {
        do {
          if (*(char *)(iVar2 + 0x12) != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          sVar3 = sVar3 + 1;
          iVar2 = iVar2 + 0x2c;
        } while (sVar3 < *(short *)(param_1 + 0x1b4));
      }
    }
    iVar1 = *(int *)(param_1 + 0x1a4);
    iVar2 = DAT_00269664;
    if (iVar1 != DAT_00269664) {
      iVar2 = DAT_00269668;
    }
    if (iVar1 != DAT_00269664 && iVar1 != iVar2) {
      FUN_0037632c(param_1,param_1 + 0x1d4);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1d4);
      return;
    }
  }
  return;
}
