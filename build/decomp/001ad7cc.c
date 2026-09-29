// OoT3D decomp @ 001ad7cc  name=FUN_001ad7cc  size=368

void FUN_001ad7cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_001ad93c);
  uVar1 = DAT_001ad948;
  FUN_00372d4c(DAT_001ad948,DAT_001ad940,param_1 + 0xbc,DAT_001ad944);
  *(undefined1 *)(param_1 + 0xd0) = 0x9b;
  FUN_00372f38(param_1,param_2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x360,6);
  FUN_0035c358(param_1 + 0x498,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2,param_1 + 0x670);
  FUN_00353d24(param_2,param_1 + 0x670,param_1,DAT_001ad94c);
  FUN_00350318(param_1 + 0xa0,DAT_001ad950 + 10);
  *(undefined1 *)(param_1 + 0x669) = 0;
  if (*(short *)(param_1 + 0x1c) == -1) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_001ad954;
    *(undefined1 *)(param_1 + 0x694) = 1;
    *(undefined2 *)(param_1 + 0x66a) = 0x30;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) | 1;
    uVar1 = DAT_001ad958;
    *(byte *)(param_1 + 0x681) = *(byte *)(param_1 + 0x681) | 1;
  }
  else {
    FUN_0036e734(param_1 + 0x1a4,0);
    uVar1 = DAT_001ad95c;
    *(undefined2 *)(param_1 + 0x66a) = 0x26;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = DAT_001ad960;
    *(undefined4 *)(param_1 + 0x6c) = DAT_001ad964;
    *(byte *)(param_1 + 0x680) = *(byte *)(param_1 + 0x680) & 0xfe;
    uVar1 = DAT_001ad968;
  }
  *(undefined4 *)(param_1 + 0x664) = uVar1;
  return;
}
