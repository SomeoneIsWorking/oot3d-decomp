// OoT3D decomp @ 001e0734  name=FUN_001e0734  size=852

void FUN_001e0734(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;

  uVar5 = DAT_001e0a28;
  local_20 = 0;
  *(ushort *)(param_1 + 0x21e) = *(ushort *)(param_1 + 0x1c) >> 8;
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(short *)(param_1 + 0x1c) = (short)uVar3;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if (0xb < uVar3) {
    uVar3 = 0xb;
  }
  local_2c = DAT_001e0a2c;
  uStack_28 = DAT_001e0a30;
  uStack_24 = DAT_001e0a34;
  FUN_00372f38(param_1,param_2,param_1 + 0x1ac,*(undefined1 *)((int)&local_2c + uVar3),0);
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    FUN_0037572c(DAT_001e0a38,param_1);
    break;
  case 1:
    FUN_0037572c(DAT_001e0a3c,param_1);
    break;
  case 2:
  case 5:
  case 6:
    FUN_0037572c(DAT_001e0a40,param_1);
    break;
  case 3:
    FUN_0037572c(DAT_001e0a44,param_1);
    break;
  default:
    FUN_0037572c(DAT_001e0a48,param_1);
  }
  if (8 < *(short *)(param_1 + 0x1c)) {
    uVar5 = DAT_001e0a4c;
  }
  FUN_00372d4c(DAT_001e0a54,uVar5,param_1 + 0xbc,DAT_001e0a50);
  *(undefined4 *)(param_1 + 0x104) = DAT_001e0a58;
  *(undefined4 *)(param_1 + 0x100) = DAT_001e0a5c;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  uVar2 = DAT_001e0a8c;
  uVar1 = DAT_001e0a7c;
  uVar5 = DAT_001e0a74;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  default:
    *(undefined4 *)(param_1 + 0x70) = DAT_001e0a70;
    *(undefined4 *)(param_1 + 0x1a8) = uVar5;
    break;
  case 1:
  case 2:
    *(undefined4 *)(param_1 + 0x20c) = 1;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,1);
    uVar5 = DAT_001e0a64;
    *(undefined4 *)(param_1 + 0x104) = DAT_001e0a58;
    *(undefined4 *)(param_1 + 0x100) = DAT_001e0a60;
    *(undefined4 *)(param_1 + 0x1a8) = uVar5;
    break;
  case 3:
  case 4:
    *(undefined4 *)(param_1 + 0x20c) = 3;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,1);
    *(undefined2 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0xf;
    *(undefined2 *)(param_1 + 0x36) = 0;
    uVar5 = DAT_001e0a68;
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x1a8) = uVar5;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x208) = DAT_001e0a6c;
    uVar1 = DAT_001e0a70;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 0x1a8) = uVar5;
    *(undefined4 *)(param_1 + 0x20c) = 5;
    goto LAB_001e0abc;
  case 7:
  case 8:
    *(undefined4 *)(param_1 + 0x1a8) = DAT_001e0a74;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    break;
  case 9:
  case 10:
    *(ushort *)(DAT_001e0a78 + param_1) = *(ushort *)(param_1 + 0x21e) & 0xff | 0x300;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined4 *)(param_1 + 0x208) = DAT_001e0a80;
    *(undefined4 *)(param_1 + 0x1a8) = DAT_001e0a74;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 9;
    FUN_00353dd0(param_2,param_1 + 0x1b0);
    FUN_00353d24(param_2,param_1 + 0x1b0,param_1,DAT_001e0a84);
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    break;
  case 0xb:
    *(undefined4 *)(param_1 + 0x70) = DAT_001e0a88;
    *(undefined4 *)(param_1 + 0x1a8) = uVar2;
    return;
  }
  if (*(short *)(param_1 + 0x1c) < 5) {
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
  }
  if (*(int *)(param_1 + 0x20c) == -1) {
    return;
  }
LAB_001e0abc:
  local_34 = DAT_001e0b3c;
  uStack_30 = DAT_001e0b40;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_001e0b44 + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  local_20 = FUN_003532c0(iVar4 + 0x10,*(undefined1 *)((int)&local_34 + *(int *)(param_1 + 0x20c)));
  uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_20);
  *(undefined4 *)(param_1 + 0x20c) = uVar5;
  return;
}
