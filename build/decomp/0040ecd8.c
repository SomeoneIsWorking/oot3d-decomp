// OoT3D decomp @ 0040ecd8  name=FUN_0040ecd8  size=1308

undefined4 FUN_0040ecd8(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  uint3 uVar6;
  bool bVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;

  uVar11 = *(undefined4 *)(param_2 + 0xc0);
  uVar16 = 0;
  pbVar15 = *(byte **)(param_2 + 0x20);
  iVar18 = 0;
  bVar5 = false;
  *(byte **)(param_2 + 0x20) = pbVar15 + 1;
  uVar17 = (uint)*pbVar15;
  bVar7 = true;
  if (uVar17 == 0xa2) {
    *(byte **)(param_2 + 0x20) = pbVar15 + 2;
    uVar17 = (uint)pbVar15[1];
    bVar7 = false;
    if (*(char *)(param_2 + 0x24) != '\0') {
      bVar7 = true;
    }
  }
  if (uVar17 == 0xa3) {
    pbVar15 = *(byte **)(param_2 + 0x20);
    iVar18 = 2;
    *(byte **)(param_2 + 0x20) = pbVar15 + 1;
    uVar17 = (uint)*pbVar15;
  }
  else if (uVar17 == 0xa4) {
    pbVar15 = *(byte **)(param_2 + 0x20);
    iVar18 = 4;
    *(byte **)(param_2 + 0x20) = pbVar15 + 1;
    uVar17 = (uint)*pbVar15;
  }
  else if (uVar17 == 0xa5) {
    pbVar15 = *(byte **)(param_2 + 0x20);
    iVar18 = 5;
    *(byte **)(param_2 + 0x20) = pbVar15 + 1;
    uVar17 = (uint)*pbVar15;
  }
  if (uVar17 == 0xa0) {
    pbVar15 = *(byte **)(param_2 + 0x20);
    uVar16 = 4;
    *(byte **)(param_2 + 0x20) = pbVar15 + 1;
    bVar1 = *pbVar15;
LAB_0040edd0:
    uVar17 = (uint)bVar1;
    bVar5 = true;
  }
  else if (uVar17 == 0xa1) {
    pbVar15 = *(byte **)(param_2 + 0x20);
    uVar16 = 5;
    *(byte **)(param_2 + 0x20) = pbVar15 + 1;
    bVar1 = *pbVar15;
    goto LAB_0040edd0;
  }
  if ((uVar17 & 0x80) == 0) {
    puVar13 = *(undefined1 **)(param_2 + 0x20);
    if (!bVar5) {
      uVar16 = 3;
    }
    *(undefined1 **)(param_2 + 0x20) = puVar13 + 1;
    uVar2 = *puVar13;
    iVar18 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,uVar16);
    iVar12 = (int)*(char *)(param_2 + 0x88) + uVar17;
    if (!bVar7) {
      return 0;
    }
    uVar11 = UnsignedSaturate(iVar12,7);
    UnsignedDoesSaturate(iVar12,7);
    if ((*(char *)(param_2 + 0x48) == '\0') && (param_3 != 0)) {
      iVar12 = iVar18;
      if (iVar18 < 1) {
        iVar12 = -1;
      }
      (**(code **)(*param_1 + 4))
                (param_1,param_2,uVar11,uVar2,iVar12,(int)*(char *)(param_2 + 0x26));
    }
    cVar8 = *(char *)(param_2 + 0x25);
    if (cVar8 == '\0') {
      return 0;
    }
    if (iVar18 == 0) {
      cVar8 = '\x01';
    }
    *(int *)(param_2 + 0x44) = iVar18;
    if (iVar18 != 0) {
      return 0;
    }
    *(char *)(param_2 + 0x4a) = cVar8;
    return 0;
  }
  uVar9 = 0;
  iVar12 = 0;
  switch((int)(uVar17 & 0xf0) >> 4) {
  case 8:
    if (uVar17 == 0x88) {
      puVar13 = *(undefined1 **)(param_2 + 0x20);
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 1;
      uVar2 = *puVar13;
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 2;
      uVar3 = puVar13[1];
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 3;
      uVar4 = puVar13[2];
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 4;
      if (!bVar7) {
        return 0;
      }
      (**(code **)*param_1)
                (param_1,param_2,0x88,uVar2,(uint)CONCAT21(CONCAT11(uVar3,uVar4),puVar13[3]));
      return 0;
    }
    if (uVar17 < 0x89) {
      if (uVar17 == 0x80) {
        if (!bVar5) {
          uVar16 = 3;
        }
        uVar11 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,uVar16);
        if (!bVar7) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x44) = uVar11;
        return 0;
      }
      if (uVar17 != 0x81) {
        return 0;
      }
      if (!bVar5) {
        uVar16 = 3;
      }
      uVar14 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,uVar16);
    }
    else {
      if (uVar17 == 0x89) {
        puVar13 = *(undefined1 **)(param_2 + 0x20);
        *(undefined1 **)(param_2 + 0x20) = puVar13 + 1;
        uVar2 = *puVar13;
        *(undefined1 **)(param_2 + 0x20) = puVar13 + 2;
        uVar3 = puVar13[1];
        *(undefined1 **)(param_2 + 0x20) = puVar13 + 3;
        uVar6 = CONCAT21(CONCAT11(uVar2,uVar3),puVar13[2]);
      }
      else {
        if (uVar17 != 0x8a) {
          return 0;
        }
        puVar13 = *(undefined1 **)(param_2 + 0x20);
        *(undefined1 **)(param_2 + 0x20) = puVar13 + 1;
        uVar2 = *puVar13;
        *(undefined1 **)(param_2 + 0x20) = puVar13 + 2;
        uVar3 = puVar13[1];
        *(undefined1 **)(param_2 + 0x20) = puVar13 + 3;
        uVar6 = CONCAT21(CONCAT11(uVar2,uVar3),puVar13[2]);
      }
      uVar14 = (uint)uVar6;
    }
    goto joined_r0x0040f054;
  case 9:
    break;
  default:
    goto switchD_0040eea0_caseD_a;
  case 0xb:
  case 0xc:
  case 0xd:
    if (!bVar5) {
      uVar16 = 1;
    }
    uVar9 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,uVar16);
    uVar9 = uVar9 & 0xff;
    if (iVar18 != 0) {
      iVar12 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,iVar18);
    }
    break;
  case 0xe:
    if (!bVar5) {
      uVar16 = 2;
    }
    sVar10 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,uVar16);
    uVar14 = (uint)sVar10;
joined_r0x0040f054:
    if (bVar7) {
      (**(code **)*param_1)(param_1,param_2,uVar17,uVar14,0);
    }
switchD_0040eea0_caseD_a:
    return 0;
  case 0xf:
    if (uVar17 == 0xf0) {
      pbVar15 = *(byte **)(param_2 + 0x20);
      *(byte **)(param_2 + 0x20) = pbVar15 + 1;
      bVar1 = *pbVar15;
      uVar14 = bVar1 & 0xf0;
      if (uVar14 == 0x80 || uVar14 == 0x90) {
        *(byte **)(param_2 + 0x20) = pbVar15 + 2;
        uVar9 = (ushort)pbVar15[1];
        if (!bVar5) {
          uVar16 = 2;
        }
        sVar10 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,uVar16);
        iVar12 = (int)sVar10;
      }
      else {
        if (uVar14 != 0xe0) break;
        if (!bVar5) {
          uVar16 = 2;
        }
        uVar9 = FUN_003040ac(param_1,param_2 + 0x20,uVar11,param_2,uVar16);
      }
      if (!bVar7) {
        return 0;
      }
      (**(code **)*param_1)(param_1,param_2,bVar1 + 0xf000,uVar9,iVar12);
      goto LAB_0040f0ac;
    }
    if (uVar17 == 0xfe) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 2;
      return 0;
    }
    if (uVar17 == 0xff) {
      if (!bVar7) {
        return 0;
      }
      return 1;
    }
  }
  if (!bVar7) {
    return 0;
  }
LAB_0040f0ac:
  (**(code **)*param_1)(param_1,param_2,uVar17,uVar9,iVar12);
  return 0;
}
