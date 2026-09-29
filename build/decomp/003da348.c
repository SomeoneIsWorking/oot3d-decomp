// OoT3D decomp @ 003da348  name=FUN_003da348  size=272

void FUN_003da348(int param_1,int param_2)

{
  float fVar1;
  float fVar2;

  fVar1 = DAT_003da458;
  if ((*(byte *)(param_1 + 0x1d4) & 2) == 0 && (*(ushort *)(param_1 + 0x90) & 1) == 0) {
    FUN_00376864(param_1);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar1;
    FUN_00376340(DAT_003da464,DAT_003da464,DAT_003da464,param_2,param_1,4);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar1;
    FUN_0037632c(param_1,param_1 + 0x1c4);
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1c4);
    return;
  }
  *(byte *)(param_1 + 0x1d4) = *(byte *)(param_1 + 0x1d4) & 0xfd;
  *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
  fVar2 = *(float *)(param_1 + 0x2c);
  if (*(float *)(param_1 + 0x2c) <= *(float *)(param_1 + 0x84)) {
    fVar2 = *(float *)(param_1 + 0x84);
  }
  *(float *)(param_1 + 0x2c) = fVar2;
  FUN_00315438(fVar1,param_1,param_2);
  if (*(short *)(param_1 + 0x1c) == 2) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_003da45c;
    FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    *(undefined4 *)(param_1 + 0x1bc) = DAT_003da460;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
