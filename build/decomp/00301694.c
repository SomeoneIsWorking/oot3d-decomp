// OoT3D decomp @ 00301694  name=FUN_00301694  size=76

void FUN_00301694(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;

  if (0x91 < param_3) {
    param_3 = 0x91;
  }
  uVar1 = (undefined2)param_3;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (param_2 < 0x28) {
      param_2 = 0x28;
    }
    *(short *)(param_1 + 0xc) = (short)param_2;
    *(undefined2 *)(param_1 + 0x12) = uVar1;
    return;
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    if (param_2 < 0x24) {
      param_2 = 0x24;
    }
    *(short *)(param_1 + 0xe) = (short)param_2;
    *(undefined2 *)(param_1 + 0x14) = uVar1;
    return;
  }
  *(undefined2 *)(param_1 + 0x16) = uVar1;
  return;
}
