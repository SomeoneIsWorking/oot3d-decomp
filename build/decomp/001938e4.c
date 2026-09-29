// OoT3D decomp @ 001938e4  name=FUN_001938e4  size=1124

void FUN_001938e4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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

  fVar9 = DAT_00193ca8;
  uVar4 = DAT_00193ca0;
  uVar3 = DAT_00193c9c;
  fVar2 = DAT_00193c98;
  if (*(short *)(param_1 + 0xc1c) == 0) {
    if (*(short *)(param_1 + 0xc1a) != 0) {
      iVar6 = 1;
      do {
        iVar7 = param_1 + iVar6 * 0xc;
        local_58 = *(undefined4 *)(iVar7 + 0xc20);
        local_48 = *(undefined4 *)(iVar7 + 0xc24);
        local_38 = *(undefined4 *)(iVar7 + 0xc28);
        local_60 = 0.0;
        local_64 = 1.0;
        local_5c = 0.0;
        local_54 = 0.0;
        local_50 = 1.0;
        local_40 = 0.0;
        local_3c = 1.0;
        local_4c = 0.0;
        local_44 = 0.0;
        FUN_00371fac(&local_64,param_2 + 0x2fc);
        iVar7 = param_1 + iVar6 * 4;
        fVar11 = *(float *)(iVar7 + 0xe18);
        local_64 = local_64 * fVar11;
        local_54 = local_54 * fVar11;
        local_44 = local_44 * fVar11;
        local_60 = local_60 * fVar11;
        local_50 = local_50 * fVar11;
        local_40 = local_40 * fVar11;
        local_5c = local_5c * fVar11;
        local_4c = local_4c * fVar11;
        local_3c = local_3c * fVar11;
        if (*(char *)(param_1 + 0xc18) == '\0') {
          iVar5 = FUN_003695f8();
          if (iVar5 == 0) {
            FUN_003738a8(uVar3);
            FUN_00371234(&local_64,1);
          }
          else {
            fVar11 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar2) << 0x1e;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              fVar12 = (float)FUN_003727f0(fVar11);
              fVar13 = (float)FUN_00372674(fVar11);
              fVar11 = local_60 * fVar12;
              local_60 = local_60 * fVar13 - local_64 * fVar12;
              fVar1 = local_50 * fVar12;
              local_50 = local_50 * fVar13 - local_54 * fVar12;
              fVar10 = local_40 * fVar12;
              local_40 = local_40 * fVar13 - local_44 * fVar12;
              local_64 = local_64 * fVar13 + fVar11;
              local_54 = local_54 * fVar13 + fVar1;
              local_44 = local_44 * fVar13 + fVar10;
            }
          }
          if (*(char *)(param_1 + 0xc18) != '\0') goto LAB_00193ccc;
          *(undefined1 *)(*(int *)(iVar7 + 0x4f0) + 0xac) = 1;
          FUN_003721e0(*(undefined4 *)(iVar7 + 0x4f0),&local_64);
          FUN_00372170(*(undefined4 *)(iVar7 + 0x4f0),0);
        }
        else {
LAB_00193ccc:
          FUN_003695cc(uVar4,uVar4,uVar4,*(float *)(param_1 + 0xe84) * fVar9,
                       *(undefined4 *)(iVar7 + 0x5a0),0,0,2);
          *(undefined1 *)(*(int *)(iVar7 + 0x5a0) + 0xac) = 1;
          FUN_003721e0(*(undefined4 *)(iVar7 + 0x5a0),&local_64);
          FUN_00372170(*(undefined4 *)(iVar7 + 0x5a0),0);
        }
        iVar6 = (int)(short)((short)iVar6 + 1);
        if (0xe < iVar6) {
          return;
        }
      } while( true );
    }
  }
  else {
    iVar6 = 0;
    iVar7 = *(int *)(DAT_00193ca4 + param_2);
    do {
      iVar5 = iVar7 + iVar6 * 0xc;
      local_58 = *(undefined4 *)(iVar5 + 0x2340);
      local_48 = *(undefined4 *)(iVar5 + 0x2344);
      local_38 = *(undefined4 *)(iVar5 + 0x2348);
      local_5c = 0.0;
      local_60 = 0.0;
      local_64 = 1.0;
      local_54 = 0.0;
      local_50 = 1.0;
      local_40 = 0.0;
      local_3c = 1.0;
      local_4c = 0.0;
      local_44 = 0.0;
      FUN_00371fac(&local_64,param_2 + 0x2fc);
      iVar8 = param_1 + iVar6 * 4;
      fVar9 = *(float *)(iVar8 + 0xe18);
      local_64 = local_64 * fVar9;
      local_54 = local_54 * fVar9;
      local_44 = local_44 * fVar9;
      local_60 = local_60 * fVar9;
      local_50 = local_50 * fVar9;
      local_40 = local_40 * fVar9;
      local_5c = local_5c * fVar9;
      local_4c = local_4c * fVar9;
      local_3c = local_3c * fVar9;
      iVar5 = FUN_003695f8();
      if (iVar5 == 0) {
        FUN_003738a8(uVar3);
        FUN_00371234(&local_64,1);
      }
      else {
        fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar2) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar10 = (float)FUN_003727f0(fVar9);
          fVar12 = (float)FUN_00372674(fVar9);
          fVar9 = local_60 * fVar10;
          local_60 = local_60 * fVar12 - local_64 * fVar10;
          fVar11 = local_50 * fVar10;
          local_50 = local_50 * fVar12 - local_54 * fVar10;
          fVar1 = local_40 * fVar10;
          local_40 = local_40 * fVar12 - local_44 * fVar10;
          local_64 = local_64 * fVar12 + fVar9;
          local_54 = local_54 * fVar12 + fVar11;
          local_44 = local_44 * fVar12 + fVar1;
        }
      }
      *(undefined1 *)(*(int *)(iVar8 + 0x4f0) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar8 + 0x4f0),&local_64);
      FUN_00372170(*(undefined4 *)(iVar8 + 0x4f0),0);
      iVar6 = (int)(short)((short)iVar6 + 1);
    } while (iVar6 < 0x11);
  }
  return;
}
