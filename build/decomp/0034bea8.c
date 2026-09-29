// OoT3D decomp @ 0034bea8  name=FUN_0034bea8  size=28

void FUN_0034bea8(int param_1,int param_2)

{
  ushort uVar1;

  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x9c4) & 0xf7ff;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x9c4) | 0x800;
  }
  *(ushort *)(param_1 + 0x9c4) = uVar1;
  return;
}
