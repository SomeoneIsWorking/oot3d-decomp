// OoT3D decomp @ 004838f0  name=FUN_004838f0  size=148

void FUN_004838f0(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;

  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((*param_1 & 0x20) != 0) {
      param_3 = param_1[7];
    }
    for (; (uVar1 < param_3 && (param_2[uVar1] != '\0')); uVar1 = uVar1 + 1) {
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
