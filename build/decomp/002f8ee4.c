// OoT3D decomp @ 002f8ee4  name=FUN_002f8ee4  size=1280

int FUN_002f8ee4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  bool bVar16;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_140;
  short *local_13c;
  int local_138;
  undefined2 uStack_12c;
  
  uVar6 = DAT_002f923c;
  *(undefined4 *)(param_1 + 0x224) = param_2;
  *(undefined4 *)(param_1 + 0x428) = param_3;
  *(undefined4 *)(param_1 + 0x218) = uVar6;
  *(undefined4 *)(param_1 + 0x21c) = uVar6;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  iVar5 = FUN_00313ce0(0x20);
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = FUN_002fc694(DAT_002f9240,DAT_002f9240,iVar5,*(undefined4 *)(param_1 + 0x224));
  }
  *(undefined4 *)(param_1 + 0x10c) = uVar6;
  uVar6 = DAT_002f9244;
  iVar5 = *(int *)(param_1 + 0x224);
  iVar14 = 0;
  if (0 < iVar5) {
    do {
      FUN_002f8b80(uVar6,uVar6,*(undefined4 *)(param_1 + 0x10c),1,iVar14);
      iVar5 = *(int *)(param_1 + 0x224);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar5);
  }
  psVar7 = (short *)FUN_0033de14(iVar5 * 0xc);
  iVar5 = *(int *)(param_1 + 0x224);
  if (0 < iVar5) {
    sVar12 = 0;
    psVar15 = psVar7;
    do {
      *psVar15 = sVar12 << 2;
      sVar2 = sVar12 * 4 + 2;
      sVar3 = sVar12 * 4 + 1;
      psVar15[1] = sVar2;
      psVar15[2] = sVar3;
      psVar15[3] = sVar3;
      psVar15[4] = sVar2;
      psVar15[5] = sVar12 * 4 + 3;
      iVar5 = iVar5 + -1;
      psVar15 = psVar15 + 6;
      sVar12 = sVar12 + 1;
    } while (iVar5 != 0);
  }
  FUN_00371738(&local_14c,DAT_002f9248,0x118);
  local_14c = FUN_002fc3fc(*(undefined4 *)(param_1 + 0x10c),0);
  local_148 = FUN_002fc3f0(*(undefined4 *)(param_1 + 0x10c),0);
  local_144 = FUN_002fc3e4(*(undefined4 *)(param_1 + 0x10c),0);
  puVar9 = DAT_002f924c;
  local_140 = *(int *)(param_1 + 0x224) << 2;
  local_138 = *(int *)(param_1 + 0x224) * 6;
  *(int *)(param_1 + 0x220) = param_4;
  if (param_4 == 1) {
    uStack_12c = 2;
  }
  local_13c = psVar7;
  iVar5 = (**(code **)(*(int *)*puVar9 + 8))((int *)*puVar9,0x1b8);
  uVar8 = 0;
  if (iVar5 != 0) {
    uVar8 = FUN_00348f34(iVar5,&local_14c);
  }
  *(undefined4 *)(param_1 + 4) = uVar8;
  uVar8 = FUN_002e11d0(10);
  local_164 = DAT_002f9250;
  local_160 = DAT_002f9250;
  FUN_00348a64(*(undefined4 *)(param_1 + 4),0,uVar8,DAT_002f9254,DAT_002f9254);
  if (((*DAT_002f9258 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_002f9258), iVar5 != 0)) {
    FUN_0036788c(DAT_002f925c);
  }
  iVar5 = FUN_0034897c(*(undefined4 *)(DAT_002f9268 + 0x47c),*(undefined4 *)(param_1 + 4),0);
  *(int *)(param_1 + 8) = iVar5;
  uVar13 = *(uint *)(iVar5 + 0x178);
  iVar14 = 0x40;
  *(uint *)(iVar5 + 0x178) = uVar13 | 0x10;
  *(uint *)(*(int *)(param_1 + 8) + 0x178) = uVar13 | 0x12;
  iVar5 = 0;
  puVar9 = (undefined4 *)(param_1 + 0x328);
  do {
    *puVar9 = 0xffffffff;
    iVar1 = iVar5 * 4;
    iVar14 = iVar14 + -1;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0xc) = 0;
    uVar8 = DAT_002f926c;
    puVar9 = puVar9 + 1;
  } while (iVar14 != 0);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x224)) {
    do {
      *(undefined1 *)(param_1 + iVar5 + 0x434) = 0;
      bVar16 = *(int *)(param_1 + 0x428) == 1;
      if (*(int *)(param_1 + 0x428) < 2) {
        bVar16 = *(int *)(param_1 + 0x220) == 0;
      }
      if (bVar16) {
        iVar14 = FUN_00313ce0(0x14);
        uVar10 = 0;
        if (iVar14 != 0) {
          uVar10 = FUN_002db6a0(iVar14,0);
        }
        *(undefined4 *)(param_1 + iVar5 * 4 + 0xc) = uVar10;
      }
      iVar14 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(param_1 + iVar14 + 0x110) = uVar8;
    } while (iVar5 < *(int *)(param_1 + 0x224));
  }
  uVar4 = DAT_002f9274;
  uVar10 = DAT_002f9270;
  iVar5 = *(int *)(param_1 + 0x428);
  if (iVar5 == 2 || iVar5 == 3) {
    iVar5 = FUN_00313ce0(0x14);
    uVar11 = 0;
    if (iVar5 != 0) {
      uVar11 = FUN_002db6a0(iVar5,0);
    }
    *(undefined4 *)(param_1 + 0xc) = uVar11;
    *(undefined4 *)(param_1 + 0x110) = uVar8;
    *(undefined1 *)(param_1 + 0x434) = 1;
    local_164 = 0x2a;
    FUN_002e6cd4(uVar10,param_1,0,uVar4,0xc5,0x2a);
    if (*(int *)(param_1 + 0x428) == 2) {
      if (*(int *)(DAT_002f9278 + 4) == 0) goto LAB_002f9388;
      FUN_002f8d74(param_1,0,6);
    }
    else {
      FUN_002f8d74(param_1,0,9);
    }
  }
  else {
    if (iVar5 == 4) {
      *(undefined1 *)(param_1 + 0x434) = 0;
      local_164 = 0x2a;
      FUN_002e6cd4(uVar10,param_1,0,uVar4,0xc5,0x2a);
      FUN_002f8d74(param_1,0,0x59);
      goto LAB_002f940c;
    }
    if (iVar5 != 5 && iVar5 != 6) {
      if (iVar5 == 8) {
        local_154 = *DAT_002f942c;
        local_150 = DAT_002f942c[1];
        local_15c = DAT_002f942c[2];
        local_158 = DAT_002f942c[3];
        local_164 = DAT_002f942c[4];
        local_160 = DAT_002f942c[5];
        FUN_002fc534(*(undefined4 *)(param_1 + 0x10c),&local_154,&local_15c,1,0);
        FUN_002fc40c(*(undefined4 *)(param_1 + 0x10c),&local_164,&local_15c,1,0);
      }
      goto LAB_002f940c;
    }
    iVar5 = FUN_00313ce0(0x14);
    uVar11 = 0;
    if (iVar5 != 0) {
      uVar11 = FUN_002db6a0(iVar5,0);
    }
    *(undefined4 *)(param_1 + 0xc) = uVar11;
    iVar5 = DAT_002f9424;
    *(undefined4 *)(param_1 + 0x110) = uVar8;
    *(undefined1 *)(param_1 + 0x434) = 1;
    if (*(char *)((uint)*(byte *)(iVar5 + 3) + DAT_002f9428) == -1) {
      local_164 = 0;
      FUN_002e6cd4(uVar10,param_1,0,400,0xf0,0);
    }
    else {
      local_164 = 0x2a;
      FUN_002e6cd4(uVar10,param_1,0,uVar4,0xc5,0x2a);
    }
LAB_002f9388:
    FUN_002f8d74(param_1,0,3);
  }
  FUN_002db368(uVar6,*(undefined4 *)(param_1 + 0xc));
LAB_002f940c:
  FUN_0033ddd4(psVar7);
  return param_1;
}

