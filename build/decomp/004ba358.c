// OoT3D decomp @ 004ba358  name=FUN_004ba358  size=32

uint FUN_004ba358(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x24);
  if (uVar1 != 0) {
    uVar1 = (uint)*(ushort *)(uVar1 + (*(uint *)(param_2 + 0xc) & 0xff) * 8);
  }
  return uVar1;
}

