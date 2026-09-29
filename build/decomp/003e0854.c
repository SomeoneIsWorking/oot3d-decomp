// OoT3D decomp @ 003e0854  name=FUN_003e0854  size=68

void FUN_003e0854(int param_1)

{
  float fVar1;
  int iVar2;

  fVar1 = fRam003e089c;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fRam003e0898;
  iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc) - fVar1,param_1 + 0x2c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  return;
}
