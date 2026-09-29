// OoT3D decomp @ 00369178  name=FUN_00369178  size=412

void FUN_00369178(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    switch(param_2) {
    case 0x6c:
      FUN_0037266c(param_1,0);
      FUN_0036932c(param_1,1);
      FUN_0036932c(param_1,2);
      FUN_0036932c(param_1,3);
      FUN_0036932c(param_1,4);
      FUN_0036932c(param_1,5);
      return;
    case 0x6d:
      FUN_0036932c(param_1,0);
      FUN_0037266c(param_1,1);
      FUN_0036932c(param_1,2);
      FUN_0036932c(param_1,3);
      FUN_0036932c(param_1,4);
      FUN_0036932c(param_1,5);
      return;
    case 0x6e:
      FUN_0036932c(param_1,0);
      FUN_0036932c(param_1,1);
      FUN_0037266c(param_1,2);
      FUN_0036932c(param_1,3);
      FUN_0036932c(param_1,4);
      FUN_0036932c(param_1,5);
      return;
    default:
      return;
    case 0x70:
      goto switchD_00369190_caseD_70;
    case 0x71:
      FUN_0036932c(param_1,0);
      FUN_0036932c(param_1,1);
      FUN_0036932c(param_1,2);
      FUN_0037266c(param_1,3);
      FUN_0036932c(param_1,4);
      FUN_0036932c(param_1,5);
      return;
    }
  }
  return;
switchD_00369190_caseD_70:
  FUN_0036932c(param_1,0);
  FUN_0036932c(param_1,1);
  FUN_0036932c(param_1,2);
  FUN_0036932c(param_1,3);
  FUN_0037266c(param_1,4);
  if (5 < *(int *)(*(int *)(param_1 + 0x14) + 0x68)) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x6c) + 5) = 0;
  }
  return;
}
