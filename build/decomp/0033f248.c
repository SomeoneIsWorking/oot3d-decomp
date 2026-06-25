// OoT3D decomp @ 0033f248  name=FUN_0033f248  size=128

void FUN_0033f248(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = DAT_0033f2cc;
  iVar2 = DAT_0033f2c8;
  if (param_1 != 0) {
    iVar5 = DAT_0033f2d0;
    if (param_1 < 0xf) {
      iVar5 = DAT_0033f2d4 + param_1 * 0xa0 + -0xa0;
    }
    *(int *)(DAT_0033f2c8 + 0xa8) = iVar5;
    *(undefined *)(iVar2 + 0x1d) = param_2;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined *)(iVar2 + 0x1e) = 0xff;
    *(undefined2 *)(iVar2 + 0x42) = 0;
    *(undefined2 *)(iVar2 + 0x44) = 0;
    cVar1 = **(char **)(iVar2 + 0xa8);
    while (cVar1 == -1) {
      uVar4 = *(short *)(iVar2 + 0x42) + 1;
      *(ushort *)(iVar2 + 0x42) = uVar4;
      cVar1 = (*(char **)(iVar2 + 0xa8))[(uint)uVar4 * 8];
    }
    return;
  }
  *(undefined *)(DAT_0033f2c8 + 0x1d) = 0;
  if (uVar3 < DAT_004896b4) {
    uVar7 = 0;
  }
  else if (uVar3 < DAT_004896b8) {
    uVar7 = 1;
  }
  else if (uVar3 < DAT_004896bc) {
    uVar7 = 2;
  }
  else if (uVar3 < DAT_004896c0) {
    uVar7 = 3;
  }
  else if (uVar3 < DAT_004896c4) {
    uVar7 = 4;
  }
  else if (uVar3 < DAT_004896c8) {
    uVar7 = 5;
  }
  else {
    uVar7 = 6;
  }
  uVar6 = FUN_0030f0ec();
  uVar7 = FUN_0030f0c0(uVar6,uVar7);
  *(uint *)(DAT_004896cc + 0x28) = uVar3;
  FUN_0030efb0(uVar7,DAT_004896d0,0);
  return;
}

