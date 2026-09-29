// OoT3D decomp @ 001096cc  name=FUN_001096cc  size=508

void FUN_001096cc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  iVar5 = *(int *)(DAT_001098c8 + param_2);
  *(undefined1 *)(param_2 + 0x3261) = 1;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x1000;
  if (*(short *)(param_1 + 0x1aa) == 0x4a) {
    *(undefined1 *)(param_2 + 0x3237) = 1;
    *(undefined2 *)(param_2 + 0x3254) = 0xff;
  }
  if (*(short *)(param_1 + 0x1aa) == 0x2f) {
    *(undefined1 *)(param_2 + 0x3237) = 0;
    *(undefined2 *)(param_2 + 0x3254) = 0x14;
  }
  if (0x47 < *(short *)(param_1 + 0x1aa)) {
    *(undefined1 *)(param_2 + 0x3264) = 0xff;
    *(undefined1 *)(param_2 + 0x3263) = 0xff;
    *(undefined1 *)(param_2 + 0x3262) = 0xff;
    if ((*(ushort *)(param_1 + 0x1a8) & 1) != 0) {
      *(undefined1 *)(param_2 + 0x3265) = 0x46;
      goto LAB_00109760;
    }
  }
  *(undefined1 *)(param_2 + 0x3265) = 0;
LAB_00109760:
  uVar3 = DAT_001098d0;
  uVar1 = DAT_001098cc;
  if (*(short *)(param_1 + 0x1a8) < 0x1f) {
    FUN_0036fc20(DAT_001098d0,DAT_001098d4,param_1 + 0x1b8);
    FUN_0036fc20(uVar3,uVar1,param_1 + 0x1c4);
  }
  else {
    FUN_00373500(*(undefined4 *)(param_1 + 0x1e4),DAT_001098cc,DAT_001098d8,param_1 + 0x1c4);
  }
  FUN_0037572c(*(undefined4 *)(param_1 + 0x1c4),param_1);
  if ((DAT_001098dc < *(int *)(param_1 + 0x1e4)) &&
     (FUN_0037632c(param_1,param_1 + 0x210), *(char *)(DAT_001098e0 + iVar5) == '\0')) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x210);
  }
  if (*(short *)(param_1 + 0x1a8) == 0) {
    FUN_00374428(param_1);
    *(undefined1 *)(param_2 + 0x3261) = 0;
  }
  uVar1 = DAT_001098e4;
  if (*(short *)(param_1 + 0x26a) == 0) {
    FUN_0036fc20(uVar3,DAT_001098f0,param_1 + 0x26c);
    if (*(float *)(param_1 + 0x26c) == DAT_001098f4) {
      *(undefined1 *)(param_1 + 0x268) = 0;
    }
  }
  else {
    *(short *)(param_1 + 0x26a) = *(short *)(param_1 + 0x26a) + -1;
    uVar4 = DAT_001098ec;
    uVar3 = DAT_001098e8;
    *(undefined1 *)(param_1 + 0x268) = 1;
    FUN_00373500(uVar4,uVar3,uVar1,param_1 + 0x26c);
  }
  puVar2 = DAT_001098fc;
  *DAT_001098f8 = *(undefined1 *)(param_1 + 0x268);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  *puVar2 = *(undefined4 *)(param_1 + 0x28);
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  *DAT_00109900 = (short)(int)*(float *)(param_1 + 0x26c);
  *DAT_00109904 = uVar1;
  *DAT_00109908 = 0;
  return;
}
