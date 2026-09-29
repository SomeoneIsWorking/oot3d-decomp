// OoT3D decomp @ 002e244c  name=FUN_002e244c  size=352

void FUN_002e244c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  iVar7 = DAT_002e25a8;
  FUN_00343280(DAT_002e25a8 + 0x30,DAT_002e25a4);
  iVar2 = DAT_002e25b4;
  iVar1 = DAT_002e25b0;
  puVar6 = DAT_002e25ac;
  piVar4 = DAT_002e25ac + 9;
  *piVar4 = DAT_002e25b0;
  iVar8 = 1;
  iVar9 = 4;
  *puVar6 = 0;
  do {
    iVar9 = iVar9 + -1;
    iVar10 = iVar8 * DAT_002e25b8;
    iVar8 = iVar8 + 2;
    piVar4[1] = iVar1 + iVar10 * 8;
    puVar6[1] = 0;
    piVar4 = piVar4 + 2;
    *piVar4 = iVar2 + iVar10 * 8;
    puVar6 = puVar6 + 2;
    *puVar6 = 0;
  } while (iVar9 != 0);
  *(undefined4 *)(iVar7 + 0x14) = 0;
  uVar3 = DAT_002e25bc;
  *(undefined4 *)(iVar7 + 0x18) = 0;
  FUN_00371738(iVar7 + 0x30,uVar3,0x50);
  FUN_0034338c(iVar7 + 0x80,DAT_002e25c0,0xc);
  FUN_00371738(iVar7 + 0x8c,DAT_002e25c4,0x60);
  iVar1 = DAT_002e25c8;
  *(undefined2 *)(DAT_002e25c8 + 0xd8) = *DAT_002e25cc;
  FUN_00303b14(iVar1 + 0x98,0x40,0xaa);
  iVar1 = DAT_002e25d0;
  *(undefined2 *)(DAT_002e25d0 + 100) = 0x51;
  *(short *)(iVar1 + 0x66) = (short)DAT_002e25d4;
  *(undefined2 *)(iVar1 + 0x68) = 0x48;
  *(short *)(iVar1 + 0x6a) = (short)DAT_002e25d8;
  *(short *)(iVar1 + 0x6c) = (short)DAT_002e25dc;
  iVar1 = DAT_002e25e0;
  *(undefined1 *)(iVar7 + 0x46) = 0;
  *(undefined2 *)(iVar1 + 0x4a) = 1;
  *(undefined4 *)(iVar7 + 0x17c) = 0x40000000;
  *(undefined1 *)(iVar7 + 0x2d) = 1;
  iVar7 = 0xd;
  puVar5 = DAT_002e25e4;
  do {
    iVar7 = iVar7 + -1;
    puVar5[1] = 0xff;
    puVar5 = puVar5 + 2;
    *puVar5 = 0xff;
  } while (iVar7 != 0);
  iVar7 = 0xc;
  puVar5 = DAT_002e25e8;
  do {
    iVar7 = iVar7 + -1;
    puVar5[1] = 0xff;
    puVar5 = puVar5 + 2;
    *puVar5 = 0xff;
  } while (iVar7 != 0);
  iVar7 = 0xc;
  puVar5 = DAT_002e25ec;
  do {
    iVar7 = iVar7 + -1;
    puVar5[1] = 0xff;
    puVar5 = puVar5 + 2;
    *puVar5 = 0xff;
  } while (iVar7 != 0);
  FUN_002eb05c();
  return;
}
