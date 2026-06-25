// OoT3D decomp @ 00331764  name=FUN_00331764  size=72

void FUN_00331764(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_10;
  
  FUN_0036df4c(&local_20,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)(param_2 + 0xc0));
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uVar1;
  param_1[4] = local_10;
  return;
}

