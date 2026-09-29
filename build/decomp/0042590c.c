// OoT3D decomp @ 0042590c  name=FUN_0042590c  size=404

void FUN_0042590c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  puVar1 = DAT_00425aa0;
  if (DAT_00425aa0[5] != 0) {
    if (DAT_00425aa0[3] != 0) {
      FUN_002f94a8();
    }
    FUN_002f9a1c(puVar1[2]);
    uVar3 = *(undefined4 *)(puVar1[2] + 0x10);
    uVar4 = FUN_002f9a0c(puVar1[2]);
    FUN_0036759c(*puVar1,uVar4,uVar3);
    uVar3 = FUN_002fc3f0(puVar1[2],0);
    uVar4 = FUN_002f9a00(puVar1[2]);
    FUN_00317d1c(*puVar1,uVar4,uVar3);
    uVar3 = FUN_002fc3e4(puVar1[2],0);
    uVar4 = FUN_002f99f4(puVar1[2]);
    FUN_002f9934(*puVar1,uVar4,uVar3);
    uVar3 = DAT_00425aa8;
    if (((*DAT_00425aa4 & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_00425aa4), puVar2 = DAT_00425ab0, uVar4 = DAT_00425aac, iVar5 != 0)
       ) {
      *DAT_00425ab0 = DAT_00425aac;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2[4] = uVar3;
      puVar2[5] = uVar4;
      puVar2[6] = uVar3;
      puVar2[7] = uVar3;
      puVar2[8] = uVar3;
      puVar2[9] = uVar3;
      puVar2[10] = uVar4;
      puVar2[0xb] = uVar3;
    }
    FUN_00372224(auStack_44,DAT_00425ab0);
    local_50 = uVar3;
    local_4c = uVar3;
    local_48 = uVar3;
    (**(code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],auStack_44,auStack_44,&local_50);
    if (puVar1[4] != 0) {
      FUN_002f7684();
    }
  }
  return;
}
