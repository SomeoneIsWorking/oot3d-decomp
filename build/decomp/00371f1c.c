// OoT3D decomp @ 00371f1c  name=FUN_00371f1c  size=140

void FUN_00371f1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_64 [16];

  iVar3 = 0;
  do {
    if (param_5 == (undefined4 *)0x0) {
      local_64[iVar3 * 4] = DAT_00371fa8;
      local_64[iVar3 * 4 + 1] = DAT_00371fa8;
      local_64[iVar3 * 4 + 2] = DAT_00371fa8;
      local_64[iVar3 * 4 + 3] = DAT_00371fa8;
    }
    else {
      uVar1 = param_5[1];
      uVar2 = param_5[2];
      uVar4 = param_5[3];
      local_64[iVar3 * 4] = *param_5;
      local_64[iVar3 * 4 + 1] = uVar1;
      local_64[iVar3 * 4 + 2] = uVar2;
      local_64[iVar3 * 4 + 3] = uVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00332a14(param_1,param_2,param_3,param_4,local_64,param_6);
  return;
}
