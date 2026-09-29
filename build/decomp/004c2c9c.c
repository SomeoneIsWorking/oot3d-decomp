// OoT3D decomp @ 004c2c9c  name=FUN_004c2c9c  size=896

void FUN_004c2c9c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_3c [4];
  float local_38;

  iVar9 = DAT_004c301c + *(char *)(param_1 + 0x2226) * 0x18;
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  iVar4 = FUN_002b9c64(param_2,param_1);
  uVar8 = DAT_004c3020;
  if (iVar4 == 0) {
    FUN_003384c4(DAT_004c3020,*(undefined4 *)(iVar9 + 0x10),*(undefined4 *)(iVar9 + 0x14),param_1);
    uVar5 = *(uint *)(param_1 + 0x1714);
    bVar10 = (uVar5 & 0x40000000) != 0;
    if (bVar10) {
      uVar5 = (uint)*(byte *)(param_1 + 0x1a9);
    }
    if ((bVar10 && uVar5 != 7) && (iVar4 = FUN_0036b1e0(uVar8,param_1 + 0x254), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x221c) = DAT_004c3024;
      *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xbfffffff;
    }
    if (DAT_004c3028 < *(int *)(param_1 + 0x221c)) {
      FUN_002c205c(param_2,param_1);
    }
    FUN_003705a0(uVar8,DAT_004c302c,param_1 + 0x221c);
    if (('\0' < *(char *)(param_1 + 0x2228)) &&
       ((**(uint **)(param_1 + 0x29c8) & *DAT_004c3030) == 0)) {
      *(char *)(param_1 + 0x2228) = -*(char *)(param_1 + 0x2228);
    }
    iVar6 = FUN_0036b4ec(param_1 + 0x254,param_2);
    uVar7 = DAT_004c3038;
    iVar4 = DAT_004c3034;
    if (iVar6 == 0) {
      if ((*(char *)(param_1 + 0x1a9) == '\a') &&
         (*(char *)(param_1 + 0x2226) == '\x16' || *(char *)(param_1 + 0x2226) == '\x13')) {
        if (((*(uint *)(DAT_004c3034 + 0x148) & 1) == 0) &&
           (iVar9 = FUN_003679b4(DAT_004c3034 + 0x148), puVar3 = DAT_004c3040, uVar2 = DAT_004c303c,
           iVar9 != 0)) {
          *DAT_004c3040 = uVar8;
          puVar3[1] = uVar2;
          puVar3[2] = uVar7;
        }
        local_38 = (float)FUN_003596d0(param_2,param_1,DAT_004c3040,auStack_3c);
        fVar11 = *(float *)(param_1 + 0x2c) - local_38;
        uVar7 = FUN_003758b0(uVar7,fVar11);
        FUN_00370378(param_1 + 0x48,uVar7,800);
        FUN_002bf67c(param_1,1);
        if ((((*(char *)(param_1 + 0x2226) == '\x16') &&
             (iVar9 = FUN_0036b1e0(DAT_004c3044,param_1 + 0x254), iVar9 != 0)) ||
            ((*(char *)(param_1 + 0x2226) == '\x13' &&
             (iVar9 = FUN_0036b1e0(DAT_004c3048,param_1 + 0x254), iVar9 != 0)))) &&
           (((uint)fVar11 < (uint)DAT_004c304c &&
            ((int)fVar11 < (int)((int)DAT_004c304c + 0x80000000U))))) {
          if (((*(uint *)(iVar4 + 0x14c) & 1) == 0) &&
             (iVar4 = FUN_003679b4(DAT_004c3050), puVar3 = DAT_004c3054, iVar4 != 0)) {
            *DAT_004c3054 = uVar8;
            puVar3[1] = uVar8;
            puVar3[2] = uVar8;
          }
          uVar8 = FUN_0036c5bc(param_2,0);
          uVar8 = FUN_0036f848(uVar8,3);
          FUN_0036f7c0(uVar8,DAT_004c3058);
          FUN_0036f6b0(uVar8,7,0,0,0);
          FUN_0036f628(uVar8,0x14);
          *(undefined1 *)(DAT_004c305c + param_2) = 4;
          FUN_0036f59c(param_1,DAT_004c3060);
          FUN_0035b9d4(param_2,auStack_3c,DAT_004c3054);
          return;
        }
      }
    }
    else {
      iVar4 = FUN_002c22a0(param_1,param_2);
      if (iVar4 == 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x2a6);
        iVar4 = FUN_003518cc(param_1);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar9 + 4);
        }
        else {
          iVar4 = *(int *)(iVar9 + 8);
        }
        FUN_0034bbfc(param_1);
        *(undefined1 *)(param_1 + 0x2a6) = 0;
        if ((iVar4 == 0x15a) && (*(char *)(param_1 + 0x1b3) != '\x03')) {
          iVar4 = 0x13c;
        }
        FUN_0033f7ac(param_1,iVar4,param_2);
        *(undefined1 *)(param_1 + 0x24b8) = 1;
        *(undefined1 *)(param_1 + 0x2a6) = uVar1;
        *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) | 8;
      }
    }
  }
  return;
}
