// OoT3D decomp @ 00120d7c  name=FUN_00120d7c  size=308

void FUN_00120d7c(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  uint in_fpscr;
  float fVar4;

  FUN_00370734(param_1 + 0x1a4);
  fVar4 = DAT_00120eb4;
  fVar1 = DAT_00120eb0;
  if (*(short *)(param_1 + 0x7e0) != 0) {
    *(short *)(param_1 + 0x7e0) = *(short *)(param_1 + 0x7e0) + -1;
  }
  FUN_00373500(*(float *)(param_1 + 0x84) + fVar4,DAT_00120eb8,*(undefined4 *)(param_1 + 0x6c),
               param_1 + 0x7e8);
  uVar2 = DAT_00120ebc;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x7e8) - fVar1;
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    sVar3 = *(short *)(param_1 + 0x92) + -0x8000;
  }
  else {
    sVar3 = *(short *)(param_1 + 0x82);
  }
  *(short *)(param_1 + 0x7e2) = sVar3;
  FUN_00370378(param_1 + 0x36,(int)sVar3,uVar2);
  FUN_00370378(param_1 + 0xbc,0,0x200);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x7e0),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)FUN_003727f0(fVar4 * DAT_00120ec0);
  *(short *)(param_1 + 0xc0) = (short)(int)(fVar4 * DAT_00120ec4);
  uVar2 = DAT_00120ec8;
  if (*(short *)(param_1 + 0x7e0) == 0) {
    *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) | 1;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x7e2) = *(undefined2 *)(param_1 + 0xbe);
    fVar4 = (float)FUN_00372674(uVar2);
    uVar2 = DAT_00120ecc;
    *(float *)(param_1 + 0x7e8) = *(float *)(param_1 + 0x2c) + fVar4 * fVar1;
    FUN_00370350(uVar2,param_1 + 0x1a4,2);
    *(undefined2 *)(param_1 + 0x7e0) = 0x3c;
    *(undefined4 *)(param_1 + 0x7dc) = DAT_00120ed0;
  }
  *(short *)(param_1 + 0x34) = -*(short *)(param_1 + 0xbc);
  return;
}
