// OoT3D decomp @ 0030d580  name=FUN_0030d580  size=144

int FUN_0030d580(undefined4 *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_24;
  short *psStack_20;
  int local_1c;
  undefined4 uStack_18;
  
  puVar2 = (undefined4 *)FUN_002fa834(param_2);
  if (puVar2 == (undefined4 *)0x0) {
    return DAT_0030d610;
  }
  do {
    psStack_20 = param_2 + 1;
    sVar1 = *param_2;
    param_2 = psStack_20;
  } while (sVar1 != 0x3a);
  uStack_24 = 4;
  iVar3 = FUN_003062f8(psStack_20);
  local_1c = (iVar3 + 1) * 2;
  iVar3 = (**(code **)*puVar2)(puVar2,&uStack_18,&uStack_24,param_3);
  if (-1 < iVar3) {
    *param_1 = uStack_18;
    iVar3 = 0;
  }
  return iVar3;
}

