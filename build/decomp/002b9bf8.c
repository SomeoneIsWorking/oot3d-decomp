// OoT3D decomp @ 002b9bf8  name=FUN_002b9bf8  size=28

void FUN_002b9bf8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != -1) {
    if (param_3 == 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x27c) + 0x14);
      if (param_2 < *(int *)(iVar1 + 0x68)) {
        *(undefined *)(*(int *)(iVar1 + 0x6c) + param_2) = 0;
      }
      return;
    }
    if (param_3 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x27c) + 0x14);
      if (param_2 < *(int *)(iVar1 + 0x68)) {
        *(undefined *)(*(int *)(iVar1 + 0x6c) + param_2) = 1;
      }
      return;
    }
  }
  return;
}

