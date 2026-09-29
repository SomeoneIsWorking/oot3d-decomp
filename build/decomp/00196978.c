// OoT3D decomp @ 00196978  name=FUN_00196978  size=72

void FUN_00196978(int param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x16),0x200);
  iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc) + DAT_001969c0,DAT_001969c4,param_1 + 0x2c);
  if (iVar2 != 0 && iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001969c8;
  }
  return;
}
