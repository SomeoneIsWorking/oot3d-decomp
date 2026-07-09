// OoT3D decomp @ 00494600  name=FUN_00494600  size=52

bool FUN_00494600(int *param_1,int param_2)

{
  bool bVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[2] = 0;
  bVar1 = *(int *)(param_2 + 4) == 3;
  if (bVar1) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return bVar1;
}

