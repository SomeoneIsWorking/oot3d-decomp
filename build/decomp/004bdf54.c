// OoT3D decomp @ 004bdf54  name=FUN_004bdf54  size=128

undefined4 FUN_004bdf54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined auStack_3c [40];
  
  FUN_002e0f40(auStack_3c);
  *(undefined *)(param_1 + 8) = 1;
  uVar1 = FUN_002e03e8(param_1,auStack_3c,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(char *)(param_1 + 0x25) != '\0') {
    return 0;
  }
  return uVar1;
}

