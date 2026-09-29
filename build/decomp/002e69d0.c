// OoT3D decomp @ 002e69d0  name=FUN_002e69d0  size=596

void FUN_002e69d0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 local_2c;
  undefined1 auStack_28 [4];

  puVar1 = DAT_002e6c24;
  if ((*DAT_002e6c24 & 1) == 0) {
    uVar9 = FUN_003679b4(DAT_002e6c24);
    param_2 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 != 0) {
      FUN_0036788c(DAT_002e6c28);
      param_2 = DAT_002e6c30;
    }
  }
  iVar2 = DAT_002e6c34;
  if (*(char *)(param_1 + 9) != '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_00306a34(param_1 + 0x16c,param_2);
      *(undefined1 *)(param_1 + 8) = 1;
      FUN_003069cc(param_1 + 0x16c);
      local_2c = *(undefined4 *)(param_1 + 0x164);
      uVar3 = FUN_0030dbd4(auStack_28,&local_2c,1,0,0xffffffff,0xffffffff);
      uVar5 = uVar3 >> 0x1b;
      if ((uVar3 & 0x80000000) != 0) {
        uVar5 = uVar5 - 0x20;
      }
      if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
        FUN_003351b4();
      }
      *(undefined1 *)(param_1 + 0x168) = 1;
      if (*(int *)(param_1 + 0x164) != 0) {
        software_interrupt(0x23);
        *(undefined4 *)(param_1 + 0x164) = 0;
      }
    }
    if (*(int *)(param_1 + 0x178) != 0) {
      FUN_0034fc6c();
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
    FUN_00465d48();
    FUN_00470070();
    FUN_00470048();
    FUN_00470030();
    *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
    FUN_00311284(param_1 + 0x17c);
    FUN_00462998();
    iVar7 = 0;
    do {
      if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002e6c24), iVar4 != 0)) {
        FUN_0036788c(DAT_002e6c28);
      }
      uVar8 = *(undefined4 *)(iVar2 + 0x47c);
      iVar4 = 0;
      do {
        iVar6 = param_1 + iVar4 * 4;
        if (*(int *)(iVar6 + 0x6fc) != 0) {
          FUN_00348904(uVar8);
          *(undefined4 *)(iVar6 + 0x6fc) = 0;
        }
        FUN_003445d4(param_1 + iVar4 * 0x1b8 + 0x33c);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      iVar4 = param_1 + iVar7 * 0xa8;
      FUN_003445a8(iVar4 + 0x1ec);
      FUN_003445a8(iVar4 + 0x240);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  uVar8 = DAT_002e6c38;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = uVar8;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  return;
}
