// OoT3D decomp @ 001a6260  name=FUN_001a6260  size=88

void FUN_001a6260(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
  uVar2 = DAT_001a62bc;
  uVar1 = DAT_001a62b8;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = 1;
    FUN_0037547c(DAT_001a62c0,param_1 + 0x28,4,uVar2,uVar2,uVar1);
  }
  return;
}
