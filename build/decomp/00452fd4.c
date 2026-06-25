// OoT3D decomp @ 00452fd4  name=FUN_00452fd4  size=116

undefined FUN_00452fd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined uVar1;
  undefined uVar2;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_003102dc(*(int *)(param_1 + 0x9c),0);
  }
  if (*(int *)(param_1 + 0x84) == DAT_00453048) {
    uVar1 = FUN_002dd484(*(undefined4 *)(DAT_0045304c + 8),param_1 + 0x9c,param_2,param_3);
  }
  else {
    uVar1 = FUN_002dd484(param_1,param_1 + 0x9c,param_2,param_3);
  }
  uVar2 = FUN_002dd3f4(param_2);
  *(undefined *)(param_1 + 0x83) = uVar2;
  return uVar1;
}

