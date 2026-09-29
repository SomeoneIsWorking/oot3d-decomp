// OoT3D decomp @ 003d5578  name=FUN_003d5578  size=96

void FUN_003d5578(int param_1,undefined4 param_2)

{
  float fVar1;
  uint uVar2;

  FUN_00370734(param_1 + 0x1a4);
  fVar1 = DAT_003d55d8;
  uVar2 = *(byte *)(param_1 + 0xd0) - 5;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  *(char *)(param_1 + 0xd0) = (char)uVar2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar1;
  if ((uVar2 & 0xff) == 0) {
    FUN_00374444(param_2,param_1,param_1 + 0x28,0x50);
    FUN_00374428(param_1);
    return;
  }
  return;
}
