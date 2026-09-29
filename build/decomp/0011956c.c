// OoT3D decomp @ 0011956c  name=FUN_0011956c  size=304

void FUN_0011956c(int param_1,int param_2)

{
  short sVar1;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(char *)(param_1 + 0x231) == '\0') {
    if (((uint)DAT_001196e0[*(short *)(*DAT_001196e0 + 0x1c) + -0x14] < 2) &&
       ((uint)DAT_001196e0[*(short *)(DAT_001196e0[1] + 0x1c) + -0x14] < 2)) {
      *(undefined1 *)(param_1 + 0x231) = 1;
      goto LAB_001195d8;
    }
  }
  else {
LAB_001195d8:
    if (*(short *)(param_1 + 0x234) == 0) goto LAB_001195f8;
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  if (*(short *)(param_1 + 0x234) != 0) {
    sVar1 = FUN_00367358(*(undefined4 *)(param_2 + 0x20ac),DAT_001196f4);
    FUN_00370084(param_1 + 0xbe,(int)(short)(sVar1 + -0x8000),4,0x400);
    if (*(short *)(param_1 + 0x234) == 0x2c || *(short *)(param_1 + 0x234) == 0x84) {
      FUN_0037547c(DAT_00119700,param_1 + 0xee0,4,DAT_001196fc,DAT_001196fc,DAT_001196f8);
      return;
    }
    return;
  }
LAB_001195f8:
  if ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x2c) < DAT_001196e4) &&
     ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x1710) & DAT_001196e8) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined2 *)(param_1 + 0x234) = 0x2c;
  return;
}
