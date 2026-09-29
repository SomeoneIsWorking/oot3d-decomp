// OoT3D decomp @ 002fed84  name=FUN_002fed84  size=1176

void FUN_002fed84(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int local_38;

  iVar4 = *DAT_002ff234;
  iVar12 = *(int *)(DAT_002ff230 + 0x9c);
  if (*(char *)(iVar4 + 0x5c3) == '\0') {
    uVar14 = 8;
  }
  else {
    uVar14 = 0x20;
  }
  puVar11 = *(uint **)(DAT_002ff230 + (param_1 & 0x1f) * 4 + 0xa4);
  if (puVar11 != (uint *)0x0) {
    do {
      uVar5 = *puVar11;
      if (uVar5 != param_1) {
        puVar11 = (uint *)puVar11[6];
      }
    } while (uVar5 != param_1 && puVar11 != (uint *)0x0);
  }
  piVar3 = (int *)FUN_002eaff4();
  puVar1 = DAT_002ff238;
  if (param_2 == 0x500) {
    sVar10 = 1;
    local_38 = 0;
LAB_002fef98:
    iVar15 = 1;
  }
  else {
    if (param_2 == 0x501) {
      sVar10 = 2;
      local_38 = 1;
      goto LAB_002fef98;
    }
    if (param_2 != 0x502) {
      return;
    }
    sVar10 = 2;
    iVar15 = 2;
    local_38 = 2;
  }
  puVar7 = (undefined4 *)*DAT_002ff238;
  uVar5 = (int)puVar7 - *(int *)(iVar12 + 4);
  *(uint *)(iVar12 + 0xc) = uVar5;
  puVar2 = DAT_002ff23c;
  if (*(uint *)(iVar12 + 0x14) != uVar5) {
    if ((uVar5 & 8) == 0) {
      *(uint *)(iVar12 + 0xc) = uVar5 + 0x20;
      if (puVar7 < (undefined4 *)*puVar2) {
        *puVar7 = 0;
        puVar7[1] = DAT_002ff240;
        *puVar1 = puVar7 + 2;
      }
    }
    else {
      *(uint *)(iVar12 + 0xc) = uVar5 + 0x18;
    }
    puVar7 = (undefined4 *)*puVar1;
    if (puVar7 < (undefined4 *)*puVar2) {
      *puVar7 = 1;
      puVar7[1] = DAT_002ff244;
      puVar7 = puVar7 + 2;
      *puVar1 = puVar7;
    }
    if (puVar7 < (undefined4 *)*puVar2) {
      *puVar7 = 1;
      puVar7[1] = DAT_002ff248;
      puVar7 = puVar7 + 2;
      *puVar1 = puVar7;
    }
    if (puVar7 < (undefined4 *)*puVar2) {
      *puVar7 = DAT_002ff24c;
      puVar7[1] = DAT_002ff250;
      *puVar1 = puVar7 + 2;
    }
    puVar6 = (undefined1 *)(*(int *)(iVar12 + 0x18) + *(int *)(iVar12 + 0x20) * 0x1c);
    *puVar6 = 1;
    *(int *)(puVar6 + 4) = *(int *)(iVar12 + 4) + *(int *)(iVar12 + 0x14);
    *(int *)(puVar6 + 8) = *(int *)(iVar12 + 0xc) - *(int *)(iVar12 + 0x14);
    *(uint *)(puVar6 + 0xc) = *(uint *)(puVar6 + 0xc) & 0xfffffffd;
    *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(iVar12 + 0xc);
    *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
  }
  puVar6 = (undefined1 *)(*(int *)(iVar12 + 0x18) + *(int *)(iVar12 + 0x20) * 0x1c);
  *puVar6 = 3;
  switch(piVar3[7]) {
  case 0:
    iVar8 = 4;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xfffffff8;
    break;
  case 1:
    iVar8 = 3;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xfffffff8 | 1;
    break;
  case 2:
    iVar8 = 2;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xfffffff8 | 3;
    break;
  case 3:
    iVar8 = 2;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xfffffff8 | 2;
    break;
  case 4:
    iVar8 = 2;
    *(uint *)(puVar6 + 0x14) = *(uint *)(puVar6 + 0x14) & 0xfffffff8 | 4;
    goto LAB_002ff00c;
  default:
    iVar8 = 0;
    goto LAB_002ff00c;
  }
  *(uint *)(puVar6 + 0x14) = uVar5;
LAB_002ff00c:
  uVar5 = DAT_002ff254;
  *(uint *)(puVar6 + 4) =
       (param_4 * uVar14 + ((piVar3[4] - puVar11[4] * iVar15) - param_5) * piVar3[3]) * iVar8 +
       *piVar3;
  uVar9 = puVar11[2];
  if (uVar9 == uVar5) {
    iVar8 = 2;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xffffffc7 | 0x18;
  }
  else if ((int)uVar9 < (int)uVar5) {
    if (uVar9 != 0x8051) {
      if (uVar9 == 0x8056) {
        iVar8 = 2;
        *(uint *)(puVar6 + 0x14) = *(uint *)(puVar6 + 0x14) & 0xffffffc7 | 0x20;
        goto LAB_002ff0e4;
      }
LAB_002ff0e0:
      iVar8 = 0;
      goto LAB_002ff0e4;
    }
    iVar8 = 3;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xffffffc7 | 8;
  }
  else if (uVar9 - uVar5 == 1) {
    iVar8 = 4;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xffffffc7;
  }
  else {
    if (uVar9 - uVar5 != 0xd0b) goto LAB_002ff0e0;
    iVar8 = 2;
    uVar5 = *(uint *)(puVar6 + 0x14) & 0xffffffc7 | 0x10;
  }
  *(uint *)(puVar6 + 0x14) = uVar5;
LAB_002ff0e4:
  uVar5 = puVar11[1];
  *(uint *)(puVar6 + 8) = uVar5;
  *(short *)(puVar6 + 0xc) = (short)piVar3[3];
  *(short *)(puVar6 + 0xe) = (short)piVar3[4];
  *(short *)(puVar6 + 0x10) = (short)puVar11[3] * sVar10;
  *(short *)(puVar6 + 0x12) = (short)puVar11[4] * (short)iVar15;
  if (param_3 == 0) {
    uVar14 = *(uint *)(puVar6 + 0x14) & 0xffffffbf;
  }
  else {
    uVar9 = *(uint *)(puVar6 + 0x10);
    uVar16 = uVar9 & 0xffff;
    uVar13 = *(uint *)(puVar6 + 0xc) & 0xffff;
    if (uVar13 <= uVar16) {
      uVar14 = uVar9 >> 0x10;
    }
    if (uVar13 > uVar16 || uVar14 < *(uint *)(puVar6 + 0xc) >> 0x10) {
      if (sVar10 == 2) {
        if (iVar8 == 3) {
          uVar14 = 0x10;
        }
        else {
          uVar14 = 8;
        }
        uVar13 = uVar13 - uVar16;
        if ((uVar13 & uVar14) != 0) {
          uVar13 = uVar13 - uVar14;
        }
        iVar8 = (int)((puVar11[4] - 1) * uVar13 * iVar8) / 2;
      }
      else {
        iVar8 = (uVar13 - uVar16) * ((uVar9 >> 0x10) - 1) * iVar8;
      }
      *(uint *)(puVar6 + 8) = uVar5 - iVar8;
    }
    uVar14 = *(uint *)(puVar6 + 0x14) | 0x40;
  }
  uVar5 = local_38 << 7 | uVar14 & 0xfffffe7f;
  *(uint *)(puVar6 + 0x14) = uVar5;
  if (*(char *)(iVar4 + 0x5c3) == '\0') {
    uVar5 = local_38 << 7 | uVar14 & 0xfffffc7f;
  }
  else {
    uVar5 = uVar5 | 0x200;
  }
  *(uint *)(puVar6 + 0x14) = uVar5 & 0xfffff3ff;
  FUN_0030e038();
  *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
  if (((*(int *)(DAT_002ff230 + 0xa0) == iVar12) && (*(char *)(DAT_002ff230 + 0x12) != '\0')) &&
     (*(char *)(DAT_002ff230 + 0x11) == '\0')) {
    *(undefined1 *)(DAT_002ff230 + 0x11) = 1;
    FUN_003027dc();
  }
  FUN_0030dfd8();
  return;
}
