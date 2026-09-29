// OoT3D decomp @ 0037a590  name=FUN_0037a590  size=672

void FUN_0037a590(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined1 auStack_48 [48];

  FUN_00372224(auStack_48,param_1 + 0x148);
  FUN_00357fd0(*(undefined4 *)(DAT_0037a830 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  FUN_0033e2a0(param_2,param_1,*(undefined4 *)(param_1 + 0x1dc));
  if ((*(byte *)(param_1 + 0x1b4) & 0x10) != 0) {
    if (*(int *)(param_1 + 0x1d4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),auStack_48);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
    }
    if (*(int *)(param_1 + 0x1d8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1d8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d8),auStack_48);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d8),0);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x1b4);
  if (((bVar1 & 0x38) != 0 && (bVar1 & 2) != 0) && (bVar1 & 1) != 0) {
    FUN_00372224(&local_78,param_1 + 0x148);
    uVar5 = DAT_0037a834;
    iVar3 = FUN_003695f8();
    if (iVar3 != 0) {
      uVar5 = DAT_0037a838;
    }
    iVar3 = FUN_00372d64(param_2 + 0x208c,DAT_0037a83c,1);
    fVar2 = DAT_0037a840;
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(iVar3 + 0x2c);
    }
    FUN_003679d0(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + fVar2,
                 *(undefined4 *)(param_1 + 0x30),&local_78,param_1 + 0xbc);
    fVar2 = DAT_0037a844;
    fVar4 = DAT_0037a84c + *(float *)(param_1 + 0x1c8) * DAT_0037a848;
    local_78 = local_78 * DAT_0037a844;
    local_68 = local_68 * DAT_0037a844;
    local_58 = local_58 * DAT_0037a844;
    local_74 = local_74 * fVar4;
    local_64 = local_64 * fVar4;
    local_54 = local_54 * fVar4;
    local_70 = local_70 * DAT_0037a844;
    local_60 = local_60 * DAT_0037a844;
    local_50 = local_50 * DAT_0037a844;
    if (*(int *)(param_1 + 0x1cc) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0xc) = uVar5;
      *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1cc),&local_78);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1cc),0);
    }
    if (iVar3 != 0) {
      FUN_003679d0(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c),
                   *(undefined4 *)(iVar3 + 0x30),&local_78,DAT_0037a850);
      local_78 = local_78 * fVar2;
      local_68 = local_68 * fVar2;
      local_58 = local_58 * fVar2;
      local_74 = local_74 * fVar2;
      local_64 = local_64 * fVar2;
      local_54 = local_54 * fVar2;
      local_70 = local_70 * fVar2;
      local_60 = local_60 * fVar2;
      local_50 = local_50 * fVar2;
      if (*(int *)(param_1 + 0x1d0) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x1d0) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x1d0),&local_78);
        FUN_00372170(*(undefined4 *)(param_1 + 0x1d0),0);
      }
    }
  }
  return;
}
