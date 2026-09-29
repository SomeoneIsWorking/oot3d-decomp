// OoT3D decomp @ 0043fdf4  name=FUN_0043fdf4  size=908

void FUN_0043fdf4(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 auStack_58 [48];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;

  local_28 = *DAT_00440180;
  uStack_24 = DAT_00440180[1];
  uStack_20 = DAT_00440180[2];
  uStack_1c = DAT_00440180[3];
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_002e78f8(param_1,param_1 + 0x1c,*(undefined4 *)(param_1 + 0x498),&local_28);
    FUN_002e78f8(param_1,param_1 + 0x1fc,*(undefined4 *)(param_1 + 0x494),&local_28);
    FUN_002e78f8(param_1,param_1 + 0x58,*(undefined4 *)(param_1 + 0x494),&local_28);
    FUN_002e78f8(param_1,param_1 + 0x238,*(undefined4 *)(param_1 + 0x494),&local_28);
    FUN_002e78f8(param_1,param_1 + 0x94,*(undefined4 *)(param_1 + 0x494),&local_28);
    FUN_002e78f8(param_1,param_1 + 0xd0,*(undefined4 *)(param_1 + 0x494),&local_28);
    fVar1 = DAT_00440184;
    if (DAT_00440184 < *(float *)(param_1 + 0x144)) {
      FUN_002e78f8(param_1,param_1 + 0x10c,*(undefined4 *)(param_1 + 0x494),&local_28);
    }
    FUN_002e78f8(param_1,param_1 + 0x148,*(undefined4 *)(param_1 + 0x494),&local_28);
    FUN_002e78f8(param_1,param_1 + 0x184,*(undefined4 *)(param_1 + 0x494),&local_28);
    FUN_002e78f8(param_1,param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x494),&local_28);
    if (*(char *)(param_1 + 7) != '\0') {
      FUN_002e78f8(param_1,param_1 + 0x274,*(undefined4 *)(param_1 + 0x494),&local_28);
      FUN_002e78f8(param_1,param_1 + 0x2b0,*(undefined4 *)(param_1 + 0x494),&local_28);
      FUN_002e78f8(param_1,param_1 + 0x2ec,*(undefined4 *)(param_1 + 0x494),&local_28);
      FUN_002e78f8(param_1,param_1 + 0x328,*(undefined4 *)(param_1 + 0x494),&local_28);
      FUN_002e78f8(param_1,param_1 + 0x364,*(undefined4 *)(param_1 + 0x494),&local_28);
      FUN_002e78f8(param_1,param_1 + 0x3a0,*(undefined4 *)(param_1 + 0x494),&local_28);
      FUN_002e78f8(param_1,param_1 + 0x3dc,*(undefined4 *)(param_1 + 0x494),&local_28);
      FUN_002e78f8(param_1,param_1 + 0x418,*(undefined4 *)(param_1 + 0x494),&local_28);
    }
    if (*(char *)(param_1 + 0xf) != '\0') {
      if (((*DAT_00440188 & 1) == 0) &&
         (iVar5 = FUN_003679b4(DAT_00440188), puVar3 = DAT_00440190, uVar2 = DAT_0044018c,
         iVar5 != 0)) {
        *DAT_00440190 = DAT_0044018c;
        puVar3[1] = fVar1;
        puVar3[2] = fVar1;
        puVar3[3] = fVar1;
        puVar3[4] = fVar1;
        puVar3[5] = uVar2;
        puVar3[6] = fVar1;
        puVar3[7] = fVar1;
        puVar3[8] = fVar1;
        puVar3[9] = fVar1;
        puVar3[10] = uVar2;
        puVar3[0xb] = fVar1;
      }
      FUN_00372224(auStack_58,DAT_00440190);
      iVar5 = 0;
      local_64 = fVar1;
      local_60 = fVar1;
      local_5c = fVar1;
      do {
        piVar6 = *(int **)(param_1 + iVar5 * 4 + 0x5c4);
        (**(code **)(*piVar6 + 8))(piVar6,auStack_58,auStack_58,&local_64);
        puVar4 = DAT_00440194;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      if (((*DAT_00440194 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00440194), iVar5 != 0)) {
        FUN_0036788c(DAT_00440198);
      }
      uVar2 = DAT_004401a4;
      FUN_00328350(DAT_004401a4,6,*(undefined4 *)(param_1 + 0x5c8),1);
      if (((*puVar4 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00440194), iVar5 != 0)) {
        FUN_0036788c(DAT_00440198);
      }
      FUN_00328350(uVar2,6,*(undefined4 *)(param_1 + 0x5c4),1);
    }
    return;
  }
  FUN_002e78f8(param_1,param_1 + 0x1c,*(undefined4 *)(param_1 + 0x498),&local_28);
  FUN_002e78f8(param_1,param_1 + 0x10c,*(undefined4 *)(param_1 + 0x494),&local_28);
  return;
}
