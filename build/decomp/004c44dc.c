// OoT3D decomp @ 004c44dc  name=FUN_004c44dc  size=80

void FUN_004c44dc(undefined4 param_1,int param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0036055c(param_1,param_2,DAT_004c452c,1);
  uVar2 = DAT_004c4538;
  uVar1 = DAT_004c4534;
  *(undefined2 *)(DAT_004c4530 + param_2) = param_3;
  *(undefined2 *)(param_2 + 0xbe) = param_3;
  FUN_00360190(DAT_004c453c,uVar2,uVar2,uVar1,param_2 + 0x254,param_1,0x3b,0);
  return;
}

