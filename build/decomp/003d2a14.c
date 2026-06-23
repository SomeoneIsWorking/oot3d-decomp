// OoT3D decomp @ 003d2a14  name=FUN_003d2a14  size=192

void FUN_003d2a14(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0xc10) == 0) {
    if (*(int *)(param_1 + 0x98c) != 2) {
      FUN_00348800(param_1,3);
    }
  }
  else if (*(int *)(param_1 + 0x98c) != 1) {
    FUN_00348800(param_1,1);
  }
  if (*(short *)(param_2 + 0x104) == 0x5f) {
    if ((*(ushort *)(DAT_003d2ad4 + 0xee) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
  }
  else if (((*(ushort *)(DAT_003d2ad4 + 0xee) & 0x10) != 0) &&
          ((*(uint *)(DAT_003d2ad8 + 0xbc) & *(uint *)(DAT_003d2adc + 0x34)) == 0)) {
    return;
  }
  if (*(short *)(param_1 + 0xc10) != 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0xbac) = DAT_003d2ae0;
  FUN_00371680(param_2,4,0);
  return;
}

