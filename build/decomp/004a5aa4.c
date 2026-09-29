// OoT3D decomp @ 004a5aa4  name=FUN_004a5aa4  size=44

void FUN_004a5aa4(undefined4 param_1,uint param_2,code *param_3)

{
  int iStack_8;

  if ((param_2 & 0xfffffffe) != 0) {
    param_2 = param_2 + 1;
  }
  (&iStack_8)[-param_2] = param_2 * 4;
  (*param_3)(param_1,&stack0xfffffffc + param_2 * -4);
                    /* WARNING: Could not recover jumptable at 0x004a5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&stack0xfffffffc + (&iStack_8)[-param_2] + param_2 * -4))();
  return;
}
