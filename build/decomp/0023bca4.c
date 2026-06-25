// OoT3D decomp @ 0023bca4  name=FUN_0023bca4  size=148

undefined4 FUN_0023bca4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  if (param_2 == 10) {
    FUN_0034e01c(param_3,param_4 + 0x458);
  }
  else if (param_2 == 9) {
    FUN_0034e01c(param_3,param_4 + 0x45e);
  }
  if (*(short *)(param_1 + 0x104) == 0x56 && param_2 == 0x12) {
    FUN_0037266c();
    FUN_0036932c(*(undefined4 *)(param_4 + 0x1cc),2);
  }
  else {
    FUN_0036932c(*(undefined4 *)(param_4 + 0x1cc),5);
    FUN_0037266c(*(undefined4 *)(param_4 + 0x1cc),2);
  }
  return 0;
}

