// OoT3D decomp @ 002fd71c  name=FUN_002fd71c  size=172

void FUN_002fd71c(int param_1,uint param_2,int param_3)

{
  if (*(uint *)(param_1 + 0x3e4) != param_2 && param_2 != 9) {
    if (param_3 != 0) {
      FUN_0037547c(DAT_002fd7d0,0,4,DAT_002fd7cc,DAT_002fd7cc,DAT_002fd7c8);
    }
    if (param_2 < 9) {
      FUN_00344670(*(undefined4 *)(param_1 + 0xd34),param_2 + 0x96);
      FUN_00344670(*(undefined4 *)(param_1 + 0xd38),param_2 + 0x96);
      *(undefined1 *)(*(int *)(param_1 + 0xd80) + 0x6c) = 1;
      FUN_00344670(*(undefined4 *)(param_1 + 0xd80),param_2 + 0xb4);
      *(undefined1 *)(*(int *)(param_1 + 0xd88) + 0x6c) = 1;
      FUN_00344670(*(undefined4 *)(param_1 + 0xd88),param_2 + 0xbe);
    }
    *(uint *)(param_1 + 0x3e4) = param_2;
  }
  return;
}
