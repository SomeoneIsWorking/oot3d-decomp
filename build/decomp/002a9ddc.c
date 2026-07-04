// OoT3D decomp @ 002a9ddc  name=FUN_002a9ddc  size=80

undefined4 FUN_002a9ddc(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  param_1 = param_1 + *(int *)(param_3 + 4);
  if (*(char *)(param_3 + 1) != '\0') {
    do {
      FUN_0034faa8(param_2,param_2 + 0xa70,param_1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x18;
    } while (iVar1 < (int)(uint)*(byte *)(param_3 + 1));
  }
  return 1;
}

