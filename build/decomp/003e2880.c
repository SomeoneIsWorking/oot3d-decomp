// OoT3D decomp @ 003e2880  name=FUN_003e2880  size=84

void FUN_003e2880(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003e28d4;
    FUN_0036cf80(param_2,param_1,0);
    *(undefined2 *)(param_1 + 0x1c0) = 300;
  }
  return;
}
