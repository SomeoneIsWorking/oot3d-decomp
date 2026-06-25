// OoT3D decomp @ 002ddfb0  name=FUN_002ddfb0  size=32

uint FUN_002ddfb0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0030f0ec();
  uVar2 = FUN_00481a68(*(undefined4 *)(iVar1 + 4),param_1);
  return uVar2 >> 0x1f;
}

