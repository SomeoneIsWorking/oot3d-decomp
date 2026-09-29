// OoT3D decomp @ 001b76f0  name=FUN_001b76f0  size=516

void FUN_001b76f0(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined1 auStack_1c [8];

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001b78f4,DAT_001b78f4,DAT_001b78f4,param_2,param_1,4);
  if (((*(ushort *)(param_1 + 0x836) & 2) == 0) &&
     (iVar4 = FUN_00370734(param_1 + 0x1fc), iVar4 != 0)) {
    *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) | 2;
  }
  (**(code **)(param_1 + 0x83c))(param_1,param_2);
  uVar1 = DAT_001b78f8;
  if ((*(ushort *)(param_1 + 0x836) & 1) == 0) {
    FUN_00375a18(param_1 + 0x830,0,6,DAT_001b78f8,100);
    FUN_00375a18(param_1 + 0x832,0,6,uVar1,100);
  }
  else {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x830,auStack_1c,0x4300);
  }
  uVar2 = *(ushort *)(param_1 + 0x836);
  iVar4 = *(int *)(DAT_001b78fc + param_2);
  if ((uVar2 & 8) == 0) {
    if (*(char *)(iVar4 + 0x1a7) != '\x01') {
      if ((*(uint *)(DAT_001b7900 + iVar4) & 0x400) == 0) {
        return;
      }
      iVar4 = (int)(short)(int)*(float *)(iVar4 + 0x88);
      if (iVar4 < 1) {
        return;
      }
      if (iVar4 < 0x140) {
        if (iVar4 < 0x50) {
          sVar3 = 1;
        }
        else {
          fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
          sVar3 = (short)(int)(fVar5 * DAT_001b7908);
        }
      }
      else if (iVar4 < DAT_001b7904) {
        sVar3 = 7;
      }
      else {
        sVar3 = 8;
      }
      if (sVar3 <= *(short *)(param_1 + 0x838)) {
        return;
      }
      *(short *)(param_1 + 0x838) = sVar3;
      if ((*(ushort *)(param_1 + 0x836) & 4) != 0) {
        return;
      }
      if (sVar3 < 8) {
        return;
      }
      *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) | 4;
      FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001b790c);
      return;
    }
    uVar2 = uVar2 | 8;
  }
  else {
    if ((*(uint *)(iVar4 + 0x1714) & 0x400) != 0) {
      return;
    }
    uVar2 = uVar2 & 0xfff7;
  }
  *(ushort *)(param_1 + 0x836) = uVar2;
  return;
}
