// OoT3D decomp @ 00163e94  name=FUN_00163e94  size=592

void FUN_00163e94(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  puVar1 = (undefined4 *)(param_1 + 0x12e4);
  iVar7 = 0x1e;
  do {
    puVar1[1] = 1;
    iVar7 = iVar7 + -1;
    puVar1 = puVar1 + 2;
    *puVar1 = 1;
  } while (iVar7 != 0);
  *(undefined4 *)(param_1 + 0x13d8) = 0;
  uVar2 = FUN_00352ee0(param_1,param_2,0x3d,param_1 + 0x11f4);
  iVar7 = 0;
  do {
    iVar3 = param_1 + iVar7 * 4;
    iVar5 = param_1 + iVar7 * 0x40;
    iVar7 = iVar7 + 2;
    *(undefined4 *)(iVar5 + 0x32c) = *(undefined4 *)(iVar3 + 0x11f4);
    *(undefined4 *)(iVar5 + 0x36c) = *(undefined4 *)(iVar3 + 0x11f8);
  } while (iVar7 < 0x3c);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x11f0) = *(undefined4 *)(param_1 + 0x12e4);
  do {
    iVar3 = *(int *)(*(int *)(param_1 + iVar7 * 0x40 + 0x32c) + 0xc);
    uVar4 = FUN_00372f0c(uVar2,1);
    FUN_00372d94(iVar3,uVar4);
    iVar7 = iVar7 + 1;
    *(undefined1 *)(iVar3 + 0x10) = 1;
  } while (iVar7 < 0x3c);
  iVar7 = *(int *)(*(int *)(param_1 + 0x11f0) + 0xc);
  uVar2 = FUN_00372f0c(uVar2,0);
  FUN_00372d94(iVar7,uVar2);
  uVar2 = DAT_001640e4;
  *(undefined1 *)(iVar7 + 0x10) = 1;
  uVar4 = DAT_001640e8;
  *(undefined4 *)(iVar7 + 0xc) = uVar2;
  FUN_003510b0(param_1,uVar4);
  *(undefined4 *)(param_1 + 0xa0) = DAT_001640ec;
  *(undefined1 *)(param_1 + 0xb7) = 6;
  FUN_00353dd0(param_2,param_1 + 0x1a8);
  FUN_0034fb3c(param_2,param_1 + 0x1a8,param_1,DAT_001640f0);
  FUN_00353dd0(param_2,param_1 + 0x200);
  FUN_0034fb3c(param_2,param_1 + 0x200,param_1,DAT_001640f4);
  FUN_00353dd0(param_2,param_1 + 600);
  FUN_0034fb3c(param_2,param_1 + 600,param_1,DAT_001640f8);
  FUN_0037572c(DAT_001640fc,param_1);
  uVar2 = DAT_00164100;
  uVar4 = 0xff;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar6 = *(uint *)(param_1 + 4) & 0xfffffffe;
  *(uint *)(param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x2be) = 0;
  *(undefined1 *)(param_1 + 0x2c5) = 0;
  *(undefined1 *)(param_1 + 0x2c2) = 1;
  *(undefined1 *)(param_1 + 0x2c3) = 0;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  *(undefined1 *)(param_1 + 0x2dd) = 1;
  *(undefined1 *)(param_1 + 0x2de) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2cc) = DAT_00164104;
  if (*(short *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined1 *)(param_1 + 0x2dc) = 0;
    *(undefined2 *)(param_1 + 0x2da) = 0;
    *(undefined2 *)(param_1 + 0x2d8) = 0;
    *(undefined2 *)(param_1 + 0x2c0) = 0x96;
    uVar2 = DAT_00164108;
  }
  else {
    *(undefined4 *)(param_1 + 0x2d4) = 0xff;
    uVar4 = 0x3c;
    *(undefined1 *)(param_1 + 0x2dc) = 1;
    *(undefined2 *)(param_1 + 0x2c0) = 0x3c;
    *(undefined1 *)(param_1 + 0x2c4) = 1;
    *(uint *)(param_1 + 4) = uVar6 | 1;
    uVar2 = DAT_00164110;
    *(undefined4 *)(param_1 + 0x70) = DAT_0016410c;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_0037327c(param_1,param_2,uVar4,param_1 + 0x12e8);
  return;
}
