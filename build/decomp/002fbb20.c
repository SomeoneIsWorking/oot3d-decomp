// OoT3D decomp @ 002fbb20  name=FUN_002fbb20  size=140

void FUN_002fbb20(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    if (*(char *)(param_1 + 8) != '\0' && *(char *)(param_1 + 8) != '\x06') {
      (**(code **)(*piVar2 + 4))(piVar2,0);
    }
    (**(code **)(**(int **)(param_1 + 4) + 8))();
  }
  uVar1 = DAT_002fbbac;
  *(undefined *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x18) = 1;
  *(undefined *)(param_1 + 0x19) = 0;
  *(undefined *)(param_1 + 0x1a) = 0;
  *(undefined *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

