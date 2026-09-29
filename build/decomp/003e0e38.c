// OoT3D decomp @ 003e0e38  name=FUN_003e0e38  size=476

void FUN_003e0e38(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  if (*(short *)(param_1 + 0x920) != 0) {
    *(short *)(param_1 + 0x920) = *(short *)(param_1 + 0x920) + -1;
  }
  iVar3 = FUN_0036bc98(param_1,param_2);
  uVar2 = uRam003e101c;
  if (iVar3 != 0) {
    uVar4 = uRam003e1014;
    if (*(short *)(param_1 + 0x1c) < 2) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0x2c) - fRam003e1018;
      uVar4 = uVar2;
    }
    *(undefined4 *)(param_1 + 0x918) = uVar4;
    return;
  }
  if (*(short *)(param_1 + 0x920) == 0) {
    FUN_003ff758(param_1 + 0x28,uRam003e1020);
    FUN_00375bcc(param_1,uRam003e1024);
    *(undefined4 *)(param_1 + 0x918) = uRam003e1028;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
    return;
  }
  if ((*(byte *)(param_1 + 0x986) & 2) == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x974);
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    FUN_00363cb8(param_1,param_2);
  }
  iVar3 = 0;
  if (*(byte *)(param_1 + 0x91d) != 0) {
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x91d),(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = (int)(fRam003e1034 + fVar5 * fRam003e102c * fRam003e1030);
  }
  fVar5 = (float)FUN_002cfca0((int)(short)(iVar3 << 0xb));
  fVar5 = *(float *)(param_1 + 0xc) + fVar5 * fRam003e1038;
  *(float *)(param_1 + 0x2c) = fVar5;
  cVar1 = *(char *)(param_1 + 0x91d);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x91d) = cVar1 + -1, cVar1 == '\x01')) {
    *(undefined1 *)(param_1 + 0x91d) = 0x30;
  }
  *(float *)(param_1 + 0x9c4) = fVar5 - fRam003e103c;
  FUN_0037322c(uRam003e1040,param_1);
  fVar5 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x95c,*(undefined1 *)(param_1 + 0x933),
               *(undefined1 *)(param_1 + 0x934),*(undefined1 *)(param_1 + 0x935),
               (int)(short)(int)(fVar5 * fRam003e1044),0);
  return;
}
