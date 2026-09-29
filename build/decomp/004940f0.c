// OoT3D decomp @ 004940f0  name=FUN_004940f0  size=48

undefined4 FUN_004940f0(int param_1,int param_2,int param_3)

{
  uint uVar1;

  uVar1 = param_2 + 0x1fU & 0xffffffe0;
  if ((uint)(param_3 + param_2) < uVar1) {
    return 0;
  }
  *(uint *)(param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 0x10) = param_3 + param_2;
  *(uint *)(param_1 + 0x14) = uVar1;
  return 1;
}
