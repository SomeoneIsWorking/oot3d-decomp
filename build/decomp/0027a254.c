// OoT3D decomp @ 0027a254  name=FUN_0027a254  size=464

void FUN_0027a254(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  FUN_003510b0(param_1,DAT_0027a424);
  FUN_003532e8(param_1,1);
  uVar3 = (uint)*(short *)(param_1 + 0x1c);
  uVar5 = uVar3 & 0x4000;
  if (uVar5 == 0) {
    *(byte *)(param_1 + 0x1c3) = (byte)((uVar3 << 0x12) >> 0x1a);
    iVar4 = FUN_0036e864(param_2);
    *(bool *)(param_1 + 0x1c3) = iVar4 != 0;
  }
  else {
    *(char *)(param_1 + 0x1c3) = (char)(uVar3 & 0x3f);
  }
  *(short *)(param_1 + 0x1c) = (short)((*(ushort *)(param_1 + 0x1c) & 0x8000) >> 0xe);
  iVar4 = FUN_0036e864(param_2,uVar3 & 0x3f);
  if (iVar4 != 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(undefined2 *)(param_1 + 0x1c) = 1;
    }
    else if (*(short *)(param_1 + 0x1c) == 2) {
      *(undefined2 *)(param_1 + 0x1c) = 3;
    }
  }
  *(undefined1 *)(param_1 + 0x1c2) = 0xff;
  sVar1 = *(short *)(param_1 + 0x1c);
  iVar4 = param_2 + 0x3a58;
  if (sVar1 == 0) {
    uVar2 = FUN_00363c10(iVar4,0x5c);
    *(undefined1 *)(param_1 + 0x1c0) = uVar2;
    uVar2 = FUN_00363c10(iVar4,0x6f);
    *(undefined1 *)(param_1 + 0x1c1) = uVar2;
    if (uVar5 == 0) {
      uVar2 = FUN_00363c10(iVar4,0xe);
      *(undefined1 *)(param_1 + 0x1c2) = uVar2;
      goto LAB_0027a3e4;
    }
  }
  else {
    if (sVar1 == 1) {
      uVar2 = FUN_00363c10(iVar4,0x6f);
      *(undefined1 *)(param_1 + 0x1c0) = uVar2;
      uVar2 = FUN_00363c10(iVar4,0x5c);
      *(undefined1 *)(param_1 + 0x1c1) = uVar2;
    }
    else if (sVar1 == 2) {
      uVar2 = FUN_00363c10(iVar4,0x70);
      *(undefined1 *)(param_1 + 0x1c0) = uVar2;
      uVar2 = FUN_00363c10(iVar4,0x71);
      *(undefined1 *)(param_1 + 0x1c1) = uVar2;
    }
    else {
      uVar2 = FUN_00363c10(iVar4,0x71);
      *(undefined1 *)(param_1 + 0x1c0) = uVar2;
      uVar2 = FUN_00363c10(iVar4,0x70);
      *(undefined1 *)(param_1 + 0x1c1) = uVar2;
    }
    if (uVar5 == 0) goto LAB_0027a3e4;
  }
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + 4;
LAB_0027a3e4:
  if (*(char *)(param_1 + 0x1c0) < '\0') {
    FUN_00374428(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0027a428;
  }
  if (*(char *)(DAT_0027a42c + param_2) != '\0') {
    return;
  }
  FUN_0032b13c(param_2,0xc);
  return;
}
