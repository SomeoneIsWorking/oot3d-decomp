// OoT3D decomp @ 00409194  name=FUN_00409194  size=492

void FUN_00409194(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  int local_334;
  undefined1 auStack_1b0 [156];
  undefined1 auStack_114 [8];
  undefined1 auStack_10c [192];
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44 [8];

  local_44[0] = *DAT_00409380;
  local_44[1] = DAT_00409380[1];
  local_44[2] = DAT_00409380[2];
  local_44[3] = DAT_00409380[3];
  local_44[4] = DAT_00409380[4];
  local_44[5] = DAT_00409380[5];
  local_44[6] = (uint)*(ushort *)(*param_2 + 0x104);
  local_44[7] = local_44[6];
  FUN_004094f4(&local_344);
  uVar8 = 0;
  local_33c = 8;
  local_344 = param_3;
  local_340 = param_4;
  do {
    uVar1 = 1 << (uVar8 & 0xff);
    if ((uVar1 & 0xff & (uint)*(ushort *)(param_2 + 2)) == 0) {
      FUN_00313650(&local_344,uVar8);
    }
    else {
      iVar3 = *param_2;
      uVar6 = uVar8 & 0xff;
      if ((uVar1 & 0xff & (uint)*(ushort *)(DAT_00409384 + iVar3)) == 0) {
        uVar2 = *(undefined2 *)(iVar3 + uVar6 * 0x1c + 0x2c);
        iVar7 = param_2[uVar6 + 10];
        iVar3 = *(int *)(iVar3 + uVar6 * 0x1c + 0x24);
        uVar4 = FUN_003136e4(local_44[uVar8],uVar2);
        uVar5 = FUN_004094b4(local_44[uVar8],uVar2);
        FUN_00313698(&local_344,uVar8,uVar5,uVar4,iVar3 + iVar7);
      }
      else {
        FUN_0040950c(&local_344,uVar8,iVar3 + uVar6 * 0x1c + 0x30);
      }
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 8);
  FUN_00313864(&local_344);
  FUN_00307bd8(*param_1,0x200,0x27,1,0xf,auStack_1b0);
  FUN_00307bd8(*param_1,DAT_00409388,2,1,0xf,auStack_114);
  uVar4 = DAT_0040938c;
  iVar3 = 0;
  if (0 < local_334) {
    do {
      FUN_00307bd8(*param_1,uVar4,4,1,0xf,auStack_10c + iVar3 * 0x10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_334);
  }
  param_1[8] = local_4c;
  param_1[9] = local_48;
  return;
}
