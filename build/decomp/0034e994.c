// OoT3D decomp @ 0034e994  name=FUN_0034e994  size=180

void FUN_0034e994(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_2c [3];

  uVar4 = *(undefined4 *)(param_2 + 0x10);
  iVar1 = FUN_00372f0c(param_3,param_4);
  uVar2 = FUN_00372f0c(param_3,param_5);
  local_2c[2] = FUN_00372f0c(param_3,param_6);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_2c[0] = iVar1;
  local_2c[1] = uVar2;
  uVar3 = 0;
  do {
    if (local_2c[uVar3] == 0) {
      param_1[uVar3] = 0;
    }
    else {
      param_1[uVar3] = 1;
      *(undefined4 *)(param_1 + uVar3 * 0x98 + 4) = uVar4;
      FUN_00372d94(param_1 + uVar3 * 0x98 + 4,local_2c[uVar3]);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}
