// OoT3D decomp @ 00426e48  name=FUN_00426e48  size=444

void FUN_00426e48(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;

  FUN_002f4f64();
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar3 = 0;
    uVar1 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
    if (((~uVar1 & 0x10000000) == 0) || ((~uVar1 & 0x10) == 0)) {
      if (*(int *)(param_1 + 0x10) != 0) goto LAB_00426fa8;
    }
    else if (((~uVar1 & 0x20000000) == 0) || ((~uVar1 & 0x20) == 0)) {
      if (*(int *)(param_1 + 0x10) != 1) {
        FUN_0037547c(DAT_00427004,0,4,DAT_0042700c,DAT_0042700c,DAT_00427008);
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
    }
    else if (((~uVar1 & 0x80000000) == 0) || ((~uVar1 & 0x80) == 0)) {
      bVar4 = *(char *)(DAT_00427010 + param_1) != '\0';
      iVar2 = 0;
      if (bVar4) {
        iVar2 = *(int *)(param_1 + 0x10);
        uVar3 = 2;
      }
      if (bVar4 && iVar2 != 2) {
LAB_00426fa8:
        FUN_0037547c(DAT_00427004,0,4,DAT_0042700c,DAT_0042700c,DAT_00427008);
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        return;
      }
    }
    else if (((~uVar1 & 0x40000000) == 0) || ((~uVar1 & 0x40) == 0)) {
      if (*(int *)(param_1 + 0x10) == 2) goto LAB_00426fa8;
    }
    else if ((~uVar1 & 1) == 0) {
      FUN_002f4ebc(param_1 + *(int *)(param_1 + 0x10) * 0x1c + 0x1120);
      return;
    }
  }
  return;
}
