// OoT3D decomp @ 003b3990  name=FUN_003b3990  size=256

void FUN_003b3990(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;

  FUN_003705a0(DAT_003b3a94,DAT_003b3a90,param_1 + 0x58);
  fVar1 = DAT_003b3a9c;
  if (*(int *)(param_1 + 0x58) < DAT_003b3a98) {
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + DAT_003b3a9c;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar1;
  }
  if ((*(int *)(param_1 + 0x58) < DAT_003b3aa0) &&
     (uVar3 = *(int *)(param_1 + 0x2d4) - 8, *(uint *)(param_1 + 0x2d4) = uVar3, 0xff < uVar3)) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  else if (*(int *)(param_1 + 0x2d4) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  uVar2 = DAT_003b3aa4;
  *(undefined4 *)(param_1 + 0x2d0) = DAT_003b3aa4;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined1 *)(param_1 + 0x2c2) = 1;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  *(undefined1 *)(param_1 + 0x2de) = 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x2dd) = 0;
  *(undefined2 *)(param_1 + 0x2c0) = 0x5a;
  FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
  FUN_00374444(param_2,param_1,param_1 + 0x28,0x60);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_003b3aa8;
  return;
}
