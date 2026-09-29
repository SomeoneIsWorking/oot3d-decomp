// OoT3D decomp @ 0014edf4  name=FUN_0014edf4  size=220

void FUN_0014edf4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar1 == 4) {
    iVar1 = FUN_00346964(param_2);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00369f3c(param_2);
    uVar2 = DAT_0014eee8;
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      FUN_0036be34(param_2,DAT_0014eed4);
      return;
    }
    if (*(short *)(DAT_0014eed8 + 0x48) <
        *(short *)(DAT_0014eee4 + *(char *)((uint)*(byte *)(DAT_0014eedc + 0x11) + DAT_0014eee0) * 2
                  )) {
      FUN_00343f0c(param_2,param_2 + 0x224c);
      if (((*DAT_0036be98 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0036be98), iVar1 != 0)) {
        FUN_0036788c(DAT_0036be9c);
      }
      FUN_002e9a3c(DAT_0036bea8,uVar2,0);
      return;
    }
    FUN_003724dc(DAT_0014eef0,DAT_0014eeec,param_1,param_2,0x16);
    uVar2 = DAT_0014eef4;
  }
  else {
    if (iVar1 != 6) {
      return;
    }
    iVar1 = FUN_00346964(param_2);
    uVar2 = DAT_0014eed0;
    if (iVar1 == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x708) = uVar2;
  return;
}
