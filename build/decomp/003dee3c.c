// OoT3D decomp @ 003dee3c  name=FUN_003dee3c  size=236

void FUN_003dee3c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_0033fdb4();
  FUN_0033f928(param_1,param_2);
  FUN_0036e168(*(undefined4 *)(param_1 + 0x1d4),DAT_003def30,DAT_003def2c,DAT_003def28,
               param_1 + 0x1d8);
  iVar4 = *(int *)(param_1 + 0x1c0) + -1;
  *(int *)(param_1 + 0x1c0) = iVar4;
  if (iVar4 < 0) {
    FUN_0036beac(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1a);
    uVar3 = DAT_003def3c;
    uVar2 = DAT_003def38;
    uVar1 = *(ushort *)(param_1 + 0x1c) >> 0xc;
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1d4) = DAT_003def34;
      uVar3 = uVar2;
    }
    else {
      if (uVar1 != 1) goto LAB_003deed0;
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1f0);
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
  else {
    FUN_0036d940(param_1);
  }
LAB_003deed0:
  if ((*(ushort *)(param_1 + 0x1c) >> 0xc == 1) &&
     (iVar4 = FUN_0036bcb4(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f), uVar2 = DAT_003def40,
     iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x1d8) = DAT_003def40;
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
    FUN_0036beac(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1a);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003def44;
  }
  return;
}
