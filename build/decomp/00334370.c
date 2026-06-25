// OoT3D decomp @ 00334370  name=FUN_00334370  size=116

undefined4 FUN_00334370(int param_1)

{
  short sVar1;
  
  if (**(char **)(DAT_003343e4 + param_1) != '\x01') {
    sVar1 = *(short *)(*DAT_003343e8 + 0x4b2);
    if ((sVar1 != 0x20 && sVar1 != 0x30) && sVar1 != 0x40) {
      param_1 = (int)*(short *)(param_1 + 0x104);
    }
    if (((((sVar1 != 0x20 && sVar1 != 0x30) && sVar1 != 0x40) && param_1 != 0x45) && param_1 != 0x33
        ) && ((((((param_1 != 0x2e && param_1 != 0x2f) && param_1 != 0x32) && param_1 != 0x2c) &&
               param_1 != 0x2d) && param_1 != 0x30) && param_1 != 0x31)) {
      return 1;
    }
  }
  return 0;
}

