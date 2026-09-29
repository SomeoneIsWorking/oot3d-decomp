// OoT3D decomp @ 00113698  name=FUN_00113698  size=104

void FUN_00113698(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;

  uVar1 = DAT_00113700;
  if (*(int *)(param_1 + 0xc2c) == 0) {
    if (*(char *)(param_1 + 0xc34) != '\0') {
      *(undefined1 *)(param_1 + 0xc34) = 0;
      fVar3 = (float)FUN_00371e50(uVar1);
      *(int *)(param_1 + 0xc2c) = (int)(short)(int)(fVar3 + DAT_00113704);
      *(undefined4 *)(param_1 + 0xc30) = DAT_00113708;
      return;
    }
    iVar2 = 1;
    *(undefined1 *)(param_1 + 0xc34) = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc2c) + -1;
  }
  *(int *)(param_1 + 0xc2c) = iVar2;
  return;
}
