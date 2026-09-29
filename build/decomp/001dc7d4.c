// OoT3D decomp @ 001dc7d4  name=FUN_001dc7d4  size=100

void FUN_001dc7d4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = DAT_001dc838;
  uVar2 = *(uint *)(param_1 + 0xbbc);
  if ((uVar2 < 6) && (*(int *)(DAT_001dc838 + uVar2 * 4) != 0)) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
                    /* WARNING: Could not recover jumptable at 0x001dc830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + uVar2 * 4))(param_1,param_2);
    return;
  }
  return;
}
