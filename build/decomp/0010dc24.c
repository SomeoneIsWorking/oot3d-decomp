// OoT3D decomp @ 0010dc24  name=FUN_0010dc24  size=52

void FUN_0010dc24(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036bcb4(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x13) >> 0x1b);
  if (iVar1 != 0) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
