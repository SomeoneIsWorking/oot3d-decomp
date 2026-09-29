// OoT3D decomp @ 0027d430  name=FUN_0027d430  size=132

void FUN_0027d430(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_0035e3a4(param_1 + 0x1330,0,(int)*(short *)(param_1 + 0x1268));
  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  if (*(int *)(DAT_0027d4b4 + param_1) == 0) {
    FUN_0036932c(uVar1,2);
    uVar1 = *(undefined4 *)(param_1 + 0x1cc);
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  FUN_0036932c(uVar1,uVar2);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1,0);
  FUN_0035e330(param_1 + 0x1330);
  return;
}
