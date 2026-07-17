// OoT3D decomp @ 0035af04  name=FUN_0035af04  size=28

void FUN_0035af04(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(uint *)(param_1 + 0x29b8) | 0x200;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x29b8) & 0xfffffdff;
  }
  *(uint *)(param_1 + 0x29b8) = uVar1;
  return;
}

