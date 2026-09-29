// OoT3D decomp @ 003e1048  name=FUN_003e1048  size=388

void FUN_003e1048(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  if (*(short *)(param_1 + 0x8fa) != 0) {
    *(short *)(param_1 + 0x8fa) = *(short *)(param_1 + 0x8fa) + -1;
  }
  iVar2 = FUN_0036bc98(param_1,param_2);
  uVar3 = uRam003e11d0;
  if (iVar2 == 0) {
    if (*(short *)(param_1 + 0x8fa) != 0) {
      if ((*(byte *)(param_1 + 0x94a) & 2) == 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
        FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x938);
      }
      else {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
        FUN_00363cb8(param_1,param_2);
      }
      fVar4 = (float)FUN_002cfca0((int)(short)((ushort)*(byte *)(param_1 + 0x8f8) << 0xb));
      fVar4 = *(float *)(param_1 + 0xc) + fVar4 * fRam003e11dc;
      *(float *)(param_1 + 0x2c) = fVar4;
      cVar1 = *(char *)(param_1 + 0x8f8);
      if ((cVar1 == '\0') || (*(char *)(param_1 + 0x8f8) = cVar1 + -1, cVar1 == '\x01')) {
        *(undefined1 *)(param_1 + 0x8f8) = 0x20;
      }
      *(float *)(param_1 + 0x988) = fVar4 - fRam003e11e0;
      FUN_0037322c(uRam003e11e4,param_1);
      fVar4 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x903),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_1 + 0x920,*(undefined1 *)(param_1 + 0x930),
                   *(undefined1 *)(param_1 + 0x931),*(undefined1 *)(param_1 + 0x932),
                   (int)(short)(int)(fVar4 * fRam003e11e8),0);
      return;
    }
    FUN_00375bcc(param_1,uRam003e11d4);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
    uVar3 = uRam003e11d8;
  }
  else {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x2c) - fRam003e11cc;
  }
  *(undefined4 *)(param_1 + 0x8f4) = uVar3;
  return;
}
