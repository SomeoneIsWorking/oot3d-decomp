// OoT3D decomp @ 004ba25c  name=FUN_004ba25c  size=32

void FUN_004ba25c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar1 = DAT_004ba27c;
  uVar2 = DAT_004ba27c[1];
  uVar3 = DAT_004ba27c[2];
  uVar4 = DAT_004ba27c[3];
  puVar5 = DAT_004ba27c + 4;
  *param_1 = *DAT_004ba27c;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  param_1[4] = *puVar5;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  return;
}

