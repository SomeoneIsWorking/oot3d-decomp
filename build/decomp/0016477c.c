// OoT3D decomp @ 0016477c  name=FUN_0016477c  size=272

void FUN_0016477c(int param_1,undefined4 param_2)

{
  FUN_00372d4c(DAT_00164894,DAT_0016488c,param_1 + 0xbc,DAT_00164890);
  FUN_00372f38(param_1,param_2,param_1 + 0x710,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,0,2,param_1 + 0x280,param_1 + 0x4bc,0xb);
  FUN_0036e734(param_1 + 0x1fc,2);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_00164898);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(DAT_0016489c,param_1);
  if (*(int *)(DAT_001648a0 + 4) == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  if (*(short *)(param_1 + 0x1c) == 1) {
    *(undefined4 *)(param_1 + 0x708) = DAT_001648a4;
    if ((*(ushort *)(DAT_001648a8 + 0xe) & 1) != 0) {
      FUN_00374428(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x708) = DAT_001648a4;
  }
  *(undefined2 *)(DAT_001648ac + param_1) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  *(undefined1 *)(param_1 + 0x70c) = 1;
  return;
}
