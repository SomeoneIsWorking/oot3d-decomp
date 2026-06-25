// OoT3D decomp @ 00315ac4  name=FUN_00315ac4  size=204

void FUN_00315ac4(int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 == 0x1d || param_2 == 0x1e) || param_2 == 0x23) &&
      (*(short *)(param_1 + 0x2dd4) == 0)) && (iVar1 = FUN_0037571c(), iVar1 == 0)) {
    if (param_2 == 0x1e) {
      FUN_0037547c(DAT_00315b98,0,4,DAT_00315b94,DAT_00315b94,DAT_00315b90);
    }
    else if (param_2 == 0x1d) {
      FUN_00371af0(DAT_00315ba0,DAT_00315b9c,10);
    }
    *(undefined2 *)(param_1 + 0x2dd4) = 1;
    iVar1 = DAT_00315ba4;
    *(undefined2 *)(DAT_00315ba4 + 4) = 0;
    *(undefined2 *)(iVar1 + 6) = 10;
  }
  else if (param_2 == 0x1f) {
    if (*(short *)(param_1 + 0x2dd4) != 0) {
      *(undefined2 *)(param_1 + 0x2dd4) = 0;
    }
    return;
  }
  return;
}

