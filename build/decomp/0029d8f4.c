// OoT3D decomp @ 0029d8f4  name=FUN_0029d8f4  size=552

void FUN_0029d8f4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;

  uVar4 = 0;
  FUN_003510b0(param_1,DAT_0029db1c);
  *(byte *)(param_1 + 0x1c0) = (byte)*(undefined2 *)(param_1 + 0x1c) & 0x3f;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) >> 8;
  FUN_003532e8(param_1,3);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,1,param_1 + 0x1c8,0,0,uVar4);
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar4 = FUN_00353fd4(param_1,param_2,1);
    if ((*(ushort *)(DAT_0029db20 + 0xf8) & 0x20) == 0) {
      *(undefined2 *)(param_1 + 0x36) = 0x55;
    }
    else {
      *(undefined2 *)(param_1 + 0x36) = 0x2ab;
    }
    FUN_00214874();
    *(undefined1 *)(param_1 + 3) = 0xff;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    uVar2 = DAT_0029db24;
    if ((*(uint *)(param_2 + 0x7f70) & 2) == 0) {
      *(uint *)(param_2 + 0x7f70) = *(uint *)(param_2 + 0x7f70) | 2;
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    }
    else {
      *(undefined2 *)(param_1 + 0x1c) = 0xff;
      FUN_00374428(param_1);
    }
    goto LAB_0029daf8;
  }
  uVar4 = FUN_00353fd4(param_1,param_2,0);
  if (*(char *)(param_1 + 3) == '\0') {
    cVar3 = *(char *)(param_1 + 0x1c0) + -0x33;
  }
  else {
    cVar3 = *(char *)(param_1 + 3) + '\x01';
  }
  *(char *)(param_1 + 0x1c1) = cVar3;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined2 *)(param_1 + 0x1c2) = 1;
  uVar2 = DAT_0029db28;
  if (*(char *)(param_1 + 0x1c1) < '\x06') {
    if (*(char *)(param_1 + 0x1c1) == '\x05') {
      FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x1c0));
      uVar2 = DAT_0029db34;
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_0029db30;
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      *(uint *)(param_2 + 0x7f70) = *(uint *)(param_2 + 0x7f70) | 1;
      goto LAB_0029daf8;
    }
    FUN_0036beac();
    uVar2 = DAT_0029db2c;
    uVar1 = 1 << *(sbyte *)(param_1 + 0x1c1);
    if ((*(uint *)(param_2 + 0x7f70) & uVar1) == 0) {
      *(uint *)(param_2 + 0x7f70) = *(uint *)(param_2 + 0x7f70) | uVar1;
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      goto LAB_0029daf8;
    }
  }
  else if ((*(uint *)(param_2 + 0x7f70) & 1) == 0) {
    *(uint *)(param_2 + 0x7f70) = *(uint *)(param_2 + 0x7f70) | 1;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    goto LAB_0029daf8;
  }
  FUN_00374428(param_1);
LAB_0029daf8:
  uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  return;
}
