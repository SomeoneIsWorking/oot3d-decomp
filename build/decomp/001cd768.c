// OoT3D decomp @ 001cd768  name=FUN_001cd768  size=108

void FUN_001cd768(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_0033fdb4();
  FUN_0033f928(param_1,param_2);
  FUN_0036e168(*(undefined4 *)(param_1 + 0x1d4),DAT_001cd7dc,DAT_001cd7d8,DAT_001cd7d4,
               param_1 + 0x1d8);
  iVar2 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1a);
  uVar1 = DAT_001cd7e4;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1d4) = DAT_001cd7e0;
    *(undefined4 *)(param_1 + 0x1c0) = uVar1;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001cd7e8;
  }
  return;
}
