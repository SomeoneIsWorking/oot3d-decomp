// OoT3D decomp @ 002776c0  name=FUN_002776c0  size=720

void FUN_002776c0(int param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;

  FUN_003510b0(param_1,DAT_002779a4);
  FUN_00372f38(param_1,param_2,param_1 + 0x1d4,0,param_1 + 0x1d8,2,param_1 + 0x1dc,1,0);
  FUN_00372d4c(DAT_002779a8,DAT_002779a8,param_1 + 0xbc,0);
  *(undefined2 *)(param_1 + 0x1ca) = 0;
  if (*(short *)(param_2 + 0x104) == 100) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff00 | 4;
  }
  uVar3 = DAT_002779b4;
  uVar5 = DAT_002779b0;
  iVar6 = param_2 + 0xae8;
  switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
  default:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20030;
    FUN_003532e8(param_1,0);
    uVar5 = FUN_00353fd4(param_1,param_2,0);
    uVar5 = FUN_00353ec8(param_2,iVar6,param_1,uVar5);
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
    *(undefined1 *)(param_1 + 0x19b) = 2;
    *(undefined4 *)(param_1 + 0x1cc) = uVar3;
    return;
  case 1:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20030;
    FUN_003532e8(param_1,0);
    uVar5 = FUN_00353fd4(param_1,param_2,0);
    uVar5 = FUN_00353ec8(param_2,iVar6,param_1,uVar5);
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
    *(undefined1 *)(param_1 + 0x19b) = 2;
    iVar6 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x140) = DAT_002779ac;
    uVar3 = DAT_002779b8;
    *(undefined4 *)(param_1 + 0x1cc) = uVar5;
    FUN_0032b318(uVar3,param_1);
    *(undefined2 *)(param_1 + 0x1c8) = 0xb4;
    uVar5 = DAT_002779bc;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    goto LAB_002777e0;
  case 3:
    *(undefined4 *)(param_1 + 0x140) = DAT_002779ac;
    uVar3 = DAT_002779c0;
    *(undefined4 *)(param_1 + 0x1cc) = uVar5;
    FUN_0032b318(uVar3,param_1);
    *(undefined2 *)(param_1 + 0x1c8) = 0xb4;
    uVar5 = DAT_002779c4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
LAB_002777e0:
    *(undefined4 *)(param_1 + 0x1c0) = uVar5;
    return;
  case 4:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20030;
    FUN_003532e8(param_1,0);
    uVar5 = FUN_00353fd4(param_1,param_2,0);
    uVar5 = FUN_00353ec8(param_2,iVar6,param_1,uVar5);
    *(undefined4 *)(param_1 + 0x1a4) = uVar5;
    *(undefined1 *)(param_1 + 0x19b) = 2;
    iVar6 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
    uVar4 = DAT_002779d0;
    uVar5 = DAT_002779cc;
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x1cc) = DAT_002779c8;
      uVar1 = (undefined2)uVar5;
      *(undefined2 *)(param_1 + 0x34) = uVar1;
      *(undefined2 *)(param_1 + 0xbc) = uVar1;
      uVar2 = ~(ushort)((uint)uVar5 >> 0x12);
      *(ushort *)(param_1 + 0x36) = uVar2;
      *(ushort *)(param_1 + 0xbe) = uVar2;
      *(undefined2 *)(param_1 + 0x38) = 0;
      *(undefined2 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0x28) = uVar4;
      *(undefined4 *)(param_1 + 0x2c) = DAT_002779d4;
      *(undefined4 *)(param_1 + 0x30) = DAT_002779d8;
    }
  }
  *(undefined4 *)(param_1 + 0x1cc) = uVar3;
  return;
}
