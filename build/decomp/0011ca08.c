// OoT3D decomp @ 0011ca08  name=FUN_0011ca08  size=428

void FUN_0011ca08(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint in_fpscr;
  int iVar3;
  float fVar4;
  float fVar5;

  FUN_00370734(param_1 + 0x1a4);
  if (*(char *)(param_1 + 0x6a5) != '\0') {
    *(char *)(param_1 + 0x6a5) = *(char *)(param_1 + 0x6a5) + -1;
  }
  iVar3 = (int)*(float *)(param_1 + 0x1e0);
  FUN_003705a0(*(float *)(param_1 + 0x84) + DAT_0011cbb4,DAT_0011cbb8,param_1 + 0x6ac);
  fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)FUN_003727f0(fVar4 * DAT_0011cbbc * DAT_0011cbc0);
  uVar1 = DAT_0011cbc8;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x6ac) - fVar4 * DAT_0011cbc4;
  uVar2 = (uint)*(byte *)(param_1 + 0x6a5);
  if (uVar2 == 0) {
    if (((iVar3 != 0x10 && iVar3 != 0x1e) && iVar3 != 0x2a) && iVar3 != 0x37) goto LAB_0011caf0;
  }
  else {
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x555;
    if (((uVar2 + (uint)((ulonglong)uVar2 * (ulonglong)DAT_0011cbcc >> 0x22) * -6 != 0) ||
        (iVar3 < 0x10)) || (0x37 < iVar3)) goto LAB_0011caf0;
  }
  FUN_00375bcc(param_1,uVar1);
LAB_0011caf0:
  if (0x28 < iVar3) {
    iVar3 = 0x50 - iVar3;
  }
  fVar5 = (float)VectorSignedToFloat(iVar3 + 4,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat(iVar3 + 4,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat((int)(short)(int)(fVar4 * DAT_0011cbd0 * DAT_0011cbd4),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((short)(int)(fVar5 * DAT_0011cbd0 * DAT_0011cbd4) < 1) {
    fVar4 = fVar4 * DAT_0011cbd8 * DAT_0011cbdc - DAT_0011cbe0;
  }
  else {
    fVar4 = DAT_0011cbe0 + fVar4 * DAT_0011cbd8 * DAT_0011cbdc;
  }
  *(short *)(param_1 + 0xbe) = (short)(int)fVar4 + *(short *)(param_1 + 0xbe);
  if (DAT_0011cbe4 < *(int *)(param_1 + 0x98)) {
    FUN_00374a58(DAT_0011cbe8,param_1 + 0x1a4,0);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | 0x10;
    *(undefined4 *)(param_1 + 0x6a0) = DAT_0011cbec;
  }
  return;
}
