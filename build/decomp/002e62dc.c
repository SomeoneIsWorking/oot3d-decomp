// OoT3D decomp @ 002e62dc  name=FUN_002e62dc  size=60

void FUN_002e62dc(int param_1)

{
  int iVar1;

  iVar1 = DAT_002e6318 + *(short *)(param_1 + 0x104) * 0x1c;
  *(undefined4 *)(iVar1 + 0xec) = *(undefined4 *)(param_1 + 0x2238);
  *(undefined4 *)(iVar1 + 0xf0) = *(undefined4 *)(param_1 + 0x2228);
  *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(param_1 + 0x223c);
  *(undefined4 *)(iVar1 + 0xf8) = *(undefined4 *)(param_1 + 0x2244);
  return;
}
