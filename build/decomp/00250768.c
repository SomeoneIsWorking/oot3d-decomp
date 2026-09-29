// OoT3D decomp @ 00250768  name=FUN_00250768  size=796

void FUN_00250768(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;

  uVar3 = DAT_00250a9c;
  uVar2 = DAT_00250a98;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00250a84 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorFloatToUnsigned(DAT_00250a90 + (DAT_00250a88 / fVar4) * DAT_00250a8c,3);
  *(char *)(DAT_00250a94 + 0x16) = (char)uVar5;
  *(undefined4 *)(param_1 + 0x29cc) = uVar2;
  iVar1 = DAT_00250aa0;
  *(undefined2 *)(param_1 + 0x29d0) = 0;
  *(undefined2 *)(param_1 + 0x29d2) = 0;
  *(undefined2 *)(iVar1 + param_1) = 0x5a;
  iVar1 = DAT_00250aa8;
  *(int *)(param_1 + 0x170c) = DAT_00250aa8 + *(int *)(DAT_00250aa4 + 4) * 0x134;
  FUN_003510b0(param_1,iVar1 + -0x1a8);
  iVar1 = DAT_00250aac;
  *(undefined4 *)(param_1 + 0x1704) = 0x3b;
  *(undefined2 *)(iVar1 + param_1) = *(undefined2 *)(param_1 + 0x36);
  FUN_0036aef0(param_2,param_1);
  FUN_003413ec(param_1 + 0x254,*(undefined4 *)(param_1 + 0x24e0),param_2,param_3,
               *(undefined4 *)(param_1 + 0x178),
               *(undefined4 *)(DAT_00250ab0 + (uint)*(byte *)(param_1 + 0x1b3) * 4),9,
               param_1 + 0x2d8,param_1 + 0x7ec,0x19);
  *(undefined1 *)(param_1 + 0x2c9) = 1;
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  *(undefined4 *)(param_1 + 700) = uVar3;
  *(undefined4 *)(param_1 + 0x2c0) = uVar2;
  *(undefined1 *)(param_1 + 0x2ca) = 1;
  uVar3 = FUN_0034d628(param_1);
  FUN_00341268(param_1 + 0x1764,*(undefined4 *)(param_1 + 0x24e0),param_2,param_3,uVar3,9,
               param_1 + 0x17e8,param_1 + 0x1cfc,0x19);
  iVar1 = DAT_00250a94;
  *(undefined1 *)(param_1 + 0x17d9) = 1;
  *(undefined1 *)(param_1 + 0x17da) = 1;
  FUN_00350660(param_2,param_1 + 0x1704,2,0,0,iVar1);
  FUN_00372d4c(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x170c) + 4),param_1 + 0xbc,DAT_00250ab4);
  *(undefined2 *)(DAT_00250ab8 + param_1) = 0xffff;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x1310,param_1,DAT_00250abc);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x1368,param_1,DAT_00250ac0);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x13e8,param_1,DAT_00250ac0);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x1468,param_1,DAT_00250ac0);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x14e8,param_1,DAT_00250ac0);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x15e8,param_1,DAT_00250ac4,param_1 + 0x1608);
  *(undefined4 *)(param_1 + 0x29d8) = DAT_00250ac8;
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x1568,param_1,DAT_00250acc);
  *(undefined4 *)(param_1 + 0x29e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29e8) = 0;
  return;
}
