// OoT3D decomp @ 002174f0  name=FUN_002174f0  size=1204

void FUN_002174f0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *local_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];

  uVar7 = DAT_00217854;
  puVar1 = DAT_00217850;
  if (((DAT_00217850[8] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00217850 + 8), puVar3 = DAT_00217860, uVar2 = DAT_0021785c,
     iVar6 != 0)) {
    *DAT_00217860 = DAT_00217858;
    puVar3[1] = uVar2;
    puVar3[2] = uVar7;
  }
  if (((puVar1[7] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00217864), puVar3 = DAT_0021786c, iVar6 != 0)) {
    *DAT_0021786c = DAT_00217868;
    puVar3[1] = uVar7;
    puVar3[2] = uVar7;
  }
  uVar2 = DAT_00217870;
  if (((puVar1[6] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00217874), puVar3 = DAT_00217878, iVar6 != 0)) {
    *DAT_00217878 = uVar7;
    puVar3[1] = uVar2;
    puVar3[2] = uVar7;
  }
  if (((puVar1[5] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0021787c), puVar3 = DAT_00217884, iVar6 != 0)) {
    *DAT_00217884 = DAT_00217880;
    puVar3[1] = uVar7;
    puVar3[2] = uVar7;
  }
  if (((puVar1[4] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00217888), puVar3 = DAT_00217894, uVar4 = DAT_00217890, iVar6 != 0))
  {
    *DAT_00217894 = DAT_0021788c;
    puVar3[1] = uVar4;
    puVar3[2] = uVar7;
  }
  uVar4 = DAT_00217898;
  if (((puVar1[3] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0021789c), puVar3 = DAT_002178a4, uVar5 = DAT_002178a0, iVar6 != 0))
  {
    *DAT_002178a4 = uVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
  }
  if (((puVar1[2] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_002178a8), puVar3 = DAT_002178b0, uVar5 = DAT_002178ac, iVar6 != 0))
  {
    *DAT_002178b0 = uVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
  }
  if (((puVar1[1] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_002178b4), puVar3 = DAT_002178bc, uVar2 = DAT_002178b8, iVar6 != 0))
  {
    *DAT_002178bc = DAT_002178b8;
    puVar3[1] = uVar2;
    puVar3[2] = uVar7;
  }
  if (((*puVar1 & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00217850), puVar3 = DAT_002178c0, iVar6 != 0)) {
    *DAT_002178c0 = uVar7;
    puVar3[1] = uVar7;
    puVar3[2] = uVar7;
  }
  if (param_2 == 0x12) {
    FUN_003735ac(param_4 + 0xcc0,param_3,DAT_00217894);
    FUN_003735ac(param_4 + 0xcb4,param_3,DAT_002178a4);
    FUN_003735ac(param_4 + 0xcd8,param_3,DAT_002178b0);
    FUN_003735ac(param_4 + 0xccc,param_3,DAT_002178bc);
    FUN_0035479c(param_4 + 0xc74,param_4 + 0xcb4,param_4 + 0xcc0,param_4 + 0xccc,param_4 + 0xcd8);
    FUN_003735ac(auStack_44,param_3,DAT_00217878);
    FUN_003735ac(auStack_50,param_3,DAT_00217884);
    if ((*(short *)(param_4 + 0xc0c) < 0) ||
       (*(int *)(param_4 + 0xbe8) != 7 && *(int *)(param_4 + 0xbe8) != 0xc)) {
      FUN_00362384(*(undefined4 *)(param_4 + 0xc18));
      FUN_0035eb74();
      *(undefined2 *)(param_4 + 0xc0c) = 0;
    }
    else if (0 < *(short *)(param_4 + 0xc0c)) {
      uVar7 = FUN_00362384(*(undefined4 *)(param_4 + 0xc18));
      FUN_003620f0(uVar7,auStack_44,auStack_50);
    }
  }
  else {
    local_5c = DAT_0021786c;
    FUN_00335044(param_4,param_2,0x13,DAT_0021786c,0x16);
    if (param_2 == 3) {
      FUN_003735ac(param_4 + 0xdd8,param_3,DAT_0021786c);
    }
    else if (param_2 == 6) {
      FUN_003735ac(param_4 + 0xdcc,param_3,DAT_0021786c);
    }
  }
  if (*(short *)(DAT_00217a58 + param_4) != 0) {
    switch(param_2) {
    case 3:
      iVar6 = 7;
      break;
    default:
      return;
    case 6:
      iVar6 = 8;
      break;
    case 7:
      iVar6 = 6;
      break;
    case 8:
      iVar6 = 5;
      break;
    case 9:
      iVar6 = 0;
      break;
    case 0xb:
      iVar6 = 3;
      break;
    case 0xe:
      iVar6 = 1;
      break;
    case 0xf:
      iVar6 = 4;
      break;
    case 0x12:
      iVar6 = 2;
    }
    FUN_003735ac(&local_5c,param_3,DAT_002178c0);
    param_4 = param_4 + iVar6 * 6;
    *(short *)(param_4 + 0x1a4) = (short)(int)(float)local_5c;
    *(short *)(param_4 + 0x1a6) = (short)(int)local_58;
    *(short *)(param_4 + 0x1a8) = (short)(int)local_54;
  }
  return;
}
