// OoT3D decomp @ 0043e068  name=FUN_0043e068  size=368

void FUN_0043e068(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined8 uVar7;

  iVar5 = DAT_0043e1e0;
  puVar2 = DAT_0043e1dc;
  iVar1 = DAT_0043e1d8;
  iVar3 = *(int *)(DAT_0043e1d8 + 0x3c) + 1;
  *(int *)(DAT_0043e1d8 + 0x3c) = iVar3;
  iVar4 = DAT_0043e1e4;
  if (iVar3 != 2) {
    if ((3 < iVar3) && (iVar4 = FUN_002fdaa4(), iVar4 != 0)) {
      FUN_002fda7c();
      uVar6 = extraout_r1;
      if (((*puVar2 & 1) == 0) &&
         (uVar7 = FUN_003679b4(DAT_0043e1dc), uVar6 = (int)((ulonglong)uVar7 >> 0x20),
         (int)uVar7 != 0)) {
        FUN_0036788c(DAT_0043e1ec);
        uVar6 = DAT_0043e1f4;
      }
      *(undefined1 *)(iVar5 + 0x21) = 0;
      FUN_002e7d80(0,uVar6);
      iVar5 = FUN_00313ce0(0x4c,iVar1);
      uVar6 = 0;
      if (iVar5 != 0) {
        uVar6 = FUN_002f57f0(iVar5,DAT_0043e1f8,0x38,0x11,0);
      }
      *(undefined4 *)(DAT_0043e1fc + 0xc) = uVar6;
      *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
      *(undefined4 *)(iVar1 + 8) = 6;
    }
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x24);
  *(char *)(DAT_0043e1e4 + 0x2c) = (char)iVar3;
  if ((iVar3 == 7) && (*(short *)(DAT_0043e1e8 + 0xe) != 0)) {
    *(undefined1 *)(iVar4 + 0x2c) = 8;
  }
  FUN_0034338c(iVar4 + 0x1c,DAT_0043e1e8,(uint)*(byte *)(iVar4 + 0x2c) << 1);
  if (((*puVar2 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0043e1dc), iVar4 != 0)) {
    FUN_0036788c(DAT_0043e1ec);
  }
  *(undefined1 *)(iVar5 + 0x21) = 1;
  FUN_002fdac8(*(undefined4 *)(iVar1 + 0x50),1);
  return;
}
