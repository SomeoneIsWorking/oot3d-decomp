// OoT3D decomp @ 001adbb8  name=FUN_001adbb8  size=92

undefined8 FUN_001adbb8(int param_1,int param_2)

{
  int iVar1;

  FUN_00350f34(param_1,param_1 + 0x1a4,0);
  iVar1 = *(int *)(DAT_001adc0c + param_2);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x29b8) = *(uint *)(iVar1 + 0x29b8) & 0xfffeffff;
  }
  FUN_0034f0f4(param_2,*(undefined4 *)(param_1 + 0x230));
  return CONCAT44(param_1 + 0x1a8,1);
}
