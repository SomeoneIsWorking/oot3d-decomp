// OoT3D decomp @ 0034322c  name=FUN_0034322c  size=48

void FUN_0034322c(undefined *param_1,uint param_2,undefined param_3)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      *param_1 = param_3;
      puVar1 = param_1;
    }
    for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 - 1) {
      puVar1[1] = param_3;
      puVar1 = puVar1 + 2;
      *puVar1 = param_3;
    }
  }
  return;
}

