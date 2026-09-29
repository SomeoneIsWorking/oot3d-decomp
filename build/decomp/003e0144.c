// OoT3D decomp @ 003e0144  name=FUN_003e0144  size=172

void FUN_003e0144(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;

  iVar2 = FUN_0036a7a0(param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_00370378(param_1 + 0xbe,
                         (int)(short)(*(short *)(param_1 + 0x16) +
                                     (short)*(char *)(param_1 + 0x1a8) * (short)uRam003e01f0 * 0x10)
                         ,0x20);
    if (iVar2 == 0) {
      iVar2 = (int)(short)(*(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0x1a8) * -0x4000
                          );
      fVar3 = (float)FUN_002cfca0(iVar2);
      fVar1 = fRam003e01f8;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar3 * fRam003e01f8;
      fVar3 = (float)FUN_00338f60(iVar2);
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar3 * fVar1;
      return;
    }
    *(undefined1 *)(param_1 + 0x1a9) = 1;
    *(undefined4 *)(param_1 + 0x1a4) = uRam003e01f4;
  }
  return;
}
