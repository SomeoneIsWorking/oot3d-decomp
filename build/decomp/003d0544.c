// OoT3D decomp @ 003d0544  name=FUN_003d0544  size=136

void FUN_003d0544(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  iVar2 = *(int *)(DAT_003d05cc + param_2);
  if ((*(short *)(DAT_003d05d0 + 0x44) != 0) && (*(short *)(DAT_003d05d4 + param_2) == 0)) {
    iVar1 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d05d8 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(iVar2 + 0x118) = (short)(int)(DAT_003d05dc / fVar3 + DAT_003d05e0);
  }
  return;
}
