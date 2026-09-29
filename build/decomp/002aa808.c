// OoT3D decomp @ 002aa808  name=FUN_002aa808  size=88

void FUN_002aa808(int param_1)

{
  undefined2 uVar1;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(char *)(param_1 + 0x67c) == '\0') {
    if (*(short *)(param_1 + 0x656) == 0) {
      uVar1 = 0x18;
    }
    else {
      uVar1 = 0x1a;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar1;
    uVar1 = 4;
  }
  else {
    *(undefined2 *)(param_1 + 0x116) = 0x19;
    uVar1 = 5;
  }
  *(undefined2 *)(param_1 + 0x652) = uVar1;
  *(undefined4 *)(param_1 + 0x638) = uRam002aa860;
  return;
}
