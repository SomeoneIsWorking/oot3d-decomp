// OoT3D decomp @ 0040218c  name=FUN_0040218c  size=212

void FUN_0040218c(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_c [4];

  if (param_1 != 0) {
    FUN_0030dbb4(0);
  }
  FUN_0030db4c();
  FUN_0030dab0();
  iVar1 = DAT_00402260;
  iVar3 = FUN_00402154(*(undefined4 *)(DAT_00402260 + 0xa0));
  if (iVar3 < 0) {
    FUN_0030e3ac(iVar3,&DAT_00402264,0,&DAT_00402264);
    FUN_002fb928(0);
  }
  FUN_0030da40();
  software_interrupt(0x14);
  uVar4 = *DAT_00402268 >> 0x1b;
  if ((*DAT_00402268 & 0x80000000) != 0) {
    uVar4 = uVar4 - 0x20;
  }
  if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
    FUN_003351b4();
  }
  if ((*(uint *)(iVar1 + 0xa0) & 7) == 0 && (*(uint *)(iVar1 + 0xa0) & 0x20) == 0) {
    uVar2 = FUN_0030d69c(auStack_c,DAT_00402270,0x1000,DAT_0040226c,0);
    *(undefined1 *)(iVar1 + 0x1e) = uVar2;
    *(undefined1 *)(iVar1 + 0x10) = 1;
  }
  return;
}
