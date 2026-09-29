// OoT3D decomp @ 003e4894  name=FUN_003e4894  size=84

void FUN_003e4894(int param_1)

{
  FUN_003731e0(param_1 + 0x1a4);
  FUN_0036fc20(DAT_003e48ec,DAT_003e48e8,param_1 + 0x6c);
  FUN_00370084(param_1 + 0xbc,0,2,DAT_003e48f0);
  if (*(short *)(DAT_003e48f4 + param_1) == 0) {
    FUN_0034bec4(param_1);
    return;
  }
  return;
}
