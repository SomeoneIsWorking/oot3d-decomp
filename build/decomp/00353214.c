// OoT3D decomp @ 00353214  name=FUN_00353214  size=168

void FUN_00353214(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  local_2c = *DAT_003532bc;
  uStack_28 = DAT_003532bc[1];
  uStack_24 = DAT_003532bc[2];
  local_44[3] = DAT_003532bc[3];
  uStack_34 = DAT_003532bc[4];
  uStack_30 = DAT_003532bc[5];
  local_44[0] = DAT_003532bc[6];
  local_44[1] = DAT_003532bc[7];
  local_44[2] = DAT_003532bc[8];
  *param_1 = param_4;
  iVar2 = 0;
  do {
    iVar1 = FUN_0036a924(param_2,param_3,(int)(short)local_44[*param_1 + 6],local_44[*param_1 + 3]);
    iVar3 = iVar2 + 1;
    param_1[iVar2 + 2] = iVar1;
    iVar2 = iVar3;
  } while (iVar3 < 4);
  iVar2 = FUN_0036a924(param_2,param_3,(int)(short)local_44[*param_1 + 6],local_44[*param_1]);
  param_1[1] = iVar2;
  return;
}
