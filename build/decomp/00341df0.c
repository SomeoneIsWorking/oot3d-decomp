// OoT3D decomp @ 00341df0  name=FUN_00341df0  size=40

undefined2 FUN_00341df0(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = FUN_00322088();
  if ((uVar2 & 0xf) < 0xe) {
    uVar1 = *(undefined2 *)(DAT_00341e18 + (uVar2 & 0xf) * 2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

