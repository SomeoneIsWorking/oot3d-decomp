// OoT3D decomp @ 003dfa20  name=FUN_003dfa20  size=396

void FUN_003dfa20(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  float fVar6;

  cVar1 = *(char *)(param_1 + 0x1c0);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x1c0) = cVar1 + -1, cVar1 == '\x01')) {
    *(undefined1 *)(param_1 + 0x1c0) = 0x4b;
  }
  fVar6 = fRam003dfbac;
  fVar4 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)FUN_003727f0(fVar4 * fRam003dfbac);
  uVar2 = uRam003dfbb8;
  iVar3 = iRam003dfbb4;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar4 * fRam003dfbb0;
  fVar4 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
  if (iVar3 < (int)fVar4) {
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) - fRam003dfbbc;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  if ((iRam003dfbc0 < (int)fVar4) && (iVar3 = FUN_0037577c(param_2), iVar3 == 0)) {
    *(undefined1 *)(param_1 + 0x1c0) = 0x3c;
    iVar3 = iRam003dfbc4;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    uVar5 = uRam003dfbc8;
    if ((*(uint *)(*(int *)(iVar3 + param_2) + 0x2c) <= uRam003dfbc8) &&
       (uVar5 = *(uint *)(*(int *)(iVar3 + param_2) + 0x30), uRam003dfbcc < uVar5)) {
      FUN_00367c7c(param_2,uRam003dfbd0,0);
      uVar5 = extraout_r1;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uRam003dfbd4;
  }
  else {
    FUN_003705a0(uRam003dfbdc,uRam003dfbd8,param_1 + 0x6c);
    uVar5 = extraout_r1_00;
  }
  iVar3 = *(int *)(param_1 + 0x128);
  if (iVar3 != 0) {
    uVar5 = *(uint *)(iVar3 + 0x13c);
  }
  if (iVar3 != 0 && uVar5 != 0) {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(iVar3 + 0xc0) = (short)(int)(fVar4 + *(float *)(param_1 + 0x6c) * fRam003dfbe0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  fVar4 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)FUN_003727f0(fVar4 * fVar6);
  *(short *)(iRam003dfbe8 + param_1) = (short)(int)(fVar6 * fRam003dfbe4);
  return;
}
