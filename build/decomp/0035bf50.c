// OoT3D decomp @ 0035bf50  name=FUN_0035bf50  size=96

void FUN_0035bf50(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 auStack_20 [3];

  auStack_20[0] = *DAT_0035bfb0;
  auStack_20[1] = DAT_0035bfb0[1];
  auStack_20[2] = DAT_0035bfb0[2];
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    uVar1 = (uint)*(byte *)*param_2;
    if (uVar1 < 3) {
      (*(code *)auStack_20[uVar1])(param_1,(byte *)*param_2 + 4,param_3);
    }
  }
  return;
}
