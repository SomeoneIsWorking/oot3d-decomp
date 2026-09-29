// OoT3D decomp @ 0040c048  name=FUN_0040c048  size=56

undefined4 FUN_0040c048(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
    if (param_2 != 1 && param_2 != -1) {
      return 1;
    }
    break;
  case 4:
  case 5:
    if (2 < param_2 + 1U) {
      return 1;
    }
  }
  return 0;
}
