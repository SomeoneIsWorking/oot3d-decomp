// OoT3D decomp @ 002112d0  name=FUN_002112d0  size=492

void FUN_002112d0(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;

  FUN_0037572c(DAT_002114bc);
  *(ushort *)(param_1 + 0x8cc) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  uVar2 = DAT_002114c0;
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  uVar5 = DAT_002114c4;
  if (*(short *)(param_1 + 0x8cc) == 7) {
    *(undefined4 *)(param_1 + 0x8c4) = uVar2;
    FUN_00372d4c(uVar5,param_1 + 0xbc,0);
    FUN_00372f38(param_1,param_2,param_1 + 0x960,0,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,3,param_1 + 0x228,param_1 + 0x568,0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x8c4) = DAT_002114c8;
    FUN_00372d4c(uVar5,uVar2,param_1 + 0xbc,DAT_002114cc);
    FUN_00372f38(param_1,param_2,param_1 + 0x960,0,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x568,0x10);
  }
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x908,param_1,DAT_002114d0);
  uVar3 = DAT_002114d4;
  *(undefined4 *)(param_1 + 0x950) = uVar5;
  *(undefined4 *)(param_1 + 0x948) = uVar3;
  *(undefined4 *)(param_1 + 0x94c) = DAT_002114d8;
  iVar4 = DAT_002114e8;
  sVar1 = *(short *)(param_1 + 0x8cc);
  uVar5 = DAT_002114dc;
  if (sVar1 != 0 && sVar1 != 4) {
    if (sVar1 != 7) {
      if (sVar1 == 8) {
        *(undefined4 *)(param_1 + 0x8a8) = DAT_002114e0;
      }
      goto LAB_002114a0;
    }
    *(undefined4 *)(param_1 + 0x948) = DAT_002114e4;
    *(undefined4 *)(param_1 + 0x94c) = uVar2;
    if (((*(ushort *)(iVar4 + 0xf4) & 0x20) != 0) ||
       (uVar5 = DAT_002114ec, (*(ushort *)(iVar4 + 0xfc) & 1) == 0)) {
      FUN_00374428(param_1);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x8a8) = uVar5;
LAB_002114a0:
  *(ushort *)(param_1 + 0x8c8) = *(ushort *)(param_1 + 0x1c) >> 8;
  return;
}
