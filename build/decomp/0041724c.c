// OoT3D decomp @ 0041724c  name=ShaderProgram_0041724c  size=472

/* WARNING: Type propagation algorithm not settling */

void ShaderProgram_0041724c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_240 [128];
  undefined4 local_40 [2];
  undefined1 auStack_38 [4];
  int local_34 [6];

  iVar3 = FUN_0041f360();
  param_1[2] = iVar3;
  iVar3 = FUN_0041f498(DAT_00417424);
  piVar1 = DAT_00417428;
  param_1[3] = iVar3;
  local_34[0] = piVar1[1];
  *(int *)((int)local_34 + *(int *)(local_34[0] + -0x30)) = piVar1[2];
  local_34[1] = 0;
  iVar3 = FUN_00324f44(0,param_2,0);
  uVar5 = iVar3 + 1U;
  if (DAT_0041742c < iVar3 + 1U) {
    uVar5 = DAT_0041742c;
  }
  FUN_00324f44(local_240,param_2,uVar5);
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  iVar3 = FUN_0030d580(local_34 + 1,local_240,1);
  if (iVar3 < 0) {
    FUN_003351b4();
  }
  local_34[0] = *piVar1;
  *(int *)((int)local_34 + *(int *)(local_34[0] + -0x30)) = piVar1[3];
  iVar3 = FUN_00304714(local_34 + 1,local_40);
  if (iVar3 < 0) {
    FUN_003351b4();
  }
  puVar2 = DAT_00417430;
  uVar4 = (**(code **)(*(int *)*DAT_00417430 + 0xc))
                    ((int *)*DAT_00417430,local_40[0],DAT_00417434,0x6d);
  iVar3 = FUN_0030ecfc(local_34 + 1,auStack_38,uVar4,local_40[0]);
  if (iVar3 < 0) {
    FUN_003351b4();
  }
  local_240[0] = local_40[0];
  FUN_00420f58(1,param_1 + 3,0x6000,uVar4);
  if ((local_34[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_34[1] & 0xfffffffe);
    local_34[1] = 0;
  }
  (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
  FUN_00301568(param_1[2],param_1[3]);
  FUN_00301568(param_1[2],0xffffffff);
  (**(code **)(*param_1 + 4))(param_1);
  FUN_0041f5dc(param_1[2]);
  (**(code **)(*param_1 + 8))(param_1);
  if ((local_34[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_34[1] & 0xfffffffe);
  }
  return;
}
