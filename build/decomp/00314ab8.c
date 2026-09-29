// OoT3D decomp @ 00314ab8  name=FUN_00314ab8  size=308

void FUN_00314ab8(float *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;

  uVar1 = DAT_00314bf0;
  iVar5 = DAT_00314bec;
  if (((*(uint *)(DAT_00314bec + 0xc) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00314bec + 0xc), puVar3 = DAT_00314bf8, uVar2 = DAT_00314bf4,
     iVar4 != 0)) {
    *DAT_00314bf8 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  if (((*(uint *)(iVar5 + 8) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_00314bfc), puVar3 = DAT_00314c04, uVar2 = DAT_00314c00, iVar5 != 0))
  {
    *DAT_00314c04 = uVar1;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  uVar2 = DAT_00314c10;
  uVar1 = DAT_00314c0c;
  iVar5 = 4;
  local_28 = *DAT_00314c08;
  local_2c = DAT_00314c08[1];
  do {
    local_24 = (float)FUN_003738a8(uVar1);
    local_24 = local_24 + *param_1;
    local_20 = (float)FUN_003738a8(uVar2);
    local_20 = local_20 + param_1[1];
    local_1c = (float)FUN_003738a8(uVar1);
    local_1c = local_1c + param_1[2];
    FUN_00374280(param_2,&local_24,DAT_00314c04 + -3,DAT_00314c04,&local_28,&local_2c);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}
