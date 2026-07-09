// OoT3D decomp @ 002d9664  name=FUN_002d9664  size=1876

void FUN_002d9664(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_68 [12];
  float local_5c;
  undefined4 local_58 [7];
  
  uVar1 = DAT_0047d1b0;
  if (*(int *)(param_4 + 0x27c) == 0) {
    return;
  }
  iVar5 = *(int *)(param_4 + 0x280);
  iVar2 = param_4 + 4;
  if (((*DAT_0047d1b4 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0047d1b4), iVar3 != 0)) {
    FUN_0036788c(DAT_0047d1b8);
  }
  fVar12 = DAT_0047d1cc;
  local_58[6] = DAT_0047d1c4;
  uVar9 = 0;
  local_58[0] = *DAT_0047d1c8;
  local_58[1] = DAT_0047d1c8[1];
  local_58[2] = DAT_0047d1c8[2];
  local_58[3] = DAT_0047d1c8[3];
  local_58[4] = DAT_0047d1c8[4];
  local_58[5] = DAT_0047d1c8[5];
  if (*(int *)(param_4 + 0x1e8) == *(int *)(param_4 + 0x1ec)) {
    if (*(int *)(param_4 + 0x1e0) != 0) {
      do {
        iVar7 = iVar2 + uVar9 * 0x10;
        iVar3 = 0;
        if (0 < *(int *)(**(int **)(*(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 4) + 8) + 8)) {
          do {
            iVar8 = *(int *)(*(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34) + 0x10);
            FUN_00333abc(iVar8,iVar3,auStack_68);
            local_5c = fVar12;
            FUN_00333a38(iVar8,iVar3,auStack_68);
            iVar6 = iVar3 + 1;
            *(undefined1 *)(*(int *)(iVar8 + 4) + iVar3 * 0x124) = 1;
            iVar3 = iVar6;
          } while (iVar6 < *(int *)(**(int **)(*(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 4) +
                                              8) + 8));
        }
        iVar3 = *(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34);
        *(undefined4 *)(iVar3 + 0x24) = param_1;
        *(undefined4 *)(iVar3 + 0x28) = param_2;
        *(undefined4 *)(iVar3 + 0x2c) = param_3;
        iVar3 = *(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34);
        *(undefined4 *)(iVar3 + 0x40) = uVar1;
        *(undefined4 *)(iVar3 + 0x44) = uVar1;
        *(undefined4 *)(iVar3 + 0x48) = uVar1;
        FUN_002cf064(local_58[6],*(undefined4 *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34),
                     local_58[uVar9]);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_4 + 0x1e0));
    }
  }
  else {
    uVar4 = 0;
    fVar11 = fVar12;
    if (*(int *)(param_4 + 0x1e0) != 0) {
      while( true ) {
        iVar7 = iVar2 + uVar9 * 0x10;
        iVar3 = 0;
        if (0 < *(int *)(**(int **)(*(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 4) + 8) + 8)) {
          do {
            iVar8 = *(int *)(*(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34) + 0x10);
            FUN_00333abc(iVar8,iVar3,auStack_68);
            local_5c = fVar11;
            FUN_00333a38(iVar8,iVar3,auStack_68);
            iVar6 = iVar3 + 1;
            *(undefined1 *)(*(int *)(iVar8 + 4) + iVar3 * 0x124) = 1;
            iVar3 = iVar6;
          } while (iVar6 < *(int *)(**(int **)(*(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 4) +
                                              8) + 8));
        }
        iVar3 = *(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34);
        *(undefined4 *)(iVar3 + 0x24) = param_1;
        *(undefined4 *)(iVar3 + 0x28) = param_2;
        *(undefined4 *)(iVar3 + 0x2c) = param_3;
        iVar3 = *(int *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34);
        *(undefined4 *)(iVar3 + 0x40) = uVar1;
        *(undefined4 *)(iVar3 + 0x44) = uVar1;
        *(undefined4 *)(iVar3 + 0x48) = uVar1;
        FUN_002cf064(local_58[6],*(undefined4 *)(iVar7 + *(int *)(param_4 + 0x1e8) * 4 + 0x34),
                     local_58[uVar9]);
        uVar4 = *(uint *)(param_4 + 0x1e0);
        uVar9 = uVar9 + 1;
        if (uVar4 <= uVar9) break;
        fVar11 = fVar12;
        if (0 < (int)uVar9) {
          fVar11 = fVar12 - *(float *)(param_4 + 0x1f0);
        }
      }
    }
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        iVar7 = iVar2 + uVar9 * 0x10;
        iVar3 = 0;
        if (0 < *(int *)(**(int **)(*(int *)(iVar7 + *(int *)(param_4 + 0x1ec) * 4 + 4) + 8) + 8)) {
          do {
            iVar8 = *(int *)(*(int *)(iVar7 + *(int *)(param_4 + 0x1ec) * 4 + 0x34) + 0x10);
            FUN_00333abc(iVar8,iVar3,auStack_68);
            local_5c = *(float *)(param_4 + 0x1f0);
            FUN_00333a38(iVar8,iVar3,auStack_68);
            iVar6 = iVar3 + 1;
            *(undefined1 *)(*(int *)(iVar8 + 4) + iVar3 * 0x124) = 1;
            iVar3 = iVar6;
          } while (iVar6 < *(int *)(**(int **)(*(int *)(iVar7 + *(int *)(param_4 + 0x1ec) * 4 + 4) +
                                              8) + 8));
        }
        iVar3 = *(int *)(iVar7 + *(int *)(param_4 + 0x1ec) * 4 + 0x34);
        *(undefined4 *)(iVar3 + 0x24) = param_1;
        *(undefined4 *)(iVar3 + 0x28) = param_2;
        *(undefined4 *)(iVar3 + 0x2c) = param_3;
        iVar3 = *(int *)(iVar7 + *(int *)(param_4 + 0x1ec) * 4 + 0x34);
        *(undefined4 *)(iVar3 + 0x40) = uVar1;
        *(undefined4 *)(iVar3 + 0x44) = uVar1;
        *(undefined4 *)(iVar3 + 0x48) = uVar1;
        FUN_002cf064(local_58[6],*(undefined4 *)(iVar7 + *(int *)(param_4 + 0x1ec) * 4 + 0x34),
                     local_58[uVar9 + 3]);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_4 + 0x1e0));
    }
  }
  if ((iVar5 != 0) && (iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x54), iVar5 != 0))
  {
    *(undefined4 *)(iVar5 + 0x24) = param_1;
    *(undefined4 *)(iVar5 + 0x28) = param_2;
    *(undefined4 *)(iVar5 + 0x2c) = param_3;
    iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x54);
    *(undefined4 *)(iVar5 + 0x40) = uVar1;
    *(undefined4 *)(iVar5 + 0x44) = uVar1;
    *(undefined4 *)(iVar5 + 0x48) = uVar1;
    FUN_002cf064(local_58[6],*(undefined4 *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x54),
                 local_58[2]);
  }
  fVar11 = DAT_0047d538;
  if (*(int *)(param_4 + 0x208) != 0) {
    iVar5 = iVar2 + *(int *)(param_4 + 0x1e8) * 4;
    if (*(int *)(param_4 + 0x1e8) == *(int *)(param_4 + 0x1ec)) {
      bVar10 = *(int *)(iVar5 + 0x74) == 0;
      if (!bVar10) {
        fVar12 = *(float *)(param_4 + 500);
        bVar10 = fVar12 == DAT_0047d538;
      }
      if (!bVar10) {
        iVar3 = 0;
        if (0 < *(int *)(**(int **)(*(int *)(iVar5 + 100) + 8) + 8)) {
          do {
            iVar7 = *(int *)(*(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74) + 0x10);
            FUN_00333abc(iVar7,iVar3,auStack_68);
            local_5c = fVar12;
            FUN_00333a38(iVar7,iVar3,auStack_68);
            iVar5 = iVar3 + 1;
            *(undefined1 *)(*(int *)(iVar7 + 4) + iVar3 * 0x124) = 1;
            iVar3 = iVar5;
          } while (iVar5 < *(int *)(**(int **)(*(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 100)
                                              + 8) + 8));
        }
        iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74);
        *(undefined4 *)(iVar5 + 0x24) = param_1;
        *(undefined4 *)(iVar5 + 0x28) = param_2;
        *(undefined4 *)(iVar5 + 0x2c) = param_3;
        iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74);
        *(undefined4 *)(iVar5 + 0x40) = uVar1;
        *(undefined4 *)(iVar5 + 0x44) = uVar1;
        *(undefined4 *)(iVar5 + 0x48) = uVar1;
        FUN_002cf064(local_58[6],*(undefined4 *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74),2);
        return;
      }
    }
    else {
      if ((*(int *)(iVar5 + 0x74) != 0) &&
         (fVar12 = *(float *)(param_4 + 500) * (fVar12 - *(float *)(param_4 + 0x1fc)),
         fVar12 != DAT_0047d538)) {
        iVar3 = 0;
        if (0 < *(int *)(**(int **)(*(int *)(iVar5 + 100) + 8) + 8)) {
          do {
            iVar7 = *(int *)(*(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74) + 0x10);
            FUN_00333abc(iVar7,iVar3,auStack_68);
            local_5c = fVar12;
            FUN_00333a38(iVar7,iVar3,auStack_68);
            iVar5 = iVar3 + 1;
            *(undefined1 *)(*(int *)(iVar7 + 4) + iVar3 * 0x124) = 1;
            iVar3 = iVar5;
          } while (iVar5 < *(int *)(**(int **)(*(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 100)
                                              + 8) + 8));
        }
        iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74);
        *(undefined4 *)(iVar5 + 0x24) = param_1;
        *(undefined4 *)(iVar5 + 0x28) = param_2;
        *(undefined4 *)(iVar5 + 0x2c) = param_3;
        iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74);
        *(undefined4 *)(iVar5 + 0x40) = uVar1;
        *(undefined4 *)(iVar5 + 0x44) = uVar1;
        *(undefined4 *)(iVar5 + 0x48) = uVar1;
        FUN_002cf064(local_58[6],*(undefined4 *)(iVar2 + *(int *)(param_4 + 0x1e8) * 4 + 0x74),2);
      }
      iVar5 = iVar2 + *(int *)(param_4 + 0x1ec) * 4;
      if ((*(int *)(iVar5 + 0x74) != 0) &&
         (fVar12 = *(float *)(param_4 + 500) * *(float *)(param_4 + 0x1fc), fVar12 != fVar11)) {
        iVar3 = 0;
        if (0 < *(int *)(**(int **)(*(int *)(iVar5 + 100) + 8) + 8)) {
          do {
            iVar7 = *(int *)(*(int *)(iVar2 + *(int *)(param_4 + 0x1ec) * 4 + 0x74) + 0x10);
            FUN_00333abc(iVar7,iVar3,auStack_68);
            local_5c = fVar12;
            FUN_00333a38(iVar7,iVar3,auStack_68);
            iVar5 = iVar3 + 1;
            *(undefined1 *)(*(int *)(iVar7 + 4) + iVar3 * 0x124) = 1;
            iVar3 = iVar5;
          } while (iVar5 < *(int *)(**(int **)(*(int *)(iVar2 + *(int *)(param_4 + 0x1ec) * 4 + 100)
                                              + 8) + 8));
        }
        iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1ec) * 4 + 0x74);
        *(undefined4 *)(iVar5 + 0x24) = param_1;
        *(undefined4 *)(iVar5 + 0x28) = param_2;
        *(undefined4 *)(iVar5 + 0x2c) = param_3;
        iVar5 = *(int *)(iVar2 + *(int *)(param_4 + 0x1ec) * 4 + 0x74);
        *(undefined4 *)(iVar5 + 0x40) = uVar1;
        *(undefined4 *)(iVar5 + 0x44) = uVar1;
        *(undefined4 *)(iVar5 + 0x48) = uVar1;
        FUN_002cf064(local_58[6],*(undefined4 *)(iVar2 + *(int *)(param_4 + 0x1ec) * 4 + 0x74),3);
        return;
      }
    }
  }
  return;
}

