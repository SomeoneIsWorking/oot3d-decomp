// OoT3D decomp @ 0033ddd4  name=FUN_0033ddd4  size=60

void FUN_0033ddd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *DAT_0033de10;
  uStack_10 = param_4;
  FUN_002da58c(&uStack_10,iVar1 + 0x58);
  FUN_0031e210(iVar1,param_1);
  FUN_002da528(&uStack_10);
  return;
}

