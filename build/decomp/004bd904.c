// OoT3D decomp @ 004bd904  name=FUN_004bd904  size=136

void FUN_004bd904(int param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  
  FUN_0036055c(param_3,param_1,DAT_004bd98c,1);
  uVar3 = DAT_004bd998;
  uVar2 = DAT_004bd994;
  uVar1 = DAT_004bd990;
  uVar4 = FUN_003603c0(param_1 + 0x254,DAT_004bd998);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(uVar1,uVar2,uVar4,DAT_004bd99c,param_1 + 0x254,param_3,uVar3,2);
  *(undefined4 *)(param_1 + 0x221c) = DAT_004bd9a0;
  *(undefined2 *)(DAT_004bd9a4 + param_1) = param_2;
  return;
}

