// OoT3D decomp @ 001c0310  name=FUN_001c0310  size=1976

void FUN_001c0310(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  
  puVar6 = DAT_001c06d8;
  iVar9 = 0;
  local_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  iVar10 = 0;
  local_80 = FUN_0035bfb4(param_1 + 0x29c,*param_1);
  FUN_0035bf50(local_80,param_1[0x29c],0);
  uVar3 = DAT_001c06e4;
  fVar2 = DAT_001c06e0;
  fVar1 = DAT_001c06dc;
  sVar8 = 0;
  do {
    uVar11 = in_fpscr & 0xfffffff;
    in_fpscr = uVar11 | (uint)((float)puVar6[0xf] == fVar2) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      local_60 = *puVar6;
      if (*(char *)(puVar6 + 0xc) == '\x01') {
        local_88 = puVar6[1];
        local_84 = puVar6[2];
        local_44 = (float)puVar6[9];
        local_6c = local_44 * 1.0;
        local_5c = local_44 * 0.0;
        local_4c = local_44 * 0.0;
        local_68 = local_44 * 0.0;
        local_58 = local_44 * 1.0;
        local_48 = local_44 * 0.0;
        local_64 = local_44 * 0.0;
        local_54 = local_44 * 0.0;
        local_44 = local_44 * 1.0;
        fVar16 = (float)puVar6[4];
        uVar11 = uVar11 | (uint)(fVar16 == fVar2) << 0x1e;
        local_8c = local_60;
        local_50 = local_88;
        local_40 = local_84;
        if (!SUB41(uVar11 >> 0x1e,0)) {
          fVar12 = (float)FUN_003727f0(fVar16);
          fVar16 = (float)FUN_00372674(fVar16);
          fVar15 = local_6c * fVar12;
          local_6c = local_6c * fVar16 - local_64 * fVar12;
          local_64 = fVar15 + local_64 * fVar16;
          fVar15 = local_5c * fVar12;
          local_5c = local_5c * fVar16 - local_54 * fVar12;
          local_54 = fVar15 + local_54 * fVar16;
          fVar15 = local_4c * fVar12;
          local_4c = local_4c * fVar16 - local_44 * fVar12;
          local_44 = fVar15 + local_44 * fVar16;
        }
        fVar16 = (float)puVar6[3];
        uVar11 = uVar11 & 0xfffffff | (uint)(fVar16 == fVar2) << 0x1e;
        if (!SUB41(uVar11 >> 0x1e,0)) {
          fVar13 = (float)FUN_003727f0(fVar16);
          fVar14 = (float)FUN_00372674(fVar16);
          fVar16 = local_64 * fVar13;
          local_64 = local_64 * fVar14 - local_68 * fVar13;
          fVar12 = local_54 * fVar13;
          local_54 = local_54 * fVar14 - local_58 * fVar13;
          fVar15 = local_44 * fVar13;
          local_44 = local_44 * fVar14 - local_48 * fVar13;
          local_68 = local_68 * fVar14 + fVar16;
          local_58 = local_58 * fVar14 + fVar12;
          local_48 = local_48 * fVar14 + fVar15;
        }
        fVar16 = (float)puVar6[5];
        in_fpscr = uVar11 & 0xfffffff | (uint)(fVar16 == fVar2) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar12 = (float)FUN_003727f0(fVar16);
          fVar16 = (float)FUN_00372674(fVar16);
          fVar15 = local_6c * fVar12;
          local_6c = local_6c * fVar16 - local_64 * fVar12;
          local_64 = fVar15 + local_64 * fVar16;
          fVar15 = local_5c * fVar12;
          local_5c = local_5c * fVar16 - local_54 * fVar12;
          local_54 = fVar15 + local_54 * fVar16;
          fVar15 = local_4c * fVar12;
          local_4c = local_4c * fVar16 - local_44 * fVar12;
          local_44 = fVar15 + local_44 * fVar16;
        }
        iVar7 = param_2 + iVar9 * 4;
        *(undefined1 *)(*(int *)(iVar7 + 0x4a0) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar7 + 0x4a0),&local_6c);
        uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
        FUN_00340f44(local_80,uVar4);
        if (puVar6[0xf] == 0x3f800000) {
          FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
          FUN_0036879c();
          uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
          FUN_00368704(param_1[0x17f2],uVar4);
        }
        *(undefined1 *)((int)puVar6 + 0x2a) = 1;
        if ((int)puVar6[0xf] < 0x3f800000) {
          FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
          FUN_0034e988();
        }
        local_70 = puVar6[0xf];
        if (puVar6[0xf] == 0x3f800000) {
          if (*(char *)((int)puVar6 + 0x2b) == '\0') {
            uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
            FUN_00358964(uVar4,3,&local_7c);
            uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
            FUN_003589cc(uVar4,3);
            *(undefined1 *)((int)puVar6 + 0x2b) = 1;
          }
          else {
            iVar5 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
            *(undefined1 *)(iVar5 + 0xb) = 0;
            uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
            FUN_00341c18(uVar4,3);
          }
        }
        else {
          uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
          FUN_00358964(uVar4,3,&local_7c);
          uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x4a0));
          FUN_003589cc(uVar4,3);
          *(undefined1 *)((int)puVar6 + 0x2b) = 0;
        }
        FUN_00372170(*(undefined4 *)(iVar7 + 0x4a0),0);
        iVar9 = iVar9 + 1;
      }
      else {
        local_94 = puVar6[1];
        local_90 = puVar6[2];
        local_44 = (float)puVar6[9];
        local_6c = local_44 * 1.0;
        local_5c = local_44 * 0.0;
        local_4c = local_44 * 0.0;
        local_68 = local_44 * 0.0;
        local_58 = local_44 * 1.0;
        local_48 = local_44 * 0.0;
        local_64 = local_44 * 0.0;
        local_54 = local_44 * 0.0;
        local_44 = local_44 * 1.0;
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(puVar6 + 10),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = fVar16 * fVar1;
        uVar11 = uVar11 | (uint)(fVar16 == fVar2) << 0x1e;
        local_98 = local_60;
        local_50 = local_94;
        local_40 = local_90;
        if (!SUB41(uVar11 >> 0x1e,0)) {
          fVar12 = (float)FUN_003727f0(fVar16);
          fVar16 = (float)FUN_00372674(fVar16);
          fVar15 = local_6c * fVar12;
          local_6c = local_6c * fVar16 - local_64 * fVar12;
          local_64 = fVar15 + local_64 * fVar16;
          fVar15 = local_5c * fVar12;
          local_5c = local_5c * fVar16 - local_54 * fVar12;
          local_54 = fVar15 + local_54 * fVar16;
          fVar15 = local_4c * fVar12;
          local_4c = local_4c * fVar16 - local_44 * fVar12;
          local_44 = fVar15 + local_44 * fVar16;
        }
        local_a4 = fVar2;
        local_a0 = fVar2;
        local_9c = uVar3;
        FUN_00372070(&local_6c,&local_6c,&local_a4);
        fVar16 = (float)puVar6[4];
        in_fpscr = uVar11 & 0xfffffff | (uint)(fVar16 == fVar2) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar12 = (float)FUN_003727f0(fVar16);
          fVar16 = (float)FUN_00372674(fVar16);
          fVar15 = local_6c * fVar12;
          local_6c = local_6c * fVar16 - local_64 * fVar12;
          local_64 = fVar15 + local_64 * fVar16;
          fVar15 = local_5c * fVar12;
          local_5c = local_5c * fVar16 - local_54 * fVar12;
          local_54 = fVar15 + local_54 * fVar16;
          fVar15 = local_4c * fVar12;
          local_4c = local_4c * fVar16 - local_44 * fVar12;
          local_44 = fVar15 + local_44 * fVar16;
        }
        iVar7 = param_2 + iVar10 * 4;
        *(undefined1 *)(*(int *)(iVar7 + 0x520) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar7 + 0x520),&local_6c);
        uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
        FUN_00340f44(local_80,uVar4);
        if (puVar6[0xf] == 0x3f800000) {
          FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
          FUN_0036879c();
          uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
          FUN_00368704(param_1[0x17f2],uVar4);
        }
        *(undefined1 *)((int)puVar6 + 0x2a) = 1;
        if ((int)puVar6[0xf] < 0x3f800000) {
          FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
          FUN_0034e988();
        }
        local_70 = puVar6[0xf];
        if (puVar6[0xf] == 0x3f800000) {
          if (*(char *)((int)puVar6 + 0x2b) == '\0') {
            uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
            FUN_00358964(uVar4,3,&local_7c);
            uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
            FUN_003589cc(uVar4,3);
            *(undefined1 *)((int)puVar6 + 0x2b) = 1;
          }
          else {
            iVar5 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
            *(undefined1 *)(iVar5 + 0xb) = 0;
            uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
            FUN_00341c18(uVar4,3);
          }
        }
        else {
          uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
          FUN_00358964(uVar4,3,&local_7c);
          uVar4 = FUN_003687a8(*(undefined4 *)(iVar7 + 0x520));
          FUN_003589cc(uVar4,3);
          *(undefined1 *)((int)puVar6 + 0x2b) = 0;
        }
        FUN_00372170(*(undefined4 *)(iVar7 + 0x520),0);
        iVar10 = iVar10 + 1;
      }
    }
    sVar8 = sVar8 + 1;
    puVar6 = puVar6 + 0x10;
  } while (sVar8 < 0x67);
  return;
}

