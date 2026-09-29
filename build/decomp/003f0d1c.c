// OoT3D decomp @ 003f0d1c  name=FUN_003f0d1c  size=440

void FUN_003f0d1c(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;

  iVar4 = FUN_00371e40();
  fVar2 = DAT_003f0ed8;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x290) = DAT_003f0ed4;
    *(undefined1 *)(param_1 + 3) = 0xff;
    return;
  }
  uVar3 = 0;
  if (DAT_003f0ed8 < *(float *)(param_1 + 100)) {
    uVar3 = *(ushort *)(param_1 + 0x90);
    if ((uVar3 & 0x10) != 0) {
      *(float *)(param_1 + 100) = -*(float *)(param_1 + 100);
    }
  }
  bVar6 = *(float *)(param_1 + 0x6c) == fVar2;
  if (!bVar6) {
    uVar3 = *(ushort *)(param_1 + 0x90);
    bVar6 = (uVar3 & 8) == 0;
  }
  if (bVar6) {
LAB_003f0e00:
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      FUN_003705a0(fVar2,DAT_003f0ee4,param_1 + 0x6c);
      goto LAB_003f0ec4;
    }
  }
  else if ((uVar3 & 1) == 0) {
    sVar1 = *(short *)(param_1 + 0x82) - *(short *)(param_1 + 0x36);
    if (0x8000 < (int)sVar1 + 0x4000U) {
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x82) + sVar1 + -0x8000;
    }
    if (*(short *)(param_1 + 0x19c) < 1) {
      FUN_00375bcc(param_1,DAT_003f0edc);
      *(undefined2 *)(param_1 + 0x19c) = 6;
    }
    FUN_00376864(param_1);
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_003f0ee0;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
    goto LAB_003f0e00;
  }
  FUN_003705a0(fVar2,DAT_003f0ee8,param_1 + 0x6c);
  uVar5 = *(ushort *)(param_1 + 0x90) & 2;
  bVar6 = (*(ushort *)(param_1 + 0x90) & 2) == 0;
  if (!bVar6) {
    uVar5 = *(uint *)(param_1 + 100);
  }
  if (bVar6 || uVar5 < 0xc0000001) {
    if (5 < *(short *)(param_1 + 0x26c)) {
      FUN_0034df30(param_1,param_2);
    }
  }
  else {
    FUN_00314fe4(param_2,param_1);
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_003f0eec;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffd;
  }
  if ((*(int *)(param_1 + 100) < 0x40000000) || (0 < *(int *)(param_1 + 0x288))) {
    *(float *)(param_1 + 100) = fVar2;
  }
  else {
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
  }
LAB_003f0ec4:
  FUN_00376864(param_1);
  return;
}
