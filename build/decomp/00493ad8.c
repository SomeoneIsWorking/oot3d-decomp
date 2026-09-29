// OoT3D decomp @ 00493ad8  name=FUN_00493ad8  size=184

void FUN_00493ad8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  piVar1 = DAT_00493b90;
  iVar2 = 0;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)*DAT_00493b90;
    local_30 = puVar3[3];
    uStack_2c = puVar3[4];
    local_28 = puVar3[5];
    local_24 = puVar3[6];
    local_20 = puVar3[7];
    local_3c._1_3_ = (undefined3)((uint)*puVar3 >> 8);
    local_3c = CONCAT31(local_3c._1_3_,5);
    local_3c = local_3c & 0xffffff;
    local_38 = param_1;
    local_34 = param_2;
    iVar2 = FUN_0030dd7c();
    iVar2 = FUN_002c188c(iVar2 + 0x58,&local_3c);
  }
  if (-1 < iVar2) {
    puVar3 = (undefined4 *)*piVar1;
    uStack_2c = puVar3[4];
    local_28 = puVar3[5];
    local_24 = puVar3[6];
    local_3c._1_3_ = (undefined3)((uint)*puVar3 >> 8);
    local_3c = CONCAT31(local_3c._1_3_,1);
    local_20 = 0;
    local_38 = param_1;
    local_34 = param_2;
    local_30 = param_4;
    iVar2 = FUN_0030dd7c();
    FUN_002c188c(iVar2 + 0x58,&local_3c);
  }
  return;
}
