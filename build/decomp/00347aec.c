// OoT3D decomp @ 00347aec  name=FUN_00347aec  size=452

void FUN_00347aec(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;

  uVar3 = *(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54);
  uVar4 = *(undefined4 *)(param_1 + 0x20ac);
  FUN_0033885c(uVar3,0x25);
  if ((*(byte *)(param_2 + 0x1e) < 0x13) &&
     (iVar5 = param_1 + (uint)*(byte *)(param_2 + 0x1e) * 0x80, *(int *)(DAT_00347cb0 + iVar5) != 0)
     ) {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  piVar6 = (int *)FUN_0040cd2c(iVar5 + 0x10,0);
  iVar5 = FUN_0032b69c();
  if ((param_3 < 0) || (iVar5 <= param_3)) {
    param_3 = -1;
  }
  *(undefined4 *)(param_2 + 0xf18) = 1;
  *(int *)(param_2 + 0xf1c) = param_3;
  puVar1 = DAT_00347cb4;
  if (-1 < param_3) {
    if ((*DAT_00347cb4 & 1) == 0) {
      FUN_003679b4(DAT_00347cb4);
    }
    uVar2 = DAT_00347cb8;
    iVar5 = *piVar6 + *(int *)(*piVar6 + 0x18 + param_3 * 4);
    *(int *)(param_2 + 0xf24) = iVar5;
    *(int *)(param_2 + 0xf28) = iVar5 + *(int *)(iVar5 + 0x48);
    FUN_0033cb90(param_2 + 0xf24,*(undefined4 *)(param_2 + 0xf18),uVar2);
    FUN_0033cb1c(uVar3,DAT_00347cb8,uVar4,0);
    uVar4 = *(undefined4 *)(param_1 + 0x20ac);
    uVar3 = *(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54);
    if ((puVar1[1] & 1) == 0) {
      FUN_003679b4(DAT_00347cbc);
    }
    if (-1 < *(int *)(param_2 + 0xf1c)) {
      if (*(int *)(param_2 + 0xf18) < *(int *)(*(int *)(param_2 + 0xf24) + 0xc)) {
        FUN_0033cb90(param_2 + 0xf24,*(int *)(param_2 + 0xf18),DAT_00347cc0);
        uVar2 = DAT_00347cc0;
        *(int *)(param_2 + 0xf18) = *(int *)(param_2 + 0xf18) + 1;
        FUN_0033cb1c(uVar3,uVar2,uVar4,0);
        return;
      }
      FUN_003436d4(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54));
      *(undefined4 *)(param_2 + 0xf1c) = 0xffffffff;
    }
  }
  return;
}
