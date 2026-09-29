// OoT3D decomp @ 003b3920  name=FUN_003b3920  size=164

void FUN_003b3920(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;

  uVar1 = DAT_003b3988;
  fVar2 = DAT_003b3984;
  uVar3 = *(int *)(param_1 + 0x2d4) - 0x10;
  *(uint *)(param_1 + 0x2d4) = uVar3;
  if (0xff < uVar3) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  fVar4 = (float)FUN_0036e168(fVar2,DAT_003b398c,uVar1,fVar2,param_1 + 0x58);
  if (fVar4 != fVar2) {
    return;
  }
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2b0);
  uVar1 = DAT_0016163c;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined2 *)(param_1 + 0x2da) = 0;
  *(undefined2 *)(param_1 + 0x2d8) = 0;
  *(undefined2 *)(param_1 + 0x2c0) = 0x96;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
