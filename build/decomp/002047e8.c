// OoT3D decomp @ 002047e8  name=FUN_002047e8  size=132

void FUN_002047e8(int param_1)

{
  int iVar1;
  float fVar2;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00370378(param_1 + 0xc0,0,0x200);
  iVar1 = FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x240),0x100);
  if (iVar1 != 0) {
    FUN_003672b8(param_1);
  }
  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  iVar1 = DAT_0020486c;
  *(float *)(param_1 + 0x28) =
       *(float *)(*(int *)(DAT_0020486c + 0x30) + 0x28) + *(float *)(param_1 + 0xedc) * fVar2;
  fVar2 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x30) =
       *(float *)(*(int *)(iVar1 + 0x30) + 0x30) + *(float *)(param_1 + 0xedc) * fVar2;
  return;
}
