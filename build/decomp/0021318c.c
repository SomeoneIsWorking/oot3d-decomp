// OoT3D decomp @ 0021318c  name=FUN_0021318c  size=436

void FUN_0021318c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;

  FUN_003510b0(param_1,DAT_00213340);
  uVar1 = DAT_00213348;
  FUN_00372d4c(DAT_00213348,DAT_00213344,param_1 + 0xbc,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x7d8,2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,1,10,param_1 + 0x228,param_1 + 0x500,0xe);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x7e8,param_1,DAT_0021334c);
  FUN_00350d20(param_1 + 0xa0,DAT_00213350 + 0x40);
  uVar2 = DAT_00213354;
  *(ushort *)(param_1 + 0x7e2) = *(ushort *)(param_1 + 0x1c) >> 8;
  uVar5 = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(ushort *)(param_1 + 0x1c) = uVar5;
  uVar4 = DAT_00213364;
  uVar3 = DAT_00213360;
  if (uVar5 == 2) {
    iVar6 = FUN_0036e864(param_2);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(undefined2 *)(param_1 + 0x7e0) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    if (*(short *)(param_1 + 0x1c) != 1) {
      *(undefined4 *)(param_1 + 0x7dc) = DAT_00213358;
      return;
    }
  }
  else {
    if (uVar5 != 1) {
      iVar6 = *(int *)(DAT_0021335c + param_2);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | 0x20;
      *(undefined4 *)(param_1 + 100) = uVar1;
      *(undefined2 *)(param_1 + 0x7e0) = 0xc3;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar6 + 0xbe);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar6 + 0x2c);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar6 + 0x84);
      *(undefined4 *)(param_1 + 0x140) = uVar3;
      *(undefined4 *)(param_1 + 0x7dc) = uVar4;
      return;
    }
    *(undefined2 *)(param_1 + 0x7e0) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x7dc) = uVar2;
  return;
}
