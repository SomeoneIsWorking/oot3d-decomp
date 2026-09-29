// OoT3D decomp @ 0027d32c  name=FUN_0027d32c  size=196

void FUN_0027d32c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_0035e3a4(param_1 + 0x1330,0,(int)*(short *)(param_1 + 0x1268));
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0x10) {
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 1;
  }
  else {
    if (sVar1 != 0x11) {
      if (sVar1 == 0x12) {
        FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
      }
      goto LAB_0027d3ac;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1cc);
    uVar3 = 2;
  }
  FUN_0037266c(uVar2,uVar3);
LAB_0027d3ac:
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_0027d3f0,param_1,0);
  FUN_0035e330(param_1 + 0x1330);
  return;
}
