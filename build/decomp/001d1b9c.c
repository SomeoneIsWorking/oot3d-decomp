// OoT3D decomp @ 001d1b9c  name=FUN_001d1b9c  size=600

void FUN_001d1b9c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 uStack_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 uStack_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  undefined4 uStack_30;

  iVar5 = *(int *)(param_2 + 0xf8);
  iVar2 = FUN_0037571c(param_2);
  bVar6 = iVar2 != 0;
  puVar3 = (ushort *)0x0;
  if (bVar6) {
    puVar3 = *(ushort **)(DAT_001d1df4 + param_2);
  }
  bVar7 = puVar3 != (ushort *)0x0;
  if (bVar6 && bVar7) {
    puVar3 = (ushort *)(uint)*puVar3;
  }
  if ((bVar6 && bVar7) && puVar3 != (ushort *)0x1) {
    FUN_00372224(&local_5c,param_1 + 0x148);
    FUN_00372224(&local_8c,param_1 + 0x148);
    uVar9 = DAT_001d1df8;
    iVar2 = FUN_003695f8();
    uVar1 = DAT_001d1dfc;
    iVar4 = 0;
    if (iVar2 != 0) {
      uVar9 = DAT_001d1dfc;
    }
    do {
      local_8c = local_5c;
      local_88 = fStack_58;
      local_84 = fStack_54;
      uStack_80 = uStack_50;
      local_7c = fStack_4c;
      local_78 = fStack_48;
      local_74 = local_44;
      uStack_70 = uStack_40;
      local_6c = fStack_3c;
      local_68 = fStack_38;
      local_64 = local_34;
      uStack_60 = uStack_30;
      iVar2 = param_1 + iVar4 * 4;
      local_98 = *(undefined4 *)(iVar2 + 0x1d4);
      local_94 = *(undefined4 *)(iVar2 + 0x214);
      local_90 = uVar1;
      FUN_00372070(&local_8c,&local_8c,&local_98);
      fVar8 = *(float *)(iVar2 + 0x294) * *(float *)(DAT_001d1e00 + (iVar5 + iVar4 & 3U) * 4);
      local_8c = local_8c * fVar8;
      local_7c = local_7c * fVar8;
      local_6c = local_6c * fVar8;
      local_88 = local_88 * fVar8;
      local_78 = local_78 * fVar8;
      local_68 = local_68 * fVar8;
      local_84 = local_84 * fVar8;
      local_74 = local_74 * fVar8;
      local_64 = local_64 * fVar8;
      FUN_00371fac(&local_8c,param_2 + 0x2fc);
      if (*(int *)(iVar2 + 0x318) != 0) {
        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x318) + 0xc) + 0xc) = uVar9;
        *(undefined1 *)(*(int *)(iVar2 + 0x318) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar2 + 0x318),&local_8c);
        FUN_00372170(*(undefined4 *)(iVar2 + 0x318),0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
    if (*(int *)(param_1 + 0x358) != 0) {
      uStack_80 = uStack_50;
      uStack_70 = uStack_40;
      uStack_60 = uStack_30;
      local_8c = local_5c * DAT_001d1e04;
      local_7c = fStack_4c * DAT_001d1e04;
      local_6c = fStack_3c * DAT_001d1e04;
      local_88 = fStack_58 * DAT_001d1e04;
      local_78 = fStack_48 * DAT_001d1e04;
      local_68 = fStack_38 * DAT_001d1e04;
      local_84 = fStack_54 * DAT_001d1e04;
      local_74 = local_44 * DAT_001d1e04;
      local_64 = local_34 * DAT_001d1e04;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x358) + 0xc) + 0xc) = uVar9;
      *(undefined1 *)(*(int *)(param_1 + 0x358) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x358),&local_8c);
      FUN_00372170(*(undefined4 *)(param_1 + 0x358),0);
    }
  }
  return;
}
