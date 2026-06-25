// OoT3D decomp @ 002bb7cc  name=FUN_002bb7cc  size=184

void FUN_002bb7cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0x80;
  *(int *)(iVar1 + 0x1380) = param_3;
  if (param_3 == 2) {
    *(undefined *)(iVar1 + 0x1395) = 0x15;
  }
  else {
    *(undefined *)(iVar1 + 0x1395) = 5;
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    *(int *)(iVar1 + 0x1480) = param_3;
    if (param_3 != 2) {
      *(undefined *)(iVar1 + 0x1495) = 5;
      *(undefined *)(*(int *)(param_1 + 0x1604) + 0x15) = 5;
      **(int **)(param_1 + 0x1604) = param_3;
      *(undefined *)(*(int *)(param_1 + 0x1604) + 0x65) = 5;
      *(int *)(*(int *)(param_1 + 0x1604) + 0x50) = param_3;
      *(undefined *)(*(int *)(param_1 + 0x1604) + 0xb5) = 5;
      *(int *)(*(int *)(param_1 + 0x1604) + 0xa0) = param_3;
      return;
    }
    *(undefined *)(iVar1 + 0x1495) = 0x15;
    *(undefined *)(*(int *)(param_1 + 0x1604) + 0x15) = 0x15;
    **(undefined4 **)(param_1 + 0x1604) = 2;
    *(undefined *)(*(int *)(param_1 + 0x1604) + 0x65) = 0x15;
    *(undefined4 *)(*(int *)(param_1 + 0x1604) + 0x50) = 2;
    *(undefined *)(*(int *)(param_1 + 0x1604) + 0xb5) = 0x15;
    *(undefined4 *)(*(int *)(param_1 + 0x1604) + 0xa0) = 2;
  }
  return;
}

