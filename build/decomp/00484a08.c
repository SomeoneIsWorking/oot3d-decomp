// OoT3D decomp @ 00484a08  name=FUN_00484a08  size=352

void FUN_00484a08(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte *pbVar4;

  uVar2 = DAT_00484b6c;
  iVar1 = DAT_00484b68;
  *(undefined1 *)(DAT_00484b68 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0xc0) = uVar2;
  *(undefined4 *)(iVar1 + 200) = uVar2;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x11) = 0;
  FUN_003478a0(0);
  FUN_00347890(0);
  FUN_002c59e8(0);
  FUN_002c59d8(0);
  FUN_003523dc(0);
  pbVar4 = DAT_00484b74;
  puVar3 = DAT_00484b70;
  *DAT_00484b70 = uVar2;
  puVar3[3] = 0;
  puVar3[4] = uVar2;
  puVar3[7] = 0;
  *(undefined4 *)(iVar1 + 100) = uVar2;
  *(undefined1 *)(iVar1 + 0x31) = 0x7f;
  *(undefined1 *)(iVar1 + 0x32) = 0x7f;
  *(undefined1 *)(iVar1 + 0x33) = 0;
  *(undefined1 *)(iVar1 + 0x34) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 0xff;
  *(undefined1 *)(iVar1 + 0x36) = 0;
  *(undefined1 *)(iVar1 + 9) = *(undefined1 *)(iVar1 + 0x178 + (uint)*pbVar4);
  *(undefined1 *)(iVar1 + 7) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined1 *)(iVar1 + 0x39) = 0;
  *(undefined1 *)(iVar1 + 0x38) = 1;
  *(undefined1 *)(iVar1 + 0x37) = 0;
  FUN_002ddfd0(0);
  FUN_003655d0(0);
  FUN_003655d0(1,0);
  FUN_003655d0(3,0);
  FUN_0030b488(0x4000000,0);
  FUN_0030b488(0x4000001,0);
  FUN_0030b488(0x4000002,0);
  FUN_0030b488(0x4000003,0);
  FUN_0030b488(DAT_00484b78,0);
  FUN_0030b488(DAT_00484b7c,0);
  FUN_0030b488(DAT_00484b80,0);
  FUN_0034bdb8(0);
  FUN_0030f0ec();
  FUN_002dd070();
  return;
}
