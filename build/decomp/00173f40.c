// OoT3D decomp @ 00173f40  name=FUN_00173f40  size=108

void FUN_00173f40(int param_1,int param_2)

{
  int iVar1;

  if (*(float *)(param_1 + 0x1a8) != DAT_00173fb0) {
    *(uint *)(*(int *)(DAT_00173fac + param_2) + 0x1714) =
         *(uint *)(*(int *)(DAT_00173fac + param_2) + 0x1714) & 0xffffffef;
  }
  iVar1 = FUN_003705a0(DAT_00173fb8,DAT_00173fb4,param_1 + 0x2c);
  if (iVar1 != 0) {
    *DAT_00173fbc = 0x20;
    FUN_00374428(param_1);
    return;
  }
  return;
}
