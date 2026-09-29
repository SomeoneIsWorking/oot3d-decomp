// OoT3D decomp @ 0037b49c  name=FUN_0037b49c  size=500

void FUN_0037b49c(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if (uVar1 != 0x14) {
    if (uVar1 < 0x15) {
      if (uVar1 == 0x10) goto LAB_0037b514;
      if (uVar1 < 0x11) {
        if (uVar1 == 1 || uVar1 == 4) goto LAB_0037b514;
      }
      else if (uVar1 == 0x11 || uVar1 == 0x12) goto LAB_0037b514;
    }
    else if ((uVar1 == 0x20 || uVar1 == 0x23) || uVar1 == 0x24) goto LAB_0037b514;
    *(undefined2 *)(param_1 + 0x1c) = 0x10;
  }
LAB_0037b514:
  FUN_00372f38(param_1,param_2,param_1 + 500,1,param_1 + 0x1f8,0,0);
  if ((*(ushort *)(param_1 + 0x1c) & 0x200) == 0) {
    uVar2 = FUN_00353fd4(param_1,param_2,1);
  }
  else if ((*(ushort *)(param_1 + 0x1c) & 0x200) == 0x200) {
    uVar2 = FUN_00353fd4(param_1,param_2,0);
  }
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xf;
  if (uVar1 == 2 || uVar1 == 3) {
    FUN_003532e8(param_1,3);
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  else {
    FUN_003532e8(param_1,0);
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  if (*(int *)(DAT_0037b7c4 + 4) == 0) {
    FUN_003510b0(param_1,DAT_0037b7c8);
    uVar1 = *(ushort *)(param_1 + 0x1c) & 0xf0;
    if ((*(ushort *)(param_1 + 0x1c) & 0xf0) == 0) {
      FUN_0037572c(DAT_0037b7d0,param_1);
    }
    else if (uVar1 == 0x10) {
      FUN_0037572c(DAT_0037b7d4,param_1);
    }
    else if (uVar1 == 0x20) {
      FUN_0037572c(DAT_0037b7cc,param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
