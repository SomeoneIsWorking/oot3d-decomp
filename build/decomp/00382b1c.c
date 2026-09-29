// OoT3D decomp @ 00382b1c  name=FUN_00382b1c  size=596

void FUN_00382b1c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;

  FUN_00372224(&local_50,param_1 + 0x148);
  puVar1 = DAT_00382d74;
  if (((*DAT_00382d70 & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_00382d70), uVar2 = DAT_00382d80, uVar7 = DAT_00382d7c, iVar3 != 0)) {
    *puVar1 = DAT_00382d78;
    puVar1[1] = uVar7;
    puVar1[2] = uVar2;
  }
  FUN_00357fd0(*(undefined4 *)(DAT_00382d84 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  FUN_0033e2a0(param_2,param_1,*(undefined4 *)(param_1 + 0x230));
  if ((*(byte *)(param_1 + 0x21e) & 1) != 0) {
    if (*(int *)(param_1 + 0x220) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x220) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x220),&local_50);
      FUN_00372170(*(undefined4 *)(param_1 + 0x220),0);
    }
    FUN_00357750(0,param_1 + 0x1a8,&local_50);
  }
  uVar2 = DAT_00382d8c;
  uVar7 = DAT_00382d88;
  if ((*(byte *)(param_1 + 0x21e) & 2) != 0) {
    FUN_00372224(auStack_80,param_1 + 0x148);
    iVar3 = FUN_003695f8();
    uVar8 = uVar7;
    if (iVar3 != 0) {
      uVar8 = uVar2;
    }
    if (*(int *)(param_1 + 0x224) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x224) + 0xc) + 0xc) = uVar8;
      *(undefined1 *)(*(int *)(param_1 + 0x224) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x224),auStack_80);
      FUN_00372170(*(undefined4 *)(param_1 + 0x224),0);
    }
  }
  if ((*(byte *)(param_1 + 0x21e) & 4) != 0) {
    FUN_003679d0(*puVar1,puVar1[1],puVar1[2],&local_50,DAT_00382d90);
    fVar4 = *(float *)(param_1 + 0x54);
    fVar5 = *(float *)(param_1 + 0x58);
    fVar6 = *(float *)(param_1 + 0x5c);
    local_50 = local_50 * fVar4;
    local_40 = local_40 * fVar4;
    local_30 = local_30 * fVar4;
    local_4c = local_4c * fVar5;
    local_3c = local_3c * fVar5;
    local_2c = local_2c * fVar5;
    local_48 = local_48 * fVar6;
    local_38 = local_38 * fVar6;
    local_28 = local_28 * fVar6;
    if ((*(byte *)(param_1 + 0x21e) & 4) != 0) {
      iVar3 = FUN_003695f8();
      if (iVar3 != 0) {
        uVar7 = uVar2;
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x228) + 0xc) + 0xc) = uVar7;
        *(undefined1 *)(*(int *)(param_1 + 0x228) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x228),&local_50);
        FUN_00372170(*(undefined4 *)(param_1 + 0x228),0);
      }
      if (*(int *)(param_1 + 0x22c) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x22c) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x22c),&local_50);
        FUN_00372170(*(undefined4 *)(param_1 + 0x22c),0);
      }
    }
  }
  return;
}
