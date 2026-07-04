// OoT3D decomp @ 0032db24  name=FUN_0032db24  size=1716

float FUN_0032db24(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                  uint *param_6,float *param_7,int param_8,uint param_9)

{
  ushort uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *local_e8;
  uint local_e4;
  float local_e0;
  undefined1 auStack_dc [48];
  float local_ac [4];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  int local_84;
  undefined2 local_80;
  int *local_7c;
  float local_78;
  float *local_74;
  uint *local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  
  fVar2 = DAT_0032dee4;
  fVar15 = DAT_0032dedc;
  *param_6 = 0x32;
  fVar11 = DAT_0032dee0;
  *param_5 = 0;
  local_58 = *param_7;
  local_50 = param_7[2];
  iVar8 = *(int *)(param_3 + 0x40);
  fVar10 = fVar15;
  for (local_54 = param_7[1]; *(float *)(param_3 + 8) <= local_54;
      local_54 = local_54 - *(float *)(param_3 + 0x2c)) {
    if (((((local_58 < *(float *)(param_3 + 4) - fVar11) ||
          (*(float *)(param_3 + 0x10) + fVar11 < local_58)) ||
         (local_54 < *(float *)(param_3 + 8) - fVar11)) ||
        ((*(float *)(param_3 + 0x14) + fVar11 < local_54 ||
         (local_50 < *(float *)(param_3 + 0xc) - fVar11)))) ||
       (*(float *)(param_3 + 0x18) + fVar11 < local_50)) {
      iVar7 = 0;
    }
    else {
      FUN_002bf5b0(param_3,&local_58,&local_94);
      iVar7 = (int)local_8c * *(int *)(param_3 + 0x1c) * *(int *)(param_3 + 0x20) * 6 +
              (int)local_90 * *(int *)(param_3 + 0x1c) * 6 + iVar8 + (int)local_94 * 6;
    }
    if (iVar7 != 0) {
      fVar10 = fVar15;
      if ((param_9 & 4) != 0) {
        local_e4 = 0;
        local_e8 = param_7;
        fVar10 = (float)FUN_002bbf74(fVar15,param_1,param_3,param_4,iVar7,param_5);
      }
      if ((param_9 & 10) != 0) {
        local_e4 = (uint)((param_9 & 0x10) != 0);
        local_e8 = param_7;
        fVar10 = (float)FUN_002bbf74(fVar10,param_1,param_3,param_4,iVar7 + 2,param_5);
      }
      if ((param_9 & 1) != 0) {
        local_e4 = (uint)((param_9 & 0x10) != 0);
        local_e8 = param_7;
        fVar10 = (float)FUN_002bbf74(fVar10,param_1,param_3,param_4,iVar7 + 4,param_5);
      }
      if ((uint)fVar10 < (uint)fVar2) break;
    }
  }
  iVar8 = DAT_0032dee8;
  local_80 = (undefined2)param_4;
  local_74 = param_7;
  local_68 = param_9;
  local_70 = param_6;
  uVar5 = 0;
  local_6c = param_8;
  *param_6 = 0x32;
  local_88 = param_2;
  local_84 = param_3;
  local_7c = param_5;
  local_78 = fVar10;
  local_64 = param_1;
  do {
    if ((((*(ushort *)(local_84 + iVar8 + uVar5 * 2) & 1) != 0) &&
        (*(int *)(local_84 + uVar5 * 0x6c + 0x54) != local_6c)) &&
       ((*(float *)(local_84 + uVar5 * 0x6c + 0xb8) <= local_74[1] &&
        (iVar7 = FUN_002bf4ec(*local_74,local_74[2],local_84 + uVar5 * 0x6c + 0xa8), iVar7 != 0))))
    {
      local_60 = local_84 + 0x50;
      if ((local_68 & 4) != 0) {
        local_5c = local_84 + uVar5 * 0x6c + 0x62;
        fVar11 = (float)FUN_002bbdc4(&local_88,1);
        if (local_78 < fVar11) {
          *local_70 = uVar5;
          fVar15 = fVar11;
          local_78 = fVar11;
        }
      }
      if (((local_68 & 2) != 0) || ((*local_7c == 0 && ((local_68 & 8) != 0)))) {
        local_5c = local_84 + uVar5 * 0x6c + 0x60;
        fVar11 = (float)FUN_002bbdc4(&local_88,2);
        if (local_78 < fVar11) {
          *local_70 = uVar5;
          fVar15 = fVar11;
          local_78 = fVar11;
        }
      }
      if ((local_68 & 1) != 0) {
        local_5c = local_84 + uVar5 * 0x6c + 0x5e;
        fVar11 = (float)FUN_002bbdc4(&local_88,4);
        if (local_78 < fVar11) {
          *local_70 = uVar5;
          fVar15 = fVar11;
          local_78 = fVar11;
        }
      }
    }
    fVar11 = DAT_0032e1e8;
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x32);
  uVar5 = *local_70;
  if (((uVar5 < 0x32) && (uVar1 = *(ushort *)(local_84 + uVar5 * 2 + 0x156c), (uVar1 & 1) != 0)) &&
     ((uVar1 & 2) == 0)) {
    iVar7 = *(int *)(local_84 + uVar5 * 0x6c + 0x54);
  }
  else {
    iVar7 = 0;
  }
  iVar4 = iVar7;
  if (fVar15 != fVar2 && iVar7 != 0) {
    iVar4 = local_88;
  }
  if ((((fVar15 != fVar2 && iVar7 != 0) && iVar4 != 0) && (iVar7 = FUN_003695f8(), iVar7 == 0)) &&
     (uVar5 = *local_70, (*(ushort *)(local_84 + iVar8 + uVar5 * 2) & 2) != 0)) {
    uVar1 = *(ushort *)(local_60 + uVar5 * 0x6c + 0xc);
    iVar4 = *local_7c;
    iVar8 = *(int *)(local_60 + 0x1580);
    iVar7 = *(int *)(*(int *)(local_60 + uVar5 * 0x6c + 8) + 0x1c);
    puVar3 = (undefined4 *)(uVar5 * 0x6c + 0x38 + local_60);
    FUN_00358188(*puVar3,puVar3[1],puVar3[2],puVar3[5],puVar3[6],puVar3[7],auStack_dc,
                 (int)*(short *)(puVar3 + 3),(int)*(short *)((int)puVar3 + 0xe),
                 (int)*(short *)(puVar3 + 4));
    iVar6 = 0;
    iVar9 = *(int *)(*(int *)(local_60 + *local_70 * 0x6c + 8) + 0x18);
    do {
      FUN_0036ac0c(&local_e8,
                   iVar9 + (*(ushort *)
                             (iVar7 + iVar4 * 0x14 + ((uint)uVar1 * -0x10 - iVar8) * 0x14 +
                              iVar6 * 2 + 2) & 0xffff1fff) * 6);
      FUN_00373598(auStack_dc,&local_e8,local_ac + iVar6 * 3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    fVar14 = (local_9c - local_ac[1]) * (local_8c - local_ac[2]) -
             (local_98 - local_ac[2]) * (local_90 - local_ac[1]);
    fVar12 = (local_98 - local_ac[2]) * (local_94 - local_ac[0]) -
             (local_ac[3] - local_ac[0]) * (local_8c - local_ac[2]);
    fVar13 = (local_ac[3] - local_ac[0]) * (local_90 - local_ac[1]) -
             (local_9c - local_ac[1]) * (local_94 - local_ac[0]);
    if (((DAT_0032e1ec <= (int)ABS(SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13))) &&
        (iVar8 = FUN_002bfc24(local_ac,local_ac + 3,&local_94,&local_e0), iVar8 != 0)) &&
       ((int)ABS(local_e0 - fVar15) < 0x3f800000)) {
      fVar15 = local_e0;
    }
  }
  if (fVar10 < fVar15) {
    fVar10 = fVar15;
  }
  if ((fVar10 != fVar2) && (iVar8 = FUN_00322088(param_3,*param_5,*param_6,0), iVar8 << 1 < 0)) {
    fVar10 = fVar10 - fVar11;
  }
  return fVar10;
}

