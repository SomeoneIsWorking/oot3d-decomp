// OoT3D decomp @ 001b3db4  name=FUN_001b3db4  size=2220

/* WARNING: Removing unreachable block (ram,0x001b41e0) */

void FUN_001b3db4(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  int extraout_r1;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_ac [4];
  undefined4 local_a8;
  undefined1 auStack_a4 [12];
  float local_98;
  float local_94;
  float local_90;
  undefined1 auStack_8c [4];
  float local_88;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  
  fVar15 = DAT_001b40cc;
  fVar9 = DAT_001b40c8;
  local_60 = 0;
  local_64 = 0;
  fVar8 = DAT_001b40c8;
  if (*(short *)(param_2 + 0x104) != 99) {
    fVar8 = DAT_001b40cc;
  }
  FUN_00376340(fVar8,DAT_001b40d4,DAT_001b40d0,param_2,param_1,0x1d);
  iVar3 = FUN_00342068(param_1,param_2);
  if (iVar3 == 0) {
    if (((((*(ushort *)(param_1 + 0x90) & 8) != 0) &&
         (uVar7 = FUN_00338f60((int)(short)(*(short *)(param_1 + 0x82) - *(short *)(param_1 + 0x36))
                              ), DAT_001b40d8 < uVar7)) &&
        (DAT_001b40dc < (int)*(float *)(param_1 + 0x6c))) &&
       (*(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - DAT_001b40e0,
       *(char *)(param_2 + 0x107) == '\0')) {
      FUN_0037547c(DAT_001b40ec,param_1 + 0x28,4,DAT_001b40e8,DAT_001b40e8,DAT_001b40e4);
    }
    if ((*(uint *)(param_1 + 0xe54) & 4) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0xe70) == 0) {
      return;
    }
    fVar8 = *(float *)(param_1 + 0x6c);
    uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_001b40f0 <= fVar8) << 0x1d;
    if (!SUB41(uVar7 >> 0x1d,0)) {
      return;
    }
    if (*(char *)(param_1 + 0x1a4) == '\f' || *(char *)(param_1 + 0x1a4) == '\v') {
      return;
    }
    iVar3 = param_2 + 0xa98;
    if ((int)fVar8 < 0x41000001) {
      if (*(short *)(param_2 + 0x104) != 99) {
        fVar9 = fVar15;
      }
      FUN_0036df4c(auStack_8c,param_1 + 0x28);
      local_88 = local_88 + fVar9;
      FUN_0036df4c(&local_98,auStack_8c);
      fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
      fVar15 = DAT_001b4464;
      local_98 = local_98 + fVar9 * DAT_001b4464;
      fVar9 = (float)FUN_002cfca0((int)-*(short *)(param_1 + 0xbc));
      local_94 = local_94 + fVar9 * fVar15;
      fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
      local_90 = local_90 + fVar9 * fVar15;
      iVar3 = FUN_00369f9c(iVar3,auStack_8c,&local_98,auStack_a4,&local_a8,1,0,0,1,auStack_ac);
      if (iVar3 != 0) {
        FUN_00341f6c(param_1,param_2,local_a8);
        return;
      }
      return;
    }
    if (DAT_001b40f4 <= (int)fVar8) {
      fVar15 = DAT_001b40f8;
    }
    local_50 = *(float *)(param_1 + 0x28);
    local_48 = *(float *)(param_1 + 0x30);
    bVar1 = DAT_001b40f4 <= (int)fVar8;
    if (!bVar1) {
      fVar15 = DAT_001b40fc;
    }
    local_4c = *(float *)(param_1 + 0x2c) + fVar9;
    local_44 = local_50;
    local_40 = local_4c;
    local_3c = local_48;
    fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    local_50 = local_50 + fVar15 * fVar9;
    fVar9 = (float)FUN_002cfca0((int)-*(short *)(param_1 + 0xbc));
    local_4c = local_4c + fVar15 * fVar9;
    fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    local_6c = local_48 + fVar15 * fVar9;
    local_74 = local_50;
    local_70 = local_4c;
    local_60 = 0;
    local_48 = local_6c;
    local_38 = iVar3;
    iVar3 = FUN_00369f9c(iVar3,&local_44,&local_50,&local_74,&local_60,1,0,0,1,&local_68);
    if (iVar3 == 1) {
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x4000;
      fVar15 = SQRT((local_44 - local_74) * (local_44 - local_74) +
                    (local_40 - local_70) * (local_40 - local_70) +
                    (local_3c - local_6c) * (local_3c - local_6c));
    }
    if (local_60 != 0) {
      if ((int)fVar15 < DAT_001b4100) {
        FUN_00341f6c(param_1,param_2);
      }
      uVar14 = VectorSignedToFloat((int)*(short *)(local_60 + 0xe),(byte)(uVar7 >> 0x15) & 3);
      uVar10 = VectorSignedToFloat((int)*(short *)(local_60 + 10),(byte)(uVar7 >> 0x15) & 3);
      fVar9 = (float)FUN_003696ec(uVar10,uVar14);
      iVar3 = FUN_00338f60((int)(short)((*(short *)(param_1 + 0x36) -
                                        (short)(int)(fVar9 * DAT_001b4104)) + -0x7fff));
      if (iVar3 < 0x3f000000) {
        return;
      }
      iVar3 = FUN_00357b88(local_38,local_60,local_68);
      if (iVar3 != 0) {
        return;
      }
      if (bVar1) {
        if ((int)fVar15 < DAT_001b4468) goto LAB_001b4610;
      }
      else if ((int)fVar15 < DAT_001b4108) {
        uVar4 = *(uint *)(param_1 + 0xe54);
        goto LAB_001b423c;
      }
      psVar5 = (short *)FUN_00359690(local_38,local_68);
      uVar4 = *(uint *)(param_1 + 0xe54);
      if (((uVar4 & 0x4000000) != 0) && ((psVar5 == (short *)0x0 || (*psVar5 != 0x108)))) {
        if (bVar1) {
          *(uint *)(param_1 + 0xe54) = uVar4 | 0x10;
          FUN_00341ea4(param_1,param_2);
          return;
        }
LAB_001b423c:
        *(uint *)(param_1 + 0xe54) = uVar4 | 0x10;
        return;
      }
    }
    fVar15 = fVar15 + DAT_001b446c;
    local_5c = local_44;
    local_58 = local_40;
    local_54 = local_3c;
    fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    fVar9 = DAT_001b4470;
    local_5c = local_5c + fVar15 * fVar8;
    local_58 = *(float *)(param_1 + 0x2c) + DAT_001b4470;
    fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    fStack_78 = local_54 + fVar15 * fVar8;
    local_80 = local_5c;
    local_7c = local_58;
    local_54 = fStack_78;
    local_7c = (float)FUN_00358410(local_38,&local_64,&local_68,&local_5c);
    fVar8 = DAT_001b4478;
    fVar15 = DAT_001b4474;
    if (local_7c == DAT_001b4474) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x7c);
    fVar16 = local_7c - *(float *)(param_1 + 0x2c);
    iVar3 = extraout_r1;
    if (iVar6 != 0) {
      iVar3 = local_64;
    }
    if (iVar6 == 0 || iVar3 == 0) {
      return;
    }
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0xe),(byte)(uVar7 >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0xc),(byte)(uVar7 >> 0x15) & 3);
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 10),(byte)(uVar7 >> 0x15) & 3);
    uVar4 = FUN_00357b30(fVar13 * DAT_001b4478,fVar12 * DAT_001b4478,fVar11 * DAT_001b4478,
                         *(undefined4 *)(iVar6 + 0x10),&local_80);
    if (DAT_001b447c < uVar4) {
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(local_64 + 0xe),(byte)(uVar7 >> 0x15) & 3)
      ;
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(local_64 + 0xc),(byte)(uVar7 >> 0x15) & 3)
      ;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(local_64 + 10),(byte)(uVar7 >> 0x15) & 3);
      iVar3 = FUN_00357b30(fVar13 * fVar8,fVar12 * fVar8,fVar11 * fVar8,
                           *(undefined4 *)(local_64 + 0x10),param_1 + 0x28);
      if (DAT_001b4480 < iVar3) {
        if ((bVar1) && (*(char *)(param_1 + 0x1a4) != '\f')) {
          *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x10;
          FUN_00341ea4(param_1,param_2);
        }
        *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x4000;
        return;
      }
    }
    iVar3 = DAT_001b4484;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(local_64 + 0xc),(byte)(uVar7 >> 0x15) & 3);
    if ((((int)(fVar11 * fVar8) < DAT_001b4484) ||
        (iVar6 = FUN_00357b88(local_38,local_64,local_68), iVar6 != 0)) ||
       (iVar6 = FUN_0035ea34(local_38,local_64,local_68), iVar6 == 7)) {
      if (!bVar1) {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x1a4);
    }
    else {
      if (local_60 == 0) {
        return;
      }
      uVar7 = uVar7 & 0xfffffff | (uint)(local_70 <= local_7c) << 0x1d;
      if (!SUB41(uVar7 >> 0x1d,0)) {
        return;
      }
      if ((*(uint *)(param_1 + 0xe54) & 0x20000) != 0) {
        return;
      }
      local_5c = local_44;
      local_54 = local_3c;
      local_58 = *(float *)(param_1 + 0x2c) + fVar9;
      if (bVar1) {
        fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
        fVar9 = DAT_001b46cc;
        local_5c = local_5c + fVar11 * DAT_001b46cc;
        fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
        local_54 = local_54 + fVar11 * fVar9;
      }
      else {
        fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
        fVar9 = DAT_001b46c8;
        local_5c = local_5c + fVar11 * DAT_001b46c8;
        fVar11 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
        local_54 = local_54 + fVar11 * fVar9;
      }
      local_80 = local_5c;
      local_7c = local_58;
      fStack_78 = local_54;
      local_7c = (float)FUN_00358410(local_38,&local_64,&local_68,&local_5c);
      if (local_7c == fVar15) {
        return;
      }
      fVar15 = local_7c - *(float *)(param_1 + 0x2c);
      if (local_64 == 0) {
        return;
      }
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(local_64 + 0xc),(byte)(uVar7 >> 0x15) & 3);
      if ((((int)(fVar9 * fVar8) < iVar3) ||
          (iVar3 = FUN_00357b88(local_38,local_64,local_68), iVar3 != 0)) ||
         (iVar3 = FUN_0035ea34(local_38,local_64,local_68), iVar3 == 7)) {
        if (!bVar1) {
          return;
        }
        if (*(char *)(param_1 + 0x1a4) == '\f') {
          return;
        }
        goto LAB_001b4610;
      }
      fVar9 = (float)VectorSignedToFloat(-(int)*(short *)(*DAT_001b46d0 + 0x55c),
                                         (byte)(uVar7 >> 0x15) & 3);
      if (fVar9 <= fVar15) {
        if (bVar1) {
          if (((*(int *)(param_1 + 0x6c) < DAT_001b46d4) && (DAT_001b46dc < (int)fVar16)) &&
             (uVar10 = DAT_001b46e4, (int)fVar16 <= DAT_001b46dc + 0xf80000)) goto LAB_001b46b8;
        }
        else {
          uVar10 = DAT_001b46d8;
          if ((int)fVar16 + 0xbe67ffffU < 0x880000) goto LAB_001b46b8;
        }
        if (*(int *)(param_1 + 0x6c) <= DAT_001b46d4) {
          return;
        }
        uVar10 = DAT_001b46e4;
        if (DAT_001b46e0 < (int)fVar16) {
          return;
        }
LAB_001b46b8:
        *(undefined4 *)(param_1 + 0xea8) = uVar10;
        return;
      }
      if (!bVar1) {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x1a4);
    }
    if (cVar2 != '\f') {
LAB_001b4610:
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x10;
      FUN_00341ea4(param_1,param_2);
      return;
    }
  }
  return;
}

