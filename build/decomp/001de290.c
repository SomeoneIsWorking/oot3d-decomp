// OoT3D decomp @ 001de290  name=FUN_001de290  size=140

void FUN_001de290(int param_1)

{
  undefined4 uVar1;

  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  if ((*(byte *)(param_1 + 0xdf3) & 2) == 0) {
    FUN_0037266c(uVar1,2);
    FUN_0037266c(uVar1,1);
    FUN_0037266c(uVar1,4);
  }
  else {
    FUN_0036932c();
    FUN_0036932c(uVar1,1);
    FUN_0036932c(uVar1,4);
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_001de31c,param_1,0);
  return;
}
