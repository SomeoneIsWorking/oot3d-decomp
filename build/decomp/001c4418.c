// OoT3D decomp @ 001c4418  name=FUN_001c4418  size=1304

void FUN_001c4418(int param_1,int param_2,float param_3,int param_4)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 *local_70;
  float local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [12];

  fVar2 = DAT_001c4768;
  uVar11 = DAT_001c4764;
  puVar1 = DAT_001c4760;
  if (((DAT_001c4760[7] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c4760 + 7), puVar4 = DAT_001c4770, uVar3 = DAT_001c476c,
     iVar10 != 0)) {
    *DAT_001c4770 = uVar11;
    puVar4[1] = uVar3;
    puVar4[2] = fVar2;
  }
  if (((puVar1[6] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c4774), puVar4 = DAT_001c477c, iVar10 != 0)) {
    *DAT_001c477c = DAT_001c4778;
    puVar4[1] = fVar2;
    puVar4[2] = fVar2;
  }
  if (((puVar1[5] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c4780), puVar4 = DAT_001c4788, iVar10 != 0)) {
    *DAT_001c4788 = DAT_001c4784;
    puVar4[1] = fVar2;
    puVar4[2] = fVar2;
  }
  if (((puVar1[4] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c478c), pfVar5 = DAT_001c4790, iVar10 != 0)) {
    *DAT_001c4790 = fVar2;
    pfVar5[1] = fVar2;
    pfVar5[2] = fVar2;
  }
  uVar3 = DAT_001c4794;
  if (((puVar1[3] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c4798), puVar4 = DAT_001c47a0, iVar10 != 0)) {
    *DAT_001c47a0 = DAT_001c479c;
    puVar4[1] = uVar3;
    puVar4[2] = fVar2;
  }
  uVar7 = DAT_001c47a8;
  uVar6 = DAT_001c47a4;
  if (((puVar1[2] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c47ac), puVar4 = DAT_001c47b4, uVar8 = DAT_001c47b0, iVar10 != 0)
     ) {
    *DAT_001c47b4 = uVar6;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
  }
  if (((puVar1[1] & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c47b8), puVar4 = DAT_001c47bc, iVar10 != 0)) {
    *DAT_001c47bc = uVar6;
    puVar4[1] = uVar7;
    puVar4[2] = uVar3;
  }
  if (((*puVar1 & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_001c4760), puVar4 = DAT_001c47c4, iVar10 != 0)) {
    *DAT_001c47c4 = DAT_001c47c0;
    puVar4[1] = uVar11;
    puVar4[2] = fVar2;
  }
  local_70 = (undefined4 *)0x19;
  local_6c = param_3;
  FUN_0034f184(param_4 + 0x1c74,param_2,0,0x18);
  if (param_2 == 9) {
    FUN_003735ac(param_4 + 0x1d34,param_3,DAT_001c47a0);
    FUN_003735ac(param_4 + 0x1d28,param_3,DAT_001c47b4);
    FUN_003735ac((undefined4 *)(param_4 + 0x1d4c),param_3,DAT_001c47bc);
    FUN_003735ac(param_4 + 0x1d40,param_3,DAT_001c47c4);
    local_70 = (undefined4 *)(param_4 + 0x1d4c);
    FUN_0035479c(param_4 + 0x1ce8,param_4 + 0x1d28,param_4 + 0x1d34,param_4 + 0x1d40);
    FUN_003735ac(auStack_58,param_3,DAT_001c4788);
    FUN_003735ac(&local_64,param_3,DAT_001c4790);
    if (*(char *)(param_4 + 0x1c88) < '\x01') {
      if (*(char *)(param_4 + 0x1c88) < '\0') goto LAB_001c48bc;
    }
    else {
      uVar9 = *(ushort *)(param_4 + 0x1c);
      bVar12 = uVar9 == 0;
      if (bVar12) {
        uVar9 = (ushort)*(byte *)(DAT_001c47c8 + param_1);
      }
      if (!bVar12 || uVar9 != 0) {
        uVar11 = FUN_00362384(*(undefined4 *)(param_4 + 0x1c8c));
        FUN_003620f0(uVar11,auStack_58,&local_64);
        goto LAB_001c48bc;
      }
    }
    FUN_00362384(*(undefined4 *)(param_4 + 0x1c8c));
    FUN_0035eb74();
    *(undefined1 *)(param_4 + 0x1c88) = 0xff;
  }
  else if ((param_2 == 5) && (*(char *)(param_4 + 0x1c62) != '\0')) {
    FUN_003735ac(&local_64,param_3,DAT_001c4790);
    *(undefined4 *)(param_4 + 0x1db4) = local_64;
    *(undefined4 *)(param_4 + 0x1db8) = uStack_60;
    *(undefined4 *)(param_4 + 0x1dbc) = uStack_5c;
  }
  else {
    local_70 = DAT_001c477c;
    local_6c = 3.36312e-44;
    local_68 = DAT_001c477c;
    FUN_0034cbb4(param_4,param_3,param_2,0x14);
    if ((param_2 == 0x14 || param_2 == 0x18) &&
       ((*(char *)(param_4 + 0x1c4c) == '\x15' || *(char *)(param_4 + 0x1c4c) == '\x16' &&
        (*(float *)(param_4 + 0x6c) != fVar2)))) {
      FUN_003735ac(&local_64,param_3,DAT_001c477c);
      local_70 = (undefined4 *)0x64;
      local_6c = 2.10195e-44;
      local_68 = (undefined4 *)0x0;
      FUN_0036f00c(DAT_001c49a0,DAT_001c499c,param_1,param_4,&local_64,1);
    }
  }
LAB_001c48bc:
  if (*(short *)(param_4 + 0x1c64) != 0) {
    if (param_2 == 9) {
      iVar10 = 2;
    }
    else if (param_2 < 10) {
      if (param_2 == 2) {
        iVar10 = 1;
      }
      else if (param_2 == 3) {
        iVar10 = 5;
      }
      else if (param_2 == 5) {
        iVar10 = 3;
      }
      else {
        if (param_2 != 7) {
          return;
        }
        iVar10 = 4;
      }
    }
    else if (param_2 == 0xc) {
      iVar10 = 0;
    }
    else if (param_2 == 0xf) {
      iVar10 = 6;
    }
    else if (param_2 == 0x14) {
      iVar10 = 7;
    }
    else {
      if (param_2 != 0x18) {
        return;
      }
      iVar10 = 8;
    }
    FUN_003735ac(&local_70,param_3,DAT_001c4790);
    param_4 = param_4 + iVar10 * 6;
    *(short *)(param_4 + 0x1a4) = (short)(int)(float)local_70;
    *(short *)(param_4 + 0x1a6) = (short)(int)local_6c;
    *(short *)(param_4 + 0x1a8) = (short)(int)(float)local_68;
  }
  return;
}
