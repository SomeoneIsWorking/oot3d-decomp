// OoT3D decomp @ 00495b34  name=FUN_00495b34  size=28

void FUN_00495b34(int param_1)

{
  if (param_1 != 0) {
    *(byte *)(DAT_00495b50 + 0xb) = (byte)param_1 & 0x7f;
    FUN_002cfce0();
    return;
  }
  return;
}

