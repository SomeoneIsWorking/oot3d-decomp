// OoT3D decomp @ 0033f2d8  name=FUN_0033f2d8  size=260

void FUN_0033f2d8(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = *DAT_0033f3dc;
  *(undefined2 *)(iVar2 + 0xf6e) = 0xbd;
  *(undefined2 *)(iVar2 + 0xf70) = 0xb8;
  *(undefined2 *)(iVar2 + 0xf72) = 0xb3;
  *(undefined2 *)(iVar2 + 0xf74) = 0xae;
  *(undefined2 *)(iVar2 + 0xf76) = 0xa9;
  uVar3 = 0xa9;
  if (((*DAT_0033f3e0 & 1) == 0) &&
     (uVar4 = FUN_003679b4(DAT_0033f3e0), uVar3 = (int)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0))
  {
    FUN_0036788c(DAT_0033f3e4);
    uVar3 = DAT_0033f3ec;
  }
  FUN_002c0ca4(DAT_0033f3f0,uVar3);
  FUN_00303b14(DAT_0033f3f4,9,0xff);
  puVar1 = DAT_0033f3f8;
  DAT_0033f3f8[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  iVar2 = DAT_0033f3fc;
  *(undefined2 *)(DAT_0033f3fc + 0x10) = 0x50;
  *(undefined2 *)(iVar2 + 0x14) = 0x96;
  *(undefined2 *)(iVar2 + 0x12) = 0xff;
  *(undefined2 *)(iVar2 + 0x16) = 10;
  *(undefined2 *)(iVar2 + 0x1a) = 10;
  *(undefined2 *)(iVar2 + 0x18) = 10;
  *(undefined2 *)(iVar2 + 0x1c) = 0xff;
  *(undefined2 *)(iVar2 + 0x20) = 0xff;
  *(undefined2 *)(iVar2 + 0x1e) = 0x32;
  *(undefined2 *)(iVar2 + 0x22) = 10;
  *(undefined2 *)(iVar2 + 0x26) = 10;
  *(undefined2 *)(iVar2 + 0x24) = 10;
  return;
}

