// OoT3D decomp @ 00483984  name=FUN_00483984  size=152

void FUN_00483984(uint *param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  undefined2 *puVar2;

  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((*param_1 & 0x20) != 0) {
      param_3 = param_1[7];
    }
    for (; (uVar1 < param_3 && (param_2[uVar1] != 0)); uVar1 = uVar1 + 1) {
    }
  }
  puVar2 = param_2 + uVar1;
  param_1[6] = param_1[6] - uVar1;
  param_1[8] = param_1[8] + uVar1;
  FUN_002df1c8(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (*(code *)param_1[1])(*param_2,param_1[2]);
  }
  FUN_002df21c(param_1);
  return;
}
