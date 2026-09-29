// OoT3D decomp @ 003f2314  name=FUN_003f2314  size=92

void FUN_003f2314(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  if (((int)*(short *)(param_1 + 0x36) - 0x41U < 0x40) &&
     (iVar2 = FUN_0036e864(param_2,*(short *)(param_1 + 0x36) + -0x41), iVar1 = DAT_003f2374,
     iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003f2370;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40001;
    *(ushort *)(iVar1 + param_1) = (*(ushort *)(param_1 + 0x1c) & 0xff) + 0x100;
  }
  return;
}
