// OoT3D decomp @ 002d5984  name=FUN_002d5984  size=132

void FUN_002d5984(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;

  puVar1 = (uint *)*DAT_002d5a08;
  if (puVar1[0x145] != param_1) {
    puVar1[0x145] = param_1;
    *puVar1 = *puVar1 | 0x200;
  }
  if (puVar1[0x146] != param_2) {
    puVar1[0x146] = param_2;
    *puVar1 = *puVar1 | 0x200;
  }
  if (puVar1[0x147] != param_3) {
    puVar1[0x147] = param_3;
    *puVar1 = *puVar1 | 0x200;
  }
  if (puVar1[0x148] != param_4) {
    puVar1[0x148] = param_4;
    *puVar1 = *puVar1 | 0x200;
  }
  return;
}
