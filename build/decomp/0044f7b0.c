// OoT3D decomp @ 0044f7b0  name=FUN_0044f7b0  size=580

void FUN_0044f7b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 auStack_17c [4];
  undefined2 local_178;
  undefined2 local_176;
  undefined4 local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_138;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  FUN_00343280(param_1,0x1c4);
  FUN_00371738(&local_148,DAT_0044f9f4,0x118);
  local_158 = *DAT_0044f9f8;
  uStack_154 = DAT_0044f9f8[1];
  uStack_150 = DAT_0044f9f8[2];
  uStack_14c = DAT_0044f9f8[3];
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  local_148 = DAT_0044f9fc;
  local_144 = DAT_0044f9fc + 0x70;
  local_140 = DAT_0044f9fc + 0x30;
  local_138 = DAT_0044f9fc + -8;
  FUN_00348b90(param_1,&local_148);
  FUN_002deb7c(1,param_1 + 0x1bc);
  iVar3 = DAT_0044fa00;
  FUN_002fb074(DAT_0044fa00,*(undefined4 *)(param_1 + 0x1bc));
  FUN_0046fcf8(iVar3,DAT_0044fa04,&local_158);
  FUN_002deb68(iVar3,DAT_0044fa08,0x2600);
  FUN_002deb68(iVar3,0x2800,0x2600);
  iVar1 = DAT_0044fa0c;
  FUN_002deb68(iVar3,DAT_0044fa10,DAT_0044fa0c);
  FUN_002deb68(iVar3,DAT_0044fa14,iVar1);
  FUN_002deb68(iVar3,iVar1 + 0xd,0);
  uVar2 = DAT_0044fa18;
  FUN_002de990(iVar3,0,DAT_0044fa18,0x200,0x200,0,DAT_0044fa18,iVar3 + 0x620,0);
  local_194 = 0;
  local_190 = 0;
  local_18c = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  FUN_002fb074(iVar3,*(undefined4 *)(param_1 + 0x1bc));
  FUN_002de76c(iVar3,DAT_0044fa1c,auStack_17c);
  local_178 = 0x200;
  local_176 = 0x200;
  local_174 = 0;
  local_170 = uVar2;
  local_16c = iVar3 + 0x620;
  FUN_00466d38(param_1,0,&local_194);
  if (((*DAT_0044fa20 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0044fa20), iVar3 != 0)) {
    FUN_0036788c(DAT_0044fa24);
  }
  uVar4 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_0044fa30 + 0x47c),param_1,0);
  uVar2 = DAT_0044fa34;
  *(undefined4 *)(param_1 + 0x1b8) = uVar4;
  local_30 = uVar2;
  local_2c = uVar2;
  local_28 = uVar2;
  local_24 = uVar2;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x1b8),0,&local_30);
  local_30 = DAT_0044fa38;
  local_2c = DAT_0044fa3c;
  local_28 = DAT_0044fa40;
  local_24 = uVar2;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x1b8),1,&local_30);
  return;
}
