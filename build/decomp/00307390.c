// OoT3D decomp @ 00307390  name=FUN_00307390  size=148

void FUN_00307390(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;

  iVar1 = DAT_00307424;
  if (*(int *)(DAT_00307424 + 0x24) != 0) {
    *(undefined4 *)(DAT_00307424 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    FUN_002fbbb0();
    uVar2 = FUN_00434d50();
    FUN_0042dab0(uVar2);
    FUN_003072f8();
    FUN_003071e0();
    iVar4 = 0xd;
    puVar3 = DAT_00307428;
    do {
      iVar4 = iVar4 + -1;
      puVar3[1] = 0xff;
      puVar3 = puVar3 + 2;
      *puVar3 = 0xff;
    } while (iVar4 != 0);
    iVar4 = 0xc;
    puVar3 = DAT_0030742c;
    do {
      iVar4 = iVar4 + -1;
      puVar3[1] = 0xff;
      puVar3 = puVar3 + 2;
      *puVar3 = 0xff;
    } while (iVar4 != 0);
    iVar4 = 0xc;
    puVar3 = DAT_00307430;
    do {
      iVar4 = iVar4 + -1;
      puVar3[1] = 0xff;
      puVar3 = puVar3 + 2;
      *puVar3 = 0xff;
    } while (iVar4 != 0);
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}
