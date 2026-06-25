// OoT3D decomp @ 004bdfd4  name=FUN_004bdfd4  size=124

undefined4 FUN_004bdfd4(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined auStack_3c [40];
  
  FUN_002e03ac(auStack_3c);
  *(undefined *)(param_1 + 8) = 0;
  uVar1 = FUN_002df850(param_1,auStack_3c,param_2,param_3 >> 1,param_4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(char *)(param_1 + 0x25) != '\0') {
    return 0;
  }
  return uVar1;
}

