// OoT3D decomp @ 003b3aac  name=FUN_003b3aac  size=152

void FUN_003b3aac(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;

  uVar2 = DAT_003b3b48;
  fVar1 = DAT_003b3b44;
  if (*(short *)(param_1 + 0x2c0) == 0) {
    uVar4 = *(int *)(param_1 + 0x2d4) + 8;
    *(uint *)(param_1 + 0x2d4) = uVar4;
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
    *(uint *)(param_1 + 0x2d4) = uVar4;
    fVar5 = (float)FUN_0036e168(DAT_003b3b50,DAT_003b3b4c,uVar2,fVar1,param_1 + 0x58);
    if (fVar5 == fVar1) {
      *(undefined1 *)(param_1 + 0x2dc) = 1;
      *(undefined2 *)(param_1 + 0x2c0) = 0x3c;
      *(undefined1 *)(param_1 + 0x2c2) = 1;
      *(undefined1 *)(param_1 + 0x2c4) = 1;
      uVar2 = DAT_003b3b54;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      uVar3 = DAT_003b3b58;
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
    }
  }
  return;
}
