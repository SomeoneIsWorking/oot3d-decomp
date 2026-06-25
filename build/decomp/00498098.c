// OoT3D decomp @ 00498098  name=FUN_00498098  size=88

int FUN_00498098(int param_1)

{
  int **ppiVar1;
  
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_002d6e20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    ppiVar1 = DAT_004980f0;
    (**(code **)(**DAT_004980f0 + 0x10))(*DAT_004980f0,*(undefined4 *)(param_1 + 0x14));
    (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,*(undefined4 *)(param_1 + 0x18));
    *(undefined *)(param_1 + 4) = 0;
  }
  return param_1;
}

