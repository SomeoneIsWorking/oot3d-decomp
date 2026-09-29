// OoT3D decomp @ 003d8384  name=FUN_003d8384  size=108

void FUN_003d8384(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = DAT_003d83f0;
  if (*(short *)(param_1 + 0x252) != 0) {
    *(short *)(param_1 + 0x252) = *(short *)(param_1 + 0x252) + -1;
  }
  FUN_003705a0(DAT_003d83f4,uVar1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x252) != 0) {
    return;
  }
  FUN_00374444(param_2,param_1,param_1 + 0x28,0xe0);
  FUN_00374428(param_1);
  return;
}
