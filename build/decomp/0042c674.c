// OoT3D decomp @ 0042c674  name=FUN_0042c674  size=744

/* WARNING: Type propagation algorithm not settling */

void FUN_0042c674(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint local_38 [2];
  undefined1 auStack_30 [4];
  int local_2c [6];

  pcVar2 = DAT_0042c95c;
  cVar1 = '\0';
  if (*DAT_0042c95c != '\0') {
    cVar1 = *(char *)((int)param_1 + 10);
  }
  if ((*DAT_0042c95c != '\0' && cVar1 != '\0') && (iVar3 = FUN_004476b8(param_1[0x45]), iVar3 != 0))
  {
    if (param_1[4] == 0) {
      uVar4 = FUN_00447844(iVar3);
      param_1[1] = uVar4;
      uVar4 = param_1[3];
      if (uVar4 == 0) {
        uVar4 = FUN_0035010c();
      }
      else if (uVar4 == 1) {
        uVar4 = FUN_002f1424();
      }
      else if (uVar4 == 2) {
        uVar4 = FUN_00347248();
      }
      else {
        if (uVar4 != 3) goto LAB_0042c70c;
        uVar4 = FUN_002f1434();
      }
      param_1[4] = uVar4;
    }
LAB_0042c70c:
    FUN_0034338c(param_1[4],iVar3,param_1[1]);
    FUN_002f13d0(iVar3);
    return;
  }
  local_2c[1] = 0;
  local_2c[0] = *DAT_0042c960;
  *(int *)((int)local_2c + *(int *)(local_2c[0] + -0x30)) = DAT_0042c960[3];
  local_2c[4] = 0;
  local_2c[5] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  uVar4 = FUN_0030d580(local_2c + 1,param_1 + 5,1);
  *param_1 = uVar4;
  if ((int)uVar4 < 0) {
    if ((((uVar4 & 0x3fc00) == 0x4400) && (99 < (uVar4 & 0x3ff))) && ((uVar4 & 0x3ff) < 0xb4))
    goto joined_r0x0042c91c;
  }
  else {
    if (param_1[4] == 0) {
      if (param_1[3] != 4) {
        uVar4 = FUN_00304714(local_2c + 1,local_38);
        *param_1 = uVar4;
        if (((int)uVar4 < 0) && ((int)uVar4 < 0)) {
          FUN_003351b4();
        }
        param_1[1] = local_38[0];
      }
      uVar4 = param_1[3];
      if (uVar4 == 0) {
        uVar4 = FUN_0035010c(param_1[1]);
      }
      else if (uVar4 == 1) {
        uVar4 = FUN_002f1424(param_1[1]);
      }
      else if (uVar4 == 2) {
        uVar4 = FUN_00347248(param_1[1]);
      }
      else {
        if (uVar4 != 3) goto LAB_0042c844;
        uVar4 = FUN_002f1434(param_1[1]);
      }
      param_1[4] = uVar4;
    }
LAB_0042c844:
    uVar4 = FUN_0030ecfc(local_2c + 1,auStack_30,param_1[4],param_1[1]);
    *param_1 = uVar4;
    if ((local_2c[1] & 0xfffffffeU) != 0) {
      FUN_0030d614(local_2c[1] & 0xfffffffe);
      local_2c[1] = 0;
    }
    bVar5 = -1 < (int)*param_1;
    cVar1 = '\0';
    if (bVar5) {
      cVar1 = *pcVar2;
    }
    bVar6 = cVar1 != '\0';
    if (bVar5 && bVar6) {
      cVar1 = *(char *)((int)param_1 + 10);
    }
    if (((bVar5 && bVar6) && cVar1 != '\0') &&
       (iVar3 = FUN_00447748(param_1[1],param_1[0x45]), iVar3 != 0)) {
      FUN_0034338c(iVar3,param_1[4],param_1[1]);
      FUN_002f13d0(iVar3);
    }
  }
  if (((int)*param_1 < 0) && ((int)*param_1 < 0)) {
    FUN_003351b4();
  }
joined_r0x0042c91c:
  if ((local_2c[1] & 0xfffffffeU) == 0) {
    return;
  }
  FUN_0030d614(local_2c[1] & 0xfffffffe);
  return;
}
