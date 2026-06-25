// OoT3D decomp @ 004bac24  name=FUN_004bac24  size=160

void FUN_004bac24(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((int)param_1[2] < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1[2] & 1;
  }
  if (uVar2 == 1) {
    *param_2 = **(undefined4 **)param_1[1];
  }
  iVar3 = param_1[2];
  if ((int)uVar2 < iVar3) {
    do {
      puVar4 = param_2 + uVar2;
      iVar3 = uVar2 * 4;
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 2;
      *puVar4 = **(undefined4 **)(param_1[1] + iVar1);
      puVar4[1] = **(undefined4 **)(param_1[1] + iVar3 + 4);
      iVar3 = param_1[2];
    } while ((int)uVar2 < iVar3);
  }
  FUN_0030dbd4(*param_1,param_2,iVar3,(int)*(char *)(param_1 + 3),*(undefined4 *)param_1[4],
               ((undefined4 *)param_1[4])[1]);
  return;
}

