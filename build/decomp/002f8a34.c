// OoT3D decomp @ 002f8a34  name=FUN_002f8a34  size=176

void FUN_002f8a34(int param_1)

{
  int iVar1;

  iVar1 = DAT_002f8ae4;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_002f8ae4 + 0x34) = 1;
    FUN_00343270(*(undefined4 *)(iVar1 + 0x24));
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
  }
  else if (param_1 == 1) {
    *(undefined4 *)(DAT_002f8ae4 + 0x34) = 0xd;
    *(undefined4 *)(iVar1 + 0x60) = 5;
    FUN_002eb4e4();
    FUN_002f9a1c(*(undefined4 *)(iVar1 + 0x24));
  }
  *(undefined4 *)(iVar1 + 0x88) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x8c) = 0xffffffff;
  FUN_002f7af4(DAT_002f8af0,DAT_002f8aec,*(undefined4 *)(DAT_002f8ae8 + 4));
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  FUN_002e9a00();
  FUN_002eb72c(*(undefined4 *)(iVar1 + 100),1);
  FUN_002f74a4(0);
  FUN_0033c25c(1);
  FUN_002f8160(*(undefined4 *)(iVar1 + 0x3c));
  return;
}
