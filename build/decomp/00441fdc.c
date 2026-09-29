// OoT3D decomp @ 00441fdc  name=FUN_00441fdc  size=328

void FUN_00441fdc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  FUN_002f9a1c(param_1[2]);
  uVar2 = *(undefined4 *)(param_1[2] + 0x10);
  uVar3 = FUN_002f9a0c(param_1[2]);
  FUN_0036759c(*param_1,uVar3,uVar2);
  uVar2 = FUN_002fc3f0(param_1[2],0);
  uVar3 = FUN_002f9a00(param_1[2]);
  FUN_00317d1c(*param_1,uVar3,uVar2);
  uVar2 = DAT_00442128;
  if (((*DAT_00442124 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00442124), puVar1 = DAT_00442130, uVar3 = DAT_0044212c, iVar4 != 0))
  {
    *DAT_00442130 = DAT_0044212c;
    puVar1[1] = uVar2;
    puVar1[2] = uVar2;
    puVar1[3] = uVar2;
    puVar1[4] = uVar2;
    puVar1[5] = uVar3;
    puVar1[6] = uVar2;
    puVar1[7] = uVar2;
    puVar1[8] = uVar2;
    puVar1[9] = uVar2;
    puVar1[10] = uVar3;
    puVar1[0xb] = uVar2;
  }
  FUN_00372224(auStack_44,DAT_00442130);
  local_50 = uVar2;
  local_4c = uVar2;
  local_48 = uVar2;
  (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],auStack_44,auStack_44,&local_50);
  return;
}
