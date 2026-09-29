// OoT3D decomp @ 002e6ed0  name=FUN_002e6ed0  size=372

void FUN_002e6ed0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  FUN_002f9a1c(*(undefined4 *)(param_1 + 0x10c));
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x10);
  uVar3 = FUN_002f9a0c(*(undefined4 *)(param_1 + 0x10c));
  FUN_0036759c(*(undefined4 *)(param_1 + 4),uVar3,uVar2);
  uVar2 = FUN_002fc3f0(*(undefined4 *)(param_1 + 0x10c),0);
  uVar3 = FUN_002f9a00(*(undefined4 *)(param_1 + 0x10c));
  FUN_00317d1c(*(undefined4 *)(param_1 + 4),uVar3,uVar2);
  uVar2 = FUN_002fc3e4(*(undefined4 *)(param_1 + 0x10c),0);
  uVar3 = FUN_002f99f4(*(undefined4 *)(param_1 + 0x10c));
  FUN_002f9934(*(undefined4 *)(param_1 + 4),uVar3,uVar2);
  uVar2 = DAT_002e7048;
  if (((*DAT_002e7044 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_002e7044), puVar1 = DAT_002e7050, uVar3 = DAT_002e704c, iVar4 != 0))
  {
    *DAT_002e7050 = DAT_002e704c;
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
  FUN_00372224(auStack_44,DAT_002e7050);
  local_50 = uVar2;
  local_4c = uVar2;
  local_48 = uVar2;
  (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),auStack_44,auStack_44,&local_50)
  ;
  return;
}
