// OoT3D decomp @ 003e02a0  name=FUN_003e02a0  size=100

void FUN_003e02a0(int param_1)

{
  int iVar1;
  float fVar2;

  if (*(short *)(param_1 + 0x1d4) == 0) {
    FUN_00375bcc(param_1,uRam003e0304);
    iVar1 = iRam003e030c;
    fVar2 = *(float *)(param_1 + 0x30) - fRam003e0308;
    *(float *)(param_1 + 0x30) = fVar2;
    if ((int)fVar2 < iVar1) {
      FUN_00375bcc(param_1,uRam003e0310);
      *(undefined2 *)(param_1 + 0x1d4) = 0x2d;
      *(undefined4 *)(param_1 + 0x1bc) = uRam003e0314;
    }
  }
  return;
}
