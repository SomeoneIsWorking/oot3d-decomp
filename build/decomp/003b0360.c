// OoT3D decomp @ 003b0360  name=FUN_003b0360  size=308

void FUN_003b0360(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  uVar2 = DAT_003b049c;
  iVar1 = DAT_003b0498;
  iVar5 = DAT_003b0494;
  if ((*(ushort *)(DAT_003b0494 + 0xee) & 0x100) == 0) {
    iVar5 = FUN_0036bc98(param_1);
    uVar3 = DAT_003b04a4;
    if (iVar5 != 0) {
      *(undefined4 *)(param_1 + 0xbac) = DAT_003b04a0;
      *(undefined4 *)(param_1 + 0xbb0) = uVar3;
      goto LAB_003b0470;
    }
    *(short *)(param_1 + 0x116) = (short)DAT_003b04ac;
    if (0x8600 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U)
    goto LAB_003b0470;
    iVar5 = *(int *)(param_1 + 0x98);
  }
  else {
    iVar4 = FUN_0036bc98(param_1);
    uVar3 = DAT_003b04a4;
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xbac) = DAT_003b04a0;
      *(undefined4 *)(param_1 + 0xbb0) = uVar3;
      *(ushort *)(iVar5 + 0xf8) = *(ushort *)(iVar5 + 0xf8) | 0x800;
      goto LAB_003b0470;
    }
    *(short *)(param_1 + 0x116) = (short)DAT_003b04a8;
    if (0x8600 < (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U)
    goto LAB_003b0470;
    iVar5 = *(int *)(param_1 + 0x98);
  }
  if (iVar5 < iVar1) {
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
    FUN_0036bb28(uVar2,param_1,param_2);
  }
LAB_003b0470:
  if (DAT_003b04b0 < (int)*(float *)(param_1 + 0xcc)) {
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - DAT_003b04b4;
  }
  return;
}
