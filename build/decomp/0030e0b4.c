// OoT3D decomp @ 0030e0b4  name=FUN_0030e0b4  size=16

void FUN_0030e0b4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];

  iVar2 = FUN_0030e1e4();
  if (*(char *)(iVar2 + 0xe) != '\0') {
    *(undefined1 *)(iVar2 + 0xf) = 0;
    uStack_1c = *(undefined4 *)(iVar2 + 0x18);
    uVar3 = FUN_0030dbd4(auStack_18,&uStack_1c,1,0,0xffffffff,0xffffffff);
    uVar4 = uVar3 >> 0x1b;
    if ((uVar3 & 0x80000000) != 0) {
      uVar4 = uVar4 - 0x20;
    }
    if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
      FUN_003351b4();
    }
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    if (*(int *)(iVar2 + 0x18) != 0) {
      software_interrupt(0x23);
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    *(undefined1 *)(iVar2 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    FUN_00310148(iVar2 + 0x44);
  }
  if (*(char *)(iVar2 + 0xc) != '\0') {
    *(undefined1 *)(iVar2 + 0xd) = 0;
    uStack_1c = *(undefined4 *)(iVar2 + 0x10);
    uVar3 = FUN_0030dbd4(auStack_18,&uStack_1c,1,0,0xffffffff,0xffffffff);
    uVar4 = uVar3 >> 0x1b;
    if ((uVar3 & 0x80000000) != 0) {
      uVar4 = uVar4 - 0x20;
    }
    if ((uVar4 != 0xfffffff9 && uVar4 != 0) && uVar4 != 1) {
      FUN_003351b4();
    }
    *(undefined1 *)(iVar2 + 0x14) = 1;
    if (*(int *)(iVar2 + 0x10) != 0) {
      software_interrupt(0x23);
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    iVar1 = DAT_0030e1e0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
    *(undefined1 *)(iVar1 + 0x348) = 1;
    *(undefined1 *)(iVar2 + 0xc) = 0;
  }
  return;
}
