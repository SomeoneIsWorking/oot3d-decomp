// OoT3D decomp @ 004c1b24  name=FUN_004c1b24  size=328

void FUN_004c1b24(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x60;
  iVar1 = *DAT_004c1c70;
  if (-1 < *(char *)(DAT_004c1c6c + param_1)) {
    iVar2 = (int)*(short *)(iVar1 + 0x110);
    fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(char *)(DAT_004c1c6c + param_1) < (int)(DAT_004c1c74 / fVar5 + DAT_004c1c78)) {
      fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x2488) = (char)(int)(DAT_004c1c74 / fVar5 + DAT_004c1c78);
    }
  }
  fVar5 = DAT_004c1c80;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x6a),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(DAT_004c1c80,fVar4 * DAT_004c1c7c,param_1 + 0x221c);
  iVar1 = FUN_0036b4ec(param_1 + 0x254,param_2);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0x221c) == fVar5)) {
    if ((*(uint *)(param_1 + 0x1710) & 0x20000000) == 0) {
      FUN_0036055c(param_2,param_1,DAT_004c1c84,0);
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x4000000;
    }
    else {
      *(short *)(param_1 + 0x2238) = *(short *)(param_1 + 0x2238) + 1;
    }
    if (*(short *)(param_1 + 0x2220) == *(short *)(param_1 + 0xbe)) {
      uVar3 = 0xde;
    }
    else {
      uVar3 = 0xa3;
    }
    FUN_00358dfc(DAT_004c1c88,param_1 + 0x254,param_2,uVar3);
    *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
  }
  return;
}
