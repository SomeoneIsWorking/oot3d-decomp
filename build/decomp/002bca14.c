// OoT3D decomp @ 002bca14  name=FUN_002bca14  size=124

void FUN_002bca14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  
  FUN_0036055c(param_2,param_1,DAT_002bca90,1);
  uVar2 = FUN_0034d628(param_1);
  uVar1 = DAT_002bca94;
  uVar3 = FUN_003603c0(param_1 + 0x254,uVar2);
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(DAT_002bca9c,DAT_002bca98,uVar3,uVar1,param_1 + 0x254,param_2,uVar2,2);
  *(undefined2 *)(DAT_002bcaa0 + param_1) = *(undefined2 *)(param_1 + 0xbe);
  return;
}

