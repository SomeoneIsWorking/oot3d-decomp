// OoT3D decomp @ 00416f60  name=FUN_00416f60  size=176

void FUN_00416f60(undefined4 *param_1,code *UNRECOVERED_JUMPTABLE,undefined4 param_3)

{
  int iVar1;

  FUN_00343280(param_1 + 5,0xc0);
  *param_1 = param_3;
  param_1[0x3e] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0x101) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0041a5bc(param_1 + 0x39);
  iVar1 = FUN_00301628(param_1 + 0x39,0x100000);
  if (iVar1 == 0) {
    param_1[0x36] = 0;
    param_1[0x35] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  else {
    param_1[0x36] = iVar1;
    param_1[0x35] = 0x100000;
    param_1[0x37] = iVar1;
    param_1[0x38] = iVar1 + 0x100000;
  }
  *(undefined2 *)(*DAT_00417010 + 0x110) = 2;
                    /* WARNING: Could not recover jumptable at 0x0041700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}
