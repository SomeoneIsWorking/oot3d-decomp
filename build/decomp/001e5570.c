// OoT3D decomp @ 001e5570  name=FUN_001e5570  size=1000

void FUN_001e5570(int param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;

  uVar3 = DAT_001e5934;
  fVar2 = DAT_001e5930;
  iVar5 = DAT_001e592c;
  iVar7 = 0;
  do {
    uVar6 = (0xf - iVar7) + (int)*(short *)(param_1 + 0xad2);
    lVar1 = (longlong)(int)uVar6 * (longlong)iVar5 + ((ulonglong)uVar6 << 0x20);
    iVar4 = param_1 + (short)(((short)(int)(lVar1 >> 0x23) - (short)(lVar1 >> 0x3f)) * -0xf +
                             (short)uVar6) * 0xc;
    local_58 = *(undefined4 *)(iVar4 + 0xc20);
    local_48 = *(undefined4 *)(iVar4 + 0xc24);
    local_38 = *(undefined4 *)(iVar4 + 0xc28);
    local_64 = 1.0;
    local_50 = 1.0;
    local_54 = 0.0;
    local_3c = 1.0;
    local_60 = 0.0;
    local_5c = 0.0;
    local_4c = 0.0;
    local_44 = 0.0;
    local_40 = 0.0;
    fVar12 = *(float *)(iVar4 + 0xd44);
    if (fVar12 != fVar2) {
      fVar8 = (float)FUN_003727f0(fVar12);
      fVar12 = (float)FUN_00372674(fVar12);
      fVar11 = local_64 * fVar8;
      local_64 = local_64 * fVar12 - local_5c * fVar8;
      local_5c = fVar11 + local_5c * fVar12;
      fVar11 = local_54 * fVar8;
      local_54 = local_54 * fVar12 - local_4c * fVar8;
      local_4c = fVar11 + local_4c * fVar12;
      fVar11 = local_44 * fVar8;
      local_44 = local_44 * fVar12 - local_3c * fVar8;
      local_3c = fVar11 + local_3c * fVar12;
    }
    fVar12 = -*(float *)(iVar4 + 0xd40);
    if (fVar12 != fVar2) {
      fVar9 = (float)FUN_003727f0(fVar12);
      fVar10 = (float)FUN_00372674(fVar12);
      fVar12 = local_5c * fVar9;
      local_5c = local_5c * fVar10 - local_60 * fVar9;
      fVar8 = local_4c * fVar9;
      local_4c = local_4c * fVar10 - local_50 * fVar9;
      fVar11 = local_3c * fVar9;
      local_3c = local_3c * fVar10 - local_40 * fVar9;
      local_60 = local_60 * fVar10 + fVar12;
      local_50 = local_50 * fVar10 + fVar8;
      local_40 = local_40 * fVar10 + fVar11;
    }
    fVar12 = *(float *)(param_1 + 0x54);
    fVar8 = *(float *)(param_1 + 0x58);
    fVar11 = *(float *)(param_1 + 0x5c);
    local_64 = local_64 * fVar12;
    local_54 = local_54 * fVar12;
    local_44 = local_44 * fVar12;
    local_60 = local_60 * fVar8;
    local_50 = local_50 * fVar8;
    local_40 = local_40 * fVar8;
    local_5c = local_5c * fVar11;
    local_4c = local_4c * fVar11;
    local_3c = local_3c * fVar11;
    fVar12 = (float)FUN_003727f0(uVar3);
    fVar8 = (float)FUN_00372674(uVar3);
    fVar11 = local_64 * fVar12;
    iVar4 = param_1 + iVar7 * 0x30;
    local_64 = local_64 * fVar8 - local_5c * fVar12;
    local_5c = fVar11 + local_5c * fVar8;
    fVar11 = local_54 * fVar12;
    local_54 = local_54 * fVar8 - local_4c * fVar12;
    local_4c = fVar11 + local_4c * fVar8;
    fVar11 = local_44 * fVar12;
    local_44 = local_44 * fVar8 - local_3c * fVar12;
    local_3c = fVar11 + local_3c * fVar8;
    *(float *)(iVar4 + 0x2b0) = local_64;
    *(float *)(iVar4 + 0x2b4) = local_60;
    *(float *)(iVar4 + 0x2b8) = local_5c;
    *(undefined4 *)(iVar4 + 700) = local_58;
    *(float *)(iVar4 + 0x2c0) = local_54;
    *(float *)(iVar4 + 0x2c4) = local_50;
    *(float *)(iVar4 + 0x2c8) = local_4c;
    *(undefined4 *)(iVar4 + 0x2cc) = local_48;
    *(float *)(iVar4 + 0x2d0) = local_44;
    *(float *)(iVar4 + 0x2d4) = local_40;
    *(float *)(iVar4 + 0x2d8) = local_3c;
    *(undefined4 *)(iVar4 + 0x2dc) = local_38;
    iVar7 = (int)(short)((short)iVar7 + 1);
  } while (iVar7 < 0xc);
  local_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_68 = *(float *)(param_1 + 0xaf8) * DAT_001e5938;
  FUN_00357a50(param_1 + 0x22c,0,4,&local_74,2);
  FUN_0035e240(param_1 + 0x22c,&local_64,0,DAT_001e593c,param_1,0);
  FUN_003713fc(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),&local_64,0);
  FUN_00371fac(&local_64,param_2 + 0x2fc);
  FUN_00371348(DAT_001e5940,DAT_001e5940,DAT_001e5940,&local_64,1);
  iVar5 = FUN_003695f8();
  if (iVar5 == 0) {
    FUN_003738a8(DAT_001e5944);
    FUN_00371234(&local_64,1);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x4f0),&local_64);
  FUN_00372170(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}
