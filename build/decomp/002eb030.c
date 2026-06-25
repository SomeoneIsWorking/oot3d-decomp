// OoT3D decomp @ 002eb030  name=FUN_002eb030  size=40

undefined4 FUN_002eb030(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0 || param_2 == (int *)0x0) {
    return DAT_002eb058;
  }
                    /* WARNING: Could not recover jumptable at 0x002eb054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_1);
  return uVar1;
}

