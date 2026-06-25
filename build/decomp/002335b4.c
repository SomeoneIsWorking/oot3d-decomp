// OoT3D decomp @ 002335b4  name=FUN_002335b4  size=96

undefined4 FUN_002335b4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_2 == 9) {
    FUN_0035fb94(&local_10,param_4 + 0x29a);
    FUN_0034e01c(param_3,&local_10);
  }
  else if (param_2 == 10) {
    local_10 = *(undefined4 *)(param_4 + 0x294);
    uStack_c = *(undefined4 *)(param_4 + 0x298);
    FUN_0034e01c(param_3,&local_10);
  }
  return 0;
}

