// OoT3D decomp @ 001bbb24  name=FUN_001bbb24  size=212

void FUN_001bbb24(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(float *)(param_1 + 0x830) = *(float *)(param_1 + 0x30) + DAT_001bbbf8;
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x28);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x7dc,param_4,param_4);
  FUN_003731e0(param_1 + 0x1a4);
  if ((*(char *)(param_1 + 0x864) != '\0') &&
     (FUN_00376340(DAT_001bbbfc,DAT_001bbbfc,DAT_001bbbfc,param_2,param_1,4),
     *(short *)(param_2 + 0x104) == 0x20)) {
    *(undefined1 *)(param_1 + 0x864) = 0;
  }
  (**(code **)(param_1 + 0x7d8))(param_1,param_2);
  FUN_00342714(*(float *)(param_1 + 0x81c) + DAT_001bbc00,param_2,param_1,param_1 + 0x834,
               DAT_001bbc08,DAT_001bbc04);
  return;
}
