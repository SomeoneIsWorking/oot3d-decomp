// OoT3D decomp @ 00435cfc  name=FUN_00435cfc  size=188

int FUN_00435cfc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 ***local_24;
  undefined4 local_20;

  iVar1 = DAT_00435db8;
  local_24 = &local_24;
  local_28 = 1;
  local_20 = 1;
  local_34 = *(undefined4 *)(DAT_00435db8 + 0xc);
  iVar4 = FUN_00449fec(&local_34,&local_30,param_2,1,local_24,1);
  uVar3 = local_2c;
  uVar2 = local_30;
  if (-1 < iVar4) {
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    puVar5 = (undefined4 *)FUN_0030e6a8(DAT_00435dbc);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = DAT_00435dc0;
      puVar5[1] = uVar6;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
    }
    *param_1 = puVar5;
    iVar4 = DAT_00435dc4;
    if (puVar5 != (undefined4 *)0x0) {
      iVar4 = 0;
    }
    if (-1 < iVar4) {
      return 0;
    }
    local_34 = *(undefined4 *)(iVar1 + 0xc);
    FUN_0030e5d8(&local_34,0,local_30,local_2c);
  }
  return iVar4;
}
