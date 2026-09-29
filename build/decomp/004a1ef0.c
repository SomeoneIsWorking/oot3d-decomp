// OoT3D decomp @ 004a1ef0  name=FUN_004a1ef0  size=124

void FUN_004a1ef0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x60;
  FUN_0036b4ec(param_1 + 0x254);
  uVar1 = *(uint *)(param_1 + 0x1710);
  bVar3 = (uVar1 & 0x800) == 0;
  if (!bVar3) {
    uVar1 = *(uint *)(param_1 + 0x1224);
  }
  if (((bVar3 || uVar1 == 0) || (*(char *)(DAT_004a1f6c + param_1) != '\0')) &&
     (iVar2 = FUN_0034cc78(param_1,param_2), iVar2 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a1f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_004a1f70 + param_1))(param_2,param_1);
  return;
}
