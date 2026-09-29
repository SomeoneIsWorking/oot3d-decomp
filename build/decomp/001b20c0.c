// OoT3D decomp @ 001b20c0  name=FUN_001b20c0  size=636

void FUN_001b20c0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;

  uStack_34 = *(undefined4 *)(DAT_001b233c + 0xc);
  local_40 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x7d6),(byte)(in_fpscr >> 0x15) & 3);
  local_40 = local_40 * DAT_001b2340;
  local_3c = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x7d7),(byte)(in_fpscr >> 0x15) & 3);
  local_3c = local_3c * DAT_001b2340;
  local_38 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x7d8),(byte)(in_fpscr >> 0x15) & 3);
  local_38 = local_38 * DAT_001b2340;
  FUN_00358778(*(undefined4 *)(param_1 + 0x1e4),1,4,&local_40,1);
  FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x7b8,*(undefined1 *)(param_1 + 0x7d6),
               *(undefined1 *)(param_1 + 0x7d7),*(undefined1 *)(param_1 + 0x7d8),
               *(undefined1 *)(param_1 + 0x7d9),0);
  FUN_0035e240(param_1 + 0x1bc,param_1 + 0x148,0,0,param_1,0);
  uVar1 = DAT_001b2344;
  iVar4 = FUN_003695f8();
  fVar3 = DAT_001b2350;
  uVar2 = DAT_001b234c;
  if (iVar4 != 0) {
    uVar1 = DAT_001b2348;
  }
  iVar4 = 0;
  do {
    iVar5 = param_1 + iVar4 * 0x2c;
    local_64 = *(undefined4 *)(iVar5 + 0x7e4);
    local_54 = *(undefined4 *)(iVar5 + 0x7e8);
    local_44 = *(undefined4 *)(iVar5 + 0x7ec);
    local_68 = 0.0;
    local_6c = 0.0;
    local_70 = 1.0;
    local_60 = 0.0;
    local_5c = 1.0;
    local_58 = 0.0;
    local_50 = 0.0;
    local_4c = 0.0;
    local_48 = 1.0;
    FUN_00371fac(&local_70,param_2 + 0x2fc);
    if (*(char *)(iVar5 + 0x7e0) != '\0') {
      fVar6 = (float)FUN_003727f0(uVar2);
      fVar7 = (float)FUN_00372674(uVar2);
      fVar8 = local_70 * fVar6;
      local_70 = local_70 * fVar7 - local_68 * fVar6;
      local_68 = fVar8 + local_68 * fVar7;
      fVar8 = local_60 * fVar6;
      local_60 = local_60 * fVar7 - local_58 * fVar6;
      local_58 = fVar8 + local_58 * fVar7;
      fVar8 = local_50 * fVar6;
      local_50 = local_50 * fVar7 - local_48 * fVar6;
      local_48 = fVar8 + local_48 * fVar7;
    }
    iVar5 = param_1 + iVar4 * 4;
    local_70 = local_70 * fVar3;
    local_60 = local_60 * fVar3;
    local_50 = local_50 * fVar3;
    local_6c = local_6c * fVar3;
    local_5c = local_5c * fVar3;
    local_4c = local_4c * fVar3;
    *(undefined1 *)(*(int *)(iVar5 + 0x890) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(iVar5 + 0x890),&local_70);
    *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x890) + 0xc) + 0xc) = uVar1;
    FUN_00372170(*(undefined4 *)(iVar5 + 0x890),0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}
