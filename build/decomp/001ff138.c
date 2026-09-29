// OoT3D decomp @ 001ff138  name=FUN_001ff138  size=64

void FUN_001ff138(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  if (iVar1 == 0) {
    FUN_003510b0(param_1,DAT_001ff178);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001ff17c;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
