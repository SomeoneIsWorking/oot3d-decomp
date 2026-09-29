// OoT3D decomp @ 00309efc  name=FUN_00309efc  size=32

void FUN_00309efc(int param_1,int param_2)

{
  int iVar1;

  iVar1 = (param_2 + 1) * (param_2 + 1);
  *(short *)(param_1 + 0x14) = (short)((iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) * 0x4000 >> 0x10);
  return;
}
