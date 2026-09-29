// OoT3D decomp @ 0011d6d8  name=FUN_0011d6d8  size=192

void FUN_0011d6d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;

  fVar2 = DAT_0011d798;
  if (*(short *)(param_1 + 0x7dc) != 0) {
    *(short *)(param_1 + 0x7dc) = *(short *)(param_1 + 0x7dc) + -1;
  }
  FUN_003705a0(DAT_0011d79c,*(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x6c) * fVar2,
               param_1 + 0x6c);
  FUN_00370378(param_1 + 0xbc,0xffffe980);
  uVar1 = DAT_0011d7a4;
  fVar2 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84);
  if ((int)fVar2 < DAT_0011d7a0) {
    *(undefined4 *)(param_1 + 0x70) = DAT_0011d7a4;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x84) + DAT_0011d7a8;
  }
  if ((int)fVar2 < DAT_0011d7ac) {
    FUN_00370448(param_1,param_2);
  }
  if (((*(ushort *)(param_1 + 0x90) & 8) == 0) && (*(short *)(param_1 + 0x7dc) != 0)) {
    return;
  }
  FUN_0036f44c(param_1);
  return;
}
