// OoT3D decomp @ 00334004  name=FUN_00334004  size=456

void FUN_00334004(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 auStack_60 [48];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;

  uVar1 = DAT_003341cc;
  local_24 = *(float *)(param_1 + 0x58c);
  local_30 = DAT_003341cc;
  local_2c = DAT_003341cc;
  local_28 = DAT_003341cc;
  iVar5 = *(int *)(param_1 + 0x510);
  local_20 = *(float *)(param_1 + 0x55c) * DAT_003341d0;
  local_1c = *(float *)(param_1 + 0x560) * DAT_003341d4;
  local_18 = DAT_003341cc;
  *(float *)(iVar5 + 0x48) = local_20;
  *(float *)(iVar5 + 0x4c) = local_1c;
  *(undefined4 *)(iVar5 + 0x50) = uVar1;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x510),0,&local_30);
  fVar2 = DAT_003341dc;
  if (((*DAT_003341d8 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003341d8), puVar3 = DAT_003341e0, iVar5 != 0)) {
    *DAT_003341e0 = uVar1;
    puVar3[1] = fVar2;
    puVar3[2] = fVar2;
    puVar3[3] = fVar2;
    puVar3[4] = fVar2;
    puVar3[5] = uVar1;
    puVar3[6] = fVar2;
    puVar3[7] = fVar2;
    puVar3[8] = fVar2;
    puVar3[9] = fVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = fVar2;
  }
  FUN_00372224(auStack_60,DAT_003341e0);
  iVar5 = 0x3b;
  local_6c = fVar2;
  local_68 = fVar2;
  local_64 = fVar2;
  do {
    piVar4 = *(int **)(param_1 + iVar5 * 4 + 0x424);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,auStack_60,auStack_60,&local_6c);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x3d);
  if (local_24 != fVar2) {
    (**(code **)(**(int **)(param_1 + 0x510) + 0xc))();
  }
  iVar5 = *(int *)(param_1 + 0x110);
  bVar6 = iVar5 == 0;
  if (bVar6) {
    iVar5 = *(int *)(param_1 + 0x114);
  }
  bVar7 = bVar6 && iVar5 == 0;
  if (bVar6 && iVar5 == 0) {
    bVar7 = *(int *)(param_1 + 0x104) == 1;
  }
  if (bVar7) {
    (**(code **)(**(int **)(param_1 + 0x514) + 0xc))();
  }
  return;
}
