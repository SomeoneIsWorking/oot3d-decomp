// OoT3D decomp @ 00465444  name=FUN_00465444  size=36

uint FUN_00465444(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0030f0ec();
  uVar2 = FUN_00481a68(*(undefined4 *)(iVar1 + 4),param_1);
  return (uVar2 & 0x8000) >> 0xf;
}

