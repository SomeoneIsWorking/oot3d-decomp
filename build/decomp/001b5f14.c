// OoT3D decomp @ 001b5f14  name=FUN_001b5f14  size=1392

void FUN_001b5f14(int param_1,int param_2)

{
  float fVar1;
  uint *puVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 local_140 [48];
  char acStack_80 [68];
  
  iVar7 = DAT_001b6248;
  uVar16 = DAT_001b6244;
  uVar9 = DAT_001b6240;
  fVar13 = DAT_001b623c;
  fVar15 = DAT_001b6238;
  fVar1 = DAT_001b6234;
  uVar10 = DAT_001b6230;
  if (*(int *)(param_1 + 0x228) != DAT_001b622c) {
    if ((int)*(float *)(param_1 + 0x2c4) == 0) {
      if (*(short *)(param_2 + 0x104) == 0x5b || *(short *)(param_2 + 0x104) == 0x55) {
        uVar6 = FUN_0037571c(param_2);
        if ((uVar6 | *DAT_001b624c) == 0) {
          fVar13 = *(float *)(param_1 + 0x98);
        }
        else {
          fVar18 = *(float *)(param_2 + 0x1b8) - *(float *)(param_1 + 0x28);
          fVar14 = *(float *)(param_2 + 0x1bc) - *(float *)(param_1 + 0x2c);
          fVar17 = *(float *)(param_2 + 0x1c0) - *(float *)(param_1 + 0x30);
          fVar13 = SQRT(fVar18 * fVar18 + fVar14 * fVar14 + fVar17 * fVar17) * fVar13;
        }
        if (*(float *)(param_1 + 700) < fVar13) {
          fVar15 = fVar1;
        }
        FUN_0036e168(fVar15,uVar16,uVar10,uVar9,param_1 + 0x2c4);
        if (*(int *)(param_1 + 0x2c4) < iVar7) {
          uVar6 = *(uint *)(param_1 + 4) & 0xfffffffe;
        }
        else {
          uVar6 = *(uint *)(param_1 + 4) | 1;
        }
        *(uint *)(param_1 + 4) = uVar6;
      }
      else {
        *(float *)(param_1 + 0x2c4) = DAT_001b6238;
      }
    }
    else {
      FUN_003731e0(param_1 + 0x1a4);
      if (*(short *)(param_2 + 0x104) == 0x5b || *(short *)(param_2 + 0x104) == 0x55) {
        uVar6 = FUN_0037571c(param_2);
        if ((uVar6 | *DAT_001b624c) == 0) {
          fVar13 = *(float *)(param_1 + 0x98);
        }
        else {
          fVar18 = *(float *)(param_2 + 0x1b8) - *(float *)(param_1 + 0x28);
          fVar14 = *(float *)(param_2 + 0x1bc) - *(float *)(param_1 + 0x2c);
          fVar17 = *(float *)(param_2 + 0x1c0) - *(float *)(param_1 + 0x30);
          fVar13 = SQRT(fVar18 * fVar18 + fVar14 * fVar14 + fVar17 * fVar17) * fVar13;
        }
        if (*(float *)(param_1 + 700) < fVar13) {
          fVar15 = fVar1;
        }
        FUN_0036e168(fVar15,uVar16,uVar10,uVar9,param_1 + 0x2c4);
        if (*(int *)(param_1 + 0x2c4) < iVar7) {
          uVar6 = *(uint *)(param_1 + 4) & 0xfffffffe;
        }
        else {
          uVar6 = *(uint *)(param_1 + 4) | 1;
        }
        *(uint *)(param_1 + 4) = uVar6;
      }
      else {
        *(float *)(param_1 + 0x2c4) = fVar15;
      }
      if (((*(short *)(param_1 + 0x2b8) == 0) ||
          (sVar3 = *(short *)(param_1 + 0x2b8) + -1, *(short *)(param_1 + 0x2b8) = sVar3, sVar3 == 0
          )) && (sVar3 = *(short *)(param_1 + 0x2ba) + 1, *(short *)(param_1 + 0x2ba) = sVar3,
                sVar3 == 4)) {
        *(undefined2 *)(param_1 + 0x2ba) = 0;
        uVar4 = FUN_003702c8(0x1e);
        *(undefined2 *)(param_1 + 0x2b8) = uVar4;
      }
    }
  }
  if (*(float *)(param_1 + 0x2c4) == fVar1) {
    uVar6 = *(uint *)(param_1 + 4) | 0x20000000;
  }
  else {
    uVar6 = *(uint *)(param_1 + 4) & 0xdfffffff;
  }
  *(uint *)(param_1 + 4) = uVar6;
  if (*(short *)(param_1 + 0x28c) == 0) {
    FUN_00376864(param_1);
  }
  uVar16 = FUN_00371738(acStack_80,DAT_001b6250,0x44);
  puVar2 = DAT_001b6258;
  iVar7 = DAT_001b6254;
  uVar9 = DAT_001b6250;
  if (*(int *)(DAT_001b6254 + 4) == 0) {
    if ((*(uint *)(DAT_001b6254 + 0xbc) & *DAT_001b6258) == 0) {
      uVar6 = 3;
    }
    else {
      uVar6 = 4;
    }
  }
  else if ((*(ushort *)(DAT_001b6254 + 0xef4) & 1) == 0) {
    uVar6 = *(uint *)(DAT_001b6254 + 0xbc) & DAT_001b6258[0x12];
    if (uVar6 != 0) {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 2;
  }
  bVar12 = acStack_80[uVar6 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 5] == '\0';
  if (!bVar12) {
    uVar16 = DAT_001b625c;
  }
  if (bVar12) {
    *(float *)(param_1 + 0x70) = fVar1;
  }
  if (!bVar12) {
    *(undefined4 *)(param_1 + 0x70) = uVar16;
  }
  FUN_00371738(acStack_80,uVar9,0x44);
  if (*(int *)(iVar7 + 4) == 0) {
    if ((*(uint *)(iVar7 + 0xbc) & *puVar2) == 0) {
      uVar6 = 3;
    }
    else {
      uVar6 = 4;
    }
  }
  else if ((*(ushort *)(iVar7 + 0xef4) & 1) == 0) {
    uVar6 = *(uint *)(iVar7 + 0xbc) & puVar2[0x12];
    if (uVar6 != 0) {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 2;
  }
  if ((acStack_80[uVar6 + (*(ushort *)(param_1 + 0x1c) & 0xff) * 5] != '\0') ||
     (*(char *)(param_1 + 0xca4) == '\0')) {
    FUN_00376340(fVar1,fVar1,fVar1,param_2,param_1,4);
    *(undefined *)(param_1 + 0xca4) = 1;
  }
  (**(code **)(param_1 + 0x228))(param_1,param_2);
  iVar11 = *(int *)(DAT_001b64b8 + param_2);
  uVar6 = FUN_0037571c(param_2);
  uVar9 = DAT_001b64bc;
  if ((*DAT_001b624c | uVar6) == 0) {
    uVar10 = *(undefined4 *)(iVar11 + 0x2c);
    uVar16 = *(undefined4 *)(iVar11 + 0x30);
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(iVar11 + 0x28);
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
    *(undefined4 *)(param_1 + 0x2ac) = uVar16;
    FUN_00371738(local_140,uVar9,0x104);
    if (*(int *)(iVar7 + 4) == 0) {
      uVar10 = DAT_001b64c0;
      if ((*(ushort *)(param_1 + 0x1c) & 0xff) != 0xc) {
        if ((*(uint *)(iVar7 + 0xbc) & *puVar2) == 0) {
          uVar6 = 3;
        }
        else {
          uVar6 = 4;
        }
        goto LAB_001b63a8;
      }
    }
    else {
      if ((*(ushort *)(iVar7 + 0xef4) & 1) == 0) {
        uVar6 = *(uint *)(iVar7 + 0xbc) & puVar2[0x12];
        if (uVar6 != 0) {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 2;
      }
LAB_001b63a8:
      uVar10 = local_140[(*(ushort *)(param_1 + 0x1c) & 0xff) * 5 + uVar6];
    }
    *(undefined4 *)(param_1 + 0x2a0) = uVar10;
    uVar6 = FUN_00171ed4(param_1,param_2);
    bVar12 = uVar6 == 0;
    if (bVar12) {
      uVar6 = (uint)*(ushort *)(param_1 + 0x28c);
    }
    if (bVar12 && uVar6 == 0) goto LAB_001b648c;
  }
  else {
    uVar9 = *(undefined4 *)(param_2 + 0x1bc);
    uVar16 = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x2a8) = uVar9;
    *(undefined4 *)(param_1 + 0x2ac) = uVar16;
    *(undefined4 *)(param_1 + 0x2a0) = uVar10;
    if ((*(ushort *)(param_1 + 0x1c) & 0xff) != 0) {
      FUN_0034c664(param_1,param_1 + 0x28c,2);
    }
  }
  local_140[0] = DAT_001b64c4;
  iVar7 = FUN_00342714(*(undefined4 *)(param_1 + 0x2c0),param_2,param_1,param_1 + 0x28c,DAT_001b64c8
                      );
  if (iVar7 != 0) {
    uVar5 = *(ushort *)(param_1 + 0x1c) & 0xff;
    bVar12 = uVar5 == 0xc;
    if (bVar12) {
      uVar5 = *(ushort *)(param_2 + 0x104);
    }
    if (bVar12 && uVar5 == 0x5b) {
      uVar8 = (uint)*(byte *)((uint)*(byte *)(DAT_001b64cc + 0x2d) + DAT_001b64d0);
      uVar6 = uVar8;
      if (uVar8 < 0x32) {
        uVar6 = DAT_001b64d4;
      }
      uVar4 = (undefined2)uVar6;
      if (uVar8 >= 0x32) {
        uVar4 = (undefined2)DAT_001b64d8;
      }
      *(undefined2 *)(param_1 + 0x116) = uVar4;
      iVar7 = FUN_0036bc84(param_2);
      if (iVar7 == 9) {
        if ((*(ushort *)(DAT_001b64dc + 0x26) & 0x1000) == 0) {
          uVar4 = (undefined2)DAT_001b64e0;
        }
        else {
          uVar4 = (undefined2)DAT_001b64e4;
        }
        *(undefined2 *)(param_1 + 0x116) = uVar4;
        *(undefined *)(param_1 + 0x2b4) = 0;
      }
      *(undefined2 *)(DAT_001b64e8 + iVar11) = *(undefined2 *)(param_1 + 0x116);
    }
  }
LAB_001b648c:
  FUN_0037632c(param_1,param_1 + 0x230);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x230);
  return;
}

