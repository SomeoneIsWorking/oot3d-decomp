// OoT3D decomp @ 0035c358  name=FUN_0035c358  size=188

void FUN_0035c358(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_2c [3];
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(*(int *)(param_2 + 0x28) + 0x10);
  iVar1 = FUN_00372f0c(uVar4,param_3);
  uVar2 = FUN_00372f0c(uVar4,param_4);
  local_2c[2] = FUN_00372f0c(uVar4,param_5);
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
      *(undefined4 *)(param_1 + uVar3 * 0x98 + 4) = uVar5;
      FUN_00372d94(param_1 + uVar3 * 0x98 + 4,local_2c[uVar3]);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}

