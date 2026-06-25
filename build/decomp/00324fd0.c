// OoT3D decomp @ 00324fd0  name=FUN_00324fd0  size=316

undefined4 FUN_00324fd0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined auStack_23c [516];
  undefined4 local_38 [2];
  int local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_20 = 0;
  local_1c = 0;
  local_30[0] = *DAT_0032510c;
  *(int *)((int)local_30 + *(int *)(local_30[0] + -0x30)) = DAT_0032510c[3];
  iVar1 = FUN_00324f44(0,param_1,0);
  uVar2 = iVar1 + 1U;
  if (DAT_00325110 < iVar1 + 1U) {
    uVar2 = DAT_00325110;
  }
  FUN_00324f44(auStack_23c,param_1,uVar2);
  local_20 = 0;
  local_1c = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  uVar2 = FUN_0030d580(local_30 + 1,auStack_23c,1);
  if ((int)uVar2 < 0) {
    if (((((uVar2 & 0x3fc00) != 0x4400) || ((uVar2 & 0x3ff) < 100)) || (0xb3 < (uVar2 & 0x3ff))) &&
       ((int)uVar2 < 0)) {
      FUN_003351b4();
    }
  }
  else {
    iVar1 = FUN_00304714(local_30 + 1,local_38);
    if (iVar1 < 0) {
      FUN_003351b4();
    }
    uVar3 = local_38[0];
    if ((local_30[1] & 0xfffffffeU) != 0) {
      FUN_0030d614(local_30[1] & 0xfffffffe);
      local_30[1] = 0;
    }
  }
  if ((local_30[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_30[1] & 0xfffffffe);
  }
  return uVar3;
}

