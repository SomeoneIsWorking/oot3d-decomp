// OoT3D decomp @ 004889bc  name=FUN_004889bc  size=364

void FUN_004889bc(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  iVar2 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar2 != 0) {
    FUN_00359aa0(param_1 + 0x254,param_2,0xff);
  }
  fVar1 = DAT_00488b28;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x128) == 0) {
    if ((*(int *)(param_1 + 0x284) != 0x100) ||
       (fVar3 = (float)FUN_0036b4d0(DAT_00488b3c,param_1 + 0x254), fVar1 <= fVar3)) {
      *(float *)(param_1 + 0x70) = fVar1;
      FUN_00370378(param_1 + 0xbc,(int)*(short *)(param_1 + 0x34),0x800);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1224) == 0) {
      *(int *)(param_1 + 0x1224) = *(int *)(param_1 + 0x128);
      FUN_0036f59c(param_1,DAT_00488b2c);
    }
    FUN_0036df4c(param_1 + 0x108,param_1 + 0x28);
    FUN_0032eeb4(param_2,param_1);
    fVar3 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84);
    if (DAT_00488b30 < (int)fVar3) {
      fVar3 = DAT_00488b34;
    }
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar3;
    *(undefined4 *)(param_1 + 0x221c) = DAT_00488b38;
    *(float *)(param_1 + 100) = fVar1;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0x34) = 0;
    FUN_00345394(param_1,param_2);
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xfffffbff;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) | 1;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 4;
  }
  return;
}
