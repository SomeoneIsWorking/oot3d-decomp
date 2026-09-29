// OoT3D decomp @ 00235a4c  name=FUN_00235a4c  size=112

void FUN_00235a4c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar1 = DAT_00235ac0;
  uVar4 = *(undefined4 *)(DAT_00235abc + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0x4e0);
  uVar3 = FUN_003603c0(param_2 + 0x254,uVar4);
  uVar2 = DAT_00235ac4;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(DAT_00235ac8,DAT_00235ac4,uVar3,uVar1,param_2 + 0x254,param_1,uVar4,2);
  *(undefined4 *)(param_2 + 0x6c) = uVar2;
  *(undefined4 *)(param_2 + 0x221c) = uVar2;
  return;
}
