// OoT3D decomp @ 00276ebc  name=FUN_00276ebc  size=116

void FUN_00276ebc(int param_1,int param_2)

{
  undefined1 uVar1;

  FUN_003510b0(param_1,DAT_00276f30);
  FUN_003532e8(param_1,0);
  if (*(short *)(param_1 + 0x1c) < 3) {
    uVar1 = FUN_00363c10(param_2 + 0x3a58,0x8d);
    *(undefined1 *)(param_1 + 0x1c1) = uVar1;
  }
  else {
    uVar1 = FUN_00363c10(param_2 + 0x3a58,0x69);
    *(undefined1 *)(param_1 + 0x1c1) = uVar1;
  }
  if (-1 < *(char *)(DAT_00276f34 + param_1)) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00276f38;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
