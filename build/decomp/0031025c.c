// OoT3D decomp @ 0031025c  name=FUN_0031025c  size=8

void FUN_0031025c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x50);
  FUN_00302a1c();
  FUN_003120d4(piVar1[2 - *piVar1]);
  FUN_0048848c();
  FUN_003048d4();
  FUN_003120d4(piVar1[*piVar1 + 1]);
  return;
}

