// OoT3D decomp @ 001b3cec  name=FUN_001b3cec  size=108

void FUN_001b3cec(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0x1ac,0x55,0);
  *(undefined1 *)(param_1 + 0x1b0) = 0xff;
  FUN_003510b0(param_1,DAT_001b3d58);
  uVar2 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x17) >> 0x1d;
  bVar3 = uVar2 == 0;
  iVar1 = uVar2 * 4;
  if (bVar3) {
    uVar2 = 0xff;
  }
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(DAT_001b3d5c + iVar1);
  if (bVar3) {
    *(short *)(param_1 + 0x1a4) = (short)uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined1 *)(param_1 + 0x1a7) = 0;
  return;
}
