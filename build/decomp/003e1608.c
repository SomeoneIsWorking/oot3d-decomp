// OoT3D decomp @ 003e1608  name=FUN_003e1608  size=212

void FUN_003e1608(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  if (*(short *)(param_1 + 0x22c) != 0) {
    *(short *)(param_1 + 0x22c) = *(short *)(param_1 + 0x22c) + -1;
  }
  FUN_00370378(param_1 + 0xbc,0,0x200);
  FUN_00370378(param_1 + 0xc0,0,0x200);
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_003e16dc;
  if (*(float *)(param_1 + 0xc) < *(float *)(param_1 + 0x84)) {
    iVar2 = FUN_0036e5e0(DAT_003e16dc,DAT_003e16e0,param_1 + 0x1a4);
    if (iVar2 != 0) {
      FUN_00375bcc(param_1,DAT_003e16e4);
    }
    if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
      FUN_00375bcc(param_1,DAT_003e16e8);
    }
  }
  iVar2 = DAT_003e16ec;
  if (*(short *)(param_1 + 0x22c) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(iVar2 + 0x24);
  FUN_00364394(param_1);
  return;
}
