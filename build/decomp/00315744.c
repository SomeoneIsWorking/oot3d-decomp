// OoT3D decomp @ 00315744  name=FUN_00315744  size=324

void FUN_00315744(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;

  iVar1 = DAT_00315888;
  if (*(char *)(DAT_00315888 + 5) != '\0') {
    FUN_00372224(&local_4c,param_3);
    FUN_00371348(DAT_0031588c,DAT_0031588c,DAT_0031588c,&local_4c,1);
    uVar2 = DAT_00315894;
    FUN_003713fc(DAT_00315898,DAT_00315894,DAT_00315890,&local_4c,1);
    if (*(char *)(iVar1 + 6) != '\0') {
      iVar5 = *(int *)(DAT_0031589c + param_1);
      local_7c = local_4c;
      uStack_78 = uStack_48;
      uStack_74 = uStack_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      local_68 = local_38;
      uStack_64 = uStack_34;
      uStack_60 = uStack_30;
      uStack_5c = uStack_2c;
      uStack_58 = uStack_28;
      local_54 = local_24;
      uStack_50 = uStack_20;
      FUN_003735ac(iVar5,&local_7c,DAT_003158a0);
      FUN_003624c8(&local_7c,iVar1 + 300,0);
      *(undefined1 *)(iVar1 + 6) = 0;
      *(undefined1 *)(iVar1 + 5) = 0;
      *(undefined1 *)(iVar5 + 0x24) = 6;
      *(undefined2 *)(iVar5 + 0x2c) = 0;
      puVar3 = DAT_003158a0;
      uVar4 = DAT_003158a0[1];
      uVar6 = DAT_003158a0[2];
      *(undefined4 *)(iVar5 + 0xc) = *DAT_003158a0;
      *(undefined4 *)(iVar5 + 0x10) = uVar4;
      *(undefined4 *)(iVar5 + 0x14) = uVar6;
      uVar4 = puVar3[1];
      uVar6 = puVar3[2];
      *(undefined4 *)(iVar5 + 0x18) = *puVar3;
      *(undefined4 *)(iVar5 + 0x1c) = uVar4;
      *(undefined4 *)(iVar5 + 0x20) = uVar6;
    }
    FUN_003713fc(DAT_003158a4,uVar2,uVar2,&local_4c,1);
    FUN_00369014(DAT_003158a8,&local_4c,1);
    *(undefined1 *)(*(int *)(param_2 + 0x484) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_2 + 0x484),&local_4c);
    FUN_00372170(*(undefined4 *)(param_2 + 0x484),0);
  }
  return;
}
