// OoT3D decomp @ 002326ac  name=FUN_002326ac  size=1716

void FUN_002326ac(int param_1,int param_2,int param_3)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  int iStack_44;
  
  fVar2 = fRam002329b0;
  fStack_50 = fRam002329b0;
  uStack_4c = uRam002329b4;
  fStack_48 = fRam002329b0;
  fVar15 = *(float *)(param_1 + 0x200);
  if ((*(uint *)(param_1 + 0xe54) & 8) != 0) {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffff7;
  }
  iVar6 = func_0x003478bc(*(undefined4 *)(param_3 + 0x38),9);
  *(undefined4 *)(param_1 + 0xe8c) = *(undefined4 *)(iVar6 + 0xc);
  iVar11 = param_1 + 0x1064;
  *(undefined4 *)(param_1 + 0xe90) = *(undefined4 *)(iVar6 + 0x1c);
  *(undefined4 *)(param_1 + 0xe94) = *(undefined4 *)(iVar6 + 0x2c);
  fVar5 = fRam00232d94;
  iVar6 = iRam002329d4;
  uVar4 = uRam002329d0;
  uVar3 = uRam002329cc;
  cVar1 = *(char *)(param_1 + 0xe74);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x1a4) == '\0') goto LAB_00232c80;
    if ((((((uint)(iRam002329b8 + (int)fVar15) < uRam002329bc) &&
          (*(char *)(param_1 + 0x1b0) == '\0')) ||
         (((int)fVar15 + 0xbd4fffffU < uRam002329bc && (*(char *)(param_1 + 0x1b0) == '\0')))) ||
        (((int)fVar15 + 0xbdc3ffffU < uRam002329c0 && (*(char *)(param_1 + 0x1b0) == '\x01')))) ||
       (((int)fVar15 + 0xbd97ffffU < uRam002329c4 && (*(char *)(param_1 + 0x1b0) == '\x01')))) {
      iVar6 = func_0x003759d0();
      if (iVar6 < iRam002329c8) {
        *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 2;
        func_0x003409ac(param_3,6,&fStack_50,iVar11);
        *(float *)(param_1 + 0x1068) = *(float *)(param_1 + 0x1068) - fVar2;
      }
      goto LAB_00232c80;
    }
  }
  iStack_44 = param_1 + 0x1070;
  iVar9 = param_1 + 0x107c;
  if (*(char *)(param_1 + 0x1a4) == '\f') {
    uVar10 = uRam002329cc + 0x100000;
    if (((int)fVar15 + 0xbedfffffU < uVar10) ||
       ((int)fVar15 + 0xbe37ffffU < uRam002329cc + 0x1c0000)) {
      iVar13 = func_0x003759d0();
      if (iVar13 < iVar6) {
        *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 2;
        func_0x003409ac(param_3,6,&fStack_50,auStack_5c);
        func_0x0033258c(uVar4,auStack_5c,iVar11);
      }
      iVar11 = func_0x003759d0();
      if (iVar11 < iVar6) {
        *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 1;
        func_0x003409ac(param_3,0xd,&fStack_50,auStack_5c);
        func_0x0033258c(uVar4,auStack_5c,param_1 + 0x1058);
      }
    }
    uVar7 = (int)fVar15 + 0xbf3fffff;
    bVar12 = uRam002329d8 <= uVar7;
    if (bVar12) {
      uVar7 = (int)fVar15 + 0xbe47ffff;
    }
    if ((!bVar12 || uVar7 < uVar10) && (iVar11 = func_0x003759d0(), iVar11 < iVar6)) {
      *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 8;
      func_0x003409ac(param_3,0x12,&fStack_50,auStack_5c);
      func_0x0033258c(uVar4,auStack_5c,iVar9);
    }
    bVar12 = uRam002329dc <= (int)fVar15 + 0xbf1fffffU;
    uVar10 = uRam002329dc;
    if (bVar12) {
      uVar10 = (int)fVar15 + 0xbe2fffff;
    }
    if ((bVar12 && uVar3 <= uVar10) || (iVar11 = func_0x003759d0(), iVar6 <= iVar11))
    goto LAB_00232c80;
  }
  else {
    if (cVar1 == '\a' || cVar1 == '\t') {
      if ((int)fVar15 + 0xbe9fffffU < uRam002329cc) {
        *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 1;
        func_0x003409ac(param_3,0xd,&fStack_50,auStack_5c);
        func_0x0033258c(fVar2,auStack_5c,param_1 + 0x1058);
        goto LAB_00232c80;
      }
      if ((int)fVar15 + 0xbeffffffU < uRam002329cc) {
        *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 2;
        func_0x003409ac(param_3,6,&fStack_50,auStack_5c);
        func_0x0033258c(uVar4,auStack_5c,iVar11);
        goto LAB_00232c80;
      }
      if ((int)fVar15 + 0xc07fffffU < uRam00232d90) goto LAB_00232c50;
      if (~(uRam00232d90 << 0x14) <= (int)fVar15 + 0xbe2fffffU) goto LAB_00232c80;
LAB_00232c14:
      *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 8;
      func_0x003409ac(param_3,0x12,&fStack_50,auStack_5c);
      func_0x0033258c(uVar4,auStack_5c,iVar9);
      goto LAB_00232c80;
    }
    if (*(char *)(param_1 + 0x1a4) == '\x0e') {
      if ((int)fVar15 <= iRam00232d98) goto LAB_00232c80;
      fVar14 = (float)func_0x003759d0();
      if (fVar5 - (fVar15 - fRam00232d9c) * fRam00232da0 <= fVar14) goto LAB_00232b58;
      iVar6 = func_0x003759d0();
      if (iVar6 < 0x3f000000) {
        *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 8;
        func_0x003409ac(param_3,0x12,&fStack_50,auStack_5c);
        func_0x0033258c(uVar4,auStack_5c,iVar9);
      }
      iVar6 = func_0x003759d0();
joined_r0x00232b50:
      if (0x3effffff < iVar6) goto LAB_00232c80;
    }
    else {
LAB_00232b58:
      if (*(char *)(param_1 + 0x1a4) == '\x0f') {
        if ((int)fVar15 <= iRam00232da4) goto LAB_00232c80;
        fVar14 = (float)func_0x003759d0();
        if (fVar14 < fVar5 - (fVar15 - fVar2) * fRam00232da8) {
          iVar6 = func_0x003759d0();
          if (iVar6 < 0x3f000000) {
            *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 8;
            func_0x003409ac(param_3,0x12,&fStack_50,auStack_5c);
            func_0x0033258c(uVar4,auStack_5c,iVar9);
          }
          iVar6 = func_0x003759d0();
          goto joined_r0x00232b50;
        }
      }
      if ((*(char *)(param_1 + 0x1a4) != '\x10') || (iVar6 = func_0x003759d0(), 0x3effffff < iVar6))
      goto LAB_00232c80;
      iVar6 = func_0x003759d0();
      if (iVar6 < 0x3f000000) goto LAB_00232c14;
    }
  }
LAB_00232c50:
  *(ushort *)(param_1 + 0x1054) = *(ushort *)(param_1 + 0x1054) | 4;
  func_0x003409ac(param_3,0x16,&fStack_50,auStack_5c);
  func_0x0033258c(uVar4,auStack_5c,iStack_44);
LAB_00232c80:
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xfa4)) {
    do {
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0xfa8) + iVar6 * 0x50 + 0x28);
      uStack_68 = *puVar8;
      uStack_64 = puVar8[1];
      uStack_60 = puVar8[2];
      func_0x003409ac(param_3,*(undefined1 *)(*(int *)(param_1 + 0xfa8) + iVar6 * 0x50 + 0x4c),
                      &uStack_68,&uStack_74);
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0xfa8) + iVar6 * 0x50 + 0x38);
      iVar9 = iVar6 + 1;
      *puVar8 = uStack_74;
      puVar8[1] = uStack_70;
      puVar8[2] = uStack_6c;
      iVar11 = *(int *)(param_1 + 0xfa8);
      *(float *)(iVar11 + iVar6 * 0x50 + 0x44) =
           *(float *)(iVar6 * 0x50 + 0x34 + iVar11) * *(float *)(iVar6 * 0x50 + 0x48 + iVar11);
      iVar6 = iVar9;
    } while (iVar9 < *(int *)(param_1 + 0xfa4));
  }
  func_0x003762a4();
  func_0x00376168(param_2,param_2 + 0x5c78,param_1 + 0xf8c);
  return;
}

