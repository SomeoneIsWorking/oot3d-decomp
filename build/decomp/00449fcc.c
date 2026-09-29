// OoT3D decomp @ 00449fcc  name=FUN_00449fcc  size=28

undefined4 FUN_00449fcc(int *param_1)

{
  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    return DAT_00449fe8;
  }
                    /* WARNING: Could not recover jumptable at 0x00449fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xc))();
  return uVar1;
}
