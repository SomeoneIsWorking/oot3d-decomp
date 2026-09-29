// OoT3D decomp @ 004043c4  name=FUN_004043c4  size=44

undefined4 FUN_004043c4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;

  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004043ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,param_1[3],param_2);
  return uVar1;
}
