// OoT3D decomp @ 0029d22c  name=FUN_0029d22c  size=820

void FUN_0029d22c(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;

  iVar5 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x250) * 4 + 0x248);
  if (iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x250) * 4 + 0x248),
                 (int)param_1 + 0x148);
    FUN_00372170(*(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x250) * 4 + 0x248),0);
  }
  fVar3 = DAT_0029d56c;
  if ('\0' < *(char *)((int)param_1 + 0x1c2)) {
    local_5c = *(float *)((int)param_1 + 0x148);
    local_58 = *(float *)((int)param_1 + 0x14c);
    local_54 = *(float *)((int)param_1 + 0x150);
    local_50 = *(float *)((int)param_1 + 0x154);
    local_4c = *(float *)((int)param_1 + 0x158);
    local_48 = *(float *)((int)param_1 + 0x15c);
    local_44 = *(float *)((int)param_1 + 0x160);
    local_40 = *(undefined4 *)((int)param_1 + 0x164);
    local_3c = *(float *)((int)param_1 + 0x168);
    local_38 = *(float *)((int)param_1 + 0x16c);
    local_34 = *(float *)((int)param_1 + 0x170);
    local_30 = *(undefined4 *)((int)param_1 + 0x174);
  }
  if ((*(int *)((int)param_1 + 0x1bc) == DAT_0029d560) && (*(short *)((int)param_1 + 0xc0) != 0)) {
    if (*(short *)((int)param_1 + 0x1c) == 0) {
      local_68 = DAT_0029d570;
    }
    else {
      local_68 = DAT_0029d574;
    }
    local_60 = (float)DAT_0029d568;
    local_64 = DAT_0029d564;
    local_54 = 0.0;
    local_58 = 0.0;
    local_5c = 1.0;
    local_4c = 0.0;
    local_48 = 1.0;
    local_50 = local_68;
    local_38 = 0.0;
    local_34 = 1.0;
    local_44 = 0.0;
    local_3c = 0.0;
    local_40 = DAT_0029d564;
    local_30 = DAT_0029d568;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0xc0),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * DAT_0029d578;
    if (fVar8 != DAT_0029d56c) {
      fVar6 = (float)FUN_003727f0(fVar8);
      fVar7 = (float)FUN_00372674(fVar8);
      fVar8 = local_58 * fVar6;
      local_58 = local_58 * fVar7 - local_5c * fVar6;
      fVar1 = local_48 * fVar6;
      local_48 = local_48 * fVar7 - local_4c * fVar6;
      fVar2 = local_38 * fVar6;
      local_38 = local_38 * fVar7 - local_3c * fVar6;
      local_5c = local_5c * fVar7 + fVar8;
      local_4c = local_4c * fVar7 + fVar1;
      local_3c = local_3c * fVar7 + fVar2;
    }
    FUN_003735e8(DAT_0029d57c,&local_5c,1);
    local_68 = fVar3;
    local_64 = DAT_0029d580;
    local_60 = fVar3;
    FUN_00372070(&local_5c,&local_5c,&local_68);
    *(undefined1 *)(*(int *)((int)param_1 + 0x254) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)((int)param_1 + 0x254),&local_5c);
    FUN_00372170(*(undefined4 *)((int)param_1 + 0x254),0);
  }
  if ('\0' < *(char *)((int)param_1 + 0x1c2)) {
    cVar4 = FUN_00363c10(param_2 + 0x3a58,0xe);
    *(char *)((int)param_1 + 0x1c2) = cVar4;
    if (('\0' < cVar4) && (iVar5 = FUN_00373074(param_2 + 0x3a58), iVar5 != 0)) {
      local_5c = *(float *)((int)param_1 + 0x148);
      local_58 = *(float *)((int)param_1 + 0x14c);
      local_54 = *(float *)((int)param_1 + 0x150);
      local_50 = *(float *)((int)param_1 + 0x154);
      local_4c = *(float *)((int)param_1 + 0x158);
      local_48 = *(float *)((int)param_1 + 0x15c);
      local_44 = *(float *)((int)param_1 + 0x160);
      local_40 = *(undefined4 *)((int)param_1 + 0x164);
      local_3c = *(float *)((int)param_1 + 0x168);
      local_38 = *(float *)((int)param_1 + 0x16c);
      local_34 = *(float *)((int)param_1 + 0x170);
      local_30 = *(undefined4 *)((int)param_1 + 0x174);
      local_68 = DAT_0029d584;
      local_64 = DAT_0029d588;
      local_60 = (float)DAT_0029d58c;
      FUN_00372070(&local_5c,&local_5c,&local_68);
      FUN_003735e8(DAT_0029d590,&local_5c,1);
      local_5c = local_5c * DAT_0029d594;
      local_4c = local_4c * DAT_0029d594;
      local_3c = local_3c * DAT_0029d594;
      local_58 = local_58 * DAT_0029d594;
      local_48 = local_48 * DAT_0029d594;
      local_38 = local_38 * DAT_0029d594;
      local_54 = local_54 * DAT_0029d594;
      local_44 = local_44 * DAT_0029d594;
      local_34 = local_34 * DAT_0029d594;
      local_64 = 0;
      local_68 = param_1;
      FUN_0035e240((int)param_1 + 0x1c4,&local_5c,0);
    }
  }
  return;
}
