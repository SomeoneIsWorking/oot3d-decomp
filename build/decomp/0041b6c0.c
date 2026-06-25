// OoT3D decomp @ 0041b6c0  name=FUN_0041b6c0  size=276

undefined4 FUN_0041b6c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined auStack_794 [1920];
  int local_14;
  
  if (*param_1 == 0) {
    FUN_002fe0f0(param_1,param_1 + 1,param_1,0x20);
  }
  else {
    local_14 = 0;
    FUN_00350820(auStack_794,DAT_0041b7d4,0x3c,0x20);
    FUN_002fe0f0(param_1,auStack_794,&local_14,0x20);
    iVar1 = *param_1;
    if (0x20 - local_14 <= *param_1) {
      iVar1 = 0x20 - local_14;
    }
    *param_1 = iVar1;
    FUN_00371738(param_1 + local_14 * 0xf + 1,param_1 + 1,iVar1 * 0x3c);
    FUN_00371738(param_1 + 1,auStack_794,local_14 * 0x3c);
    *param_1 = *param_1 + local_14;
  }
  if (param_1[0x533] == -1 && param_1[0x532] == -1) {
    return 0;
  }
  iVar1 = param_1[0x1f9];
  iVar2 = param_1[0x1fa];
  iVar3 = param_1[0x1fb];
  iVar4 = param_1[0x1fc];
  iVar5 = param_1[0x1fd];
  iVar6 = param_1[0x1fe];
  *param_2 = param_1[0x1f8];
  param_2[1] = iVar1;
  param_2[2] = iVar2;
  param_2[3] = iVar3;
  param_2[4] = iVar4;
  param_2[5] = iVar5;
  param_2[6] = iVar6;
  iVar1 = param_1[0x200];
  iVar2 = param_1[0x201];
  iVar3 = param_1[0x202];
  iVar4 = param_1[0x203];
  iVar5 = param_1[0x204];
  iVar6 = param_1[0x205];
  iVar7 = param_1[0x206];
  param_2[7] = param_1[0x1ff];
  param_2[8] = iVar1;
  param_2[9] = iVar2;
  param_2[10] = iVar3;
  param_2[0xb] = iVar4;
  param_2[0xc] = iVar5;
  param_2[0xd] = iVar6;
  param_2[0xe] = iVar7;
  return 1;
}

