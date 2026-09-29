// OoT3D decomp @ 00403a94  name=FUN_00403a94  size=404

undefined4
FUN_00403a94(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,
            undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;

  bVar1 = false;
  iVar4 = *(int *)(param_2 + 4);
  local_2c = 0xffffffff;
  local_28 = 0;
  iVar2 = FUN_0030b8c8(*(undefined4 *)(param_1 + 0xa4),*param_3);
  local_2c = *(undefined4 *)(param_2 + 0x9c);
  local_28 = iVar2;
  if (iVar2 == 0) {
    if (iVar4 == 0) {
      return 7;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa4);
    if (iVar3 != 0) {
      iVar3 = iVar3 + 0xc;
    }
    iVar3 = FUN_0030b804(iVar2,*param_4,*(undefined4 *)(param_1 + 4),iVar3);
    if (iVar3 != 0) goto LAB_00403b38;
    if (iVar4 == 0) {
      return 8;
    }
  }
  bVar1 = true;
LAB_00403b38:
  if (param_5 == 0) {
    local_3c = 1;
  }
  else if ((param_5 == 1) || (param_5 != 2)) {
    local_3c = 0;
    param_6 = 0;
  }
  else {
    local_3c = 0;
  }
  local_40 = *param_4;
  local_34 = param_1 + 0x10;
  local_30 = *param_3;
  local_38 = param_6;
  if (bVar1) {
    local_4c = *(undefined4 *)(param_1 + 4);
    local_48 = *(undefined4 *)(param_1 + 0xa4);
    local_44 = &local_2c;
    FUN_004083bc(param_2,&local_4c,&local_40);
  }
  else {
    FUN_004085e8(param_2,iVar2,&local_40);
  }
  fVar5 = (float)VectorSignedToFloat(param_3[4],(byte)(in_fpscr >> 0x15) & 3);
  FUN_0030b7e8(fVar5 * DAT_00403c28,param_2);
  FUN_0030b790(param_2,*(undefined1 *)(param_3 + 5));
  FUN_0030c49c(param_2,*(undefined1 *)((int)param_3 + 0x15));
  FUN_00408374(param_2,*(undefined1 *)(param_4 + 2));
  FUN_00408458(param_2,(int)*(char *)((int)param_4 + 9));
  return 0;
}
