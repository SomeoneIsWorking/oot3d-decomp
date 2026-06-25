// OoT3D decomp @ 0021e968  name=FUN_0021e968  size=68

void FUN_0021e968(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  code *in_lr;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = in_lr;
  if (param_2 == 10) {
    uStack_10 = uRam0021e9ac;
    uStack_c = uRam0021e9b0;
    uStack_8 = uRam0021e9b0;
    FUN_003735ac(param_4 + 0x3c,param_3,&uStack_10);
  }
                    /* WARNING: Could not recover jumptable at 0x0021e9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

