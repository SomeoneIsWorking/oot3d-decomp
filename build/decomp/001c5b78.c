// OoT3D decomp @ 001c5b78  name=FUN_001c5b78  size=160

void FUN_001c5b78(int param_1)

{
  int iVar1;

  if (*(short *)(param_1 + 0x234) != 0) {
    *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
  }
  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
    FUN_00370350(DAT_001c5c18,param_1 + 0x1a4,0x10);
    *(undefined4 *)(param_1 + 0x6c) = DAT_001c5c1c;
    *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) | 1;
    *(undefined4 *)(param_1 + 0x129c) = DAT_001c5c20;
    *(byte *)(*(int *)(param_1 + 0xf08) + 0x336) = *(byte *)(*(int *)(param_1 + 0xf08) + 0x336) | 5;
    *(byte *)(*(int *)(param_1 + 0xf08) + 0x16) = *(byte *)(*(int *)(param_1 + 0xf08) + 0x16) & 0xfe
    ;
    if (*(int *)(param_1 + 0x22c) != DAT_001c5c24) {
      *(undefined2 *)(param_1 + 0x234) = 0x71;
    }
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c5c28;
  }
  return;
}
