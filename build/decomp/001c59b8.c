// OoT3D decomp @ 001c59b8  name=FUN_001c59b8  size=116

void FUN_001c59b8(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 == 0) {
    if (0x4f < *(short *)(param_1 + 0x234)) {
      FUN_003400ac(param_1,param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x234) = 0xa0;
    FUN_00340218(DAT_001c5a2c,2);
    iVar1 = DAT_001c5a34;
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c5a30;
    *(undefined1 *)(iVar1 + 2) = 1;
  }
  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  return;
}
