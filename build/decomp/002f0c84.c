// OoT3D decomp @ 002f0c84  name=FUN_002f0c84  size=372

void FUN_002f0c84(undefined4 *param_1)

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
  uVar2 = FUN_002fc3e4(param_1[2],0);
  uVar3 = FUN_002f99f4(param_1[2]);
  FUN_002f9934(*param_1,uVar3,uVar2);
  uVar2 = DAT_002f0dfc;
  if (((*DAT_002f0df8 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_002f0df8), puVar1 = DAT_002f0e04, uVar3 = DAT_002f0e00, iVar4 != 0))
  {
    *DAT_002f0e04 = DAT_002f0e00;
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
  FUN_00372224(auStack_44,DAT_002f0e04);
  local_50 = uVar2;
  local_4c = uVar2;
  local_48 = uVar2;
  (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],auStack_44,auStack_44,&local_50);
  return;
}
