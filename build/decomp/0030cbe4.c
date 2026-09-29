// OoT3D decomp @ 0030cbe4  name=FUN_0030cbe4  size=2384

uint FUN_0030cbe4(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 uint *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint in_fpscr;
  float fVar15;
  undefined4 local_84;
  uint local_80 [5];
  undefined2 local_6c;
  undefined2 local_6a;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  char local_36;
  int iStack_34;
  int *local_30;
  int local_2c;
  int local_28;

  if ((*(int *)(param_1 + 4) == 0) ||
     (iStack_34 = param_1, local_30 = param_2, local_2c = param_3, local_28 = param_4,
     iVar2 = FUN_0030b780(), iVar2 == 0)) {
    return 0xb;
  }
  if (*local_30 != 0) {
    FUN_00313bdc(local_30);
  }
  iVar2 = FUN_00488374(*(undefined4 *)(param_1 + 4),local_2c,&local_4c);
  if (iVar2 == 0) {
    return 3;
  }
  local_50 = 0;
  local_54 = 0;
  local_58 = local_40;
  puVar9 = (uint *)0x0;
  uVar6 = local_44;
  uVar13 = local_48;
  if (param_7 != (uint *)0x0) {
    uVar3 = *param_7;
    if ((uVar3 & 1) != 0) {
      local_50 = (uint)(byte)param_7[1];
      local_54 = param_7[2];
    }
    if ((uVar3 & 4) != 0) {
      local_58 = param_7[4];
    }
    if ((uVar3 & 2) != 0) {
      local_48 = param_7[3];
    }
    if ((uVar3 & 8) != 0) {
      local_44 = param_7[5];
    }
    uVar6 = local_44;
    uVar13 = local_48;
    if ((uVar3 & 0x10) != 0) {
      puVar9 = param_7 + 6;
    }
  }
  local_5c = local_58;
  if (param_6 != 0) {
    local_5c = local_58 - 1;
  }
  local_60 = 0;
  if (local_28 != 0) {
    local_60 = FUN_004043c4(local_28,local_2c);
  }
  iVar2 = local_5c + local_60;
  local_64 = 0;
  uVar10 = UnsignedSaturate(iVar2,7);
  UnsignedDoesSaturate(iVar2,7);
  if (param_5 != 0) {
    if (uVar6 < 4) {
      local_64 = param_5 + uVar6 * 0x10 + 8;
    }
    else {
      local_64 = 0;
    }
    if (local_64 == 0) {
      return 0xe;
    }
  }
  local_68 = *(int *)(param_1 + 0x24) + (uVar13 & 0xffffff) * 0x48;
  iVar4 = FUN_004028b8(local_68,uVar10);
  if ((iVar4 == 0) || ((local_64 != 0 && (iVar4 = FUN_004054f0(local_64,uVar10), iVar4 == 0)))) {
    return 1;
  }
  piVar14 = (int *)0x0;
  piVar11 = (int *)0x0;
  piVar12 = (int *)0x0;
  iVar4 = FUN_00488358(*(undefined4 *)(param_1 + 4),local_2c);
  if (iVar4 == 1) {
    iVar4 = UnsignedSaturate(iVar2,7);
    UnsignedDoesSaturate(iVar2,7);
    piVar14 = (int *)0x0;
    do {
      iVar2 = 1 - *(uint *)(param_1 + 0x34);
      if (1 < *(uint *)(param_1 + 0x34)) {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        uVar6 = *(uint *)(param_1 + 0x28);
        iVar2 = 1 - uVar6;
        if (1 < uVar6) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x2c) + -0xd4;
        }
        else {
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          iVar7 = (uint)*(byte *)(iVar2 + 0x98) + *(int *)(iVar2 + 0x50);
          iVar1 = UnsignedSaturate(iVar7,7);
          UnsignedDoesSaturate(iVar7,7);
          if (iVar1 <= iVar4) {
            FUN_003102dc(iVar2,0);
            goto LAB_0030ce54;
          }
        }
        piVar14 = (int *)0x0;
        goto LAB_0030ced8;
      }
      piVar14 = (int *)(*(int *)(param_1 + 0x38) + -0xd4);
      FUN_0030c964(param_1 + 0x34);
LAB_0030ce54:
    } while (piVar14 == (int *)0x0);
    (**(code **)(*piVar14 + 0xc))(piVar14);
    FUN_0030b774(piVar14,local_5c,local_60);
    piVar8 = *(int **)(param_1 + 0x2c);
    if (piVar8 != (int *)(param_1 + 0x2c)) {
      do {
        iVar2 = UnsignedSaturate(piVar8[-0x21] + (uint)*(byte *)(piVar8 + -0xf),7);
        UnsignedDoesSaturate(piVar8[-0x21] + (uint)*(byte *)(piVar8 + -0xf),7);
        if (iVar4 < iVar2) break;
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)(param_1 + 0x2c));
    }
    FUN_0030cab0((uint *)(param_1 + 0x28),piVar8,piVar14 + 0x35);
LAB_0030ced8:
    if (piVar14 == (int *)0x0) {
      piVar14 = (int *)0x0;
      piVar8 = piVar14;
    }
    else {
      piVar14[0x27] = local_2c;
      piVar8 = piVar14;
      if (local_28 != 0) {
        FUN_0030b728(piVar14,local_28);
      }
    }
  }
  else if (iVar4 == 2) {
    iVar4 = UnsignedSaturate(iVar2,7);
    UnsignedDoesSaturate(iVar2,7);
    piVar11 = (int *)0x0;
    do {
      iVar2 = 1 - *(uint *)(param_1 + 100);
      if (1 < *(uint *)(param_1 + 100)) {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        uVar6 = *(uint *)(param_1 + 0x58);
        iVar2 = 1 - uVar6;
        if (1 < uVar6) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x5c) + -0xd4;
        }
        else {
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          iVar7 = (uint)*(byte *)(iVar2 + 0x98) + *(int *)(iVar2 + 0x50);
          iVar1 = UnsignedSaturate(iVar7,7);
          UnsignedDoesSaturate(iVar7,7);
          if (iVar1 <= iVar4) {
            FUN_003102dc(iVar2,0);
            goto LAB_0030cf9c;
          }
        }
        piVar11 = (int *)0x0;
        goto LAB_0030d020;
      }
      piVar11 = (int *)(*(int *)(param_1 + 0x68) + -0xd4);
      FUN_0030c964(param_1 + 100);
LAB_0030cf9c:
    } while (piVar11 == (int *)0x0);
    (**(code **)(*piVar11 + 0xc))(piVar11);
    FUN_0030b774(piVar11,local_5c,local_60);
    piVar8 = *(int **)(param_1 + 0x5c);
    if (piVar8 != (int *)(param_1 + 0x5c)) {
      do {
        iVar2 = UnsignedSaturate(piVar8[-0x21] + (uint)*(byte *)(piVar8 + -0xf),7);
        UnsignedDoesSaturate(piVar8[-0x21] + (uint)*(byte *)(piVar8 + -0xf),7);
        if (iVar4 < iVar2) break;
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)(param_1 + 0x5c));
    }
    FUN_0030cab0((uint *)(param_1 + 0x58),piVar8,piVar11 + 0x35);
LAB_0030d020:
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
      piVar8 = piVar11;
    }
    else {
      piVar11[0x27] = local_2c;
      piVar8 = piVar11;
      if (local_28 != 0) {
        FUN_0030b728(piVar11,local_28);
      }
    }
  }
  else {
    if (iVar4 != 3) {
      return 3;
    }
    piVar12 = (int *)0x0;
    iVar4 = UnsignedSaturate(iVar2,7);
    UnsignedDoesSaturate(iVar2,7);
    do {
      iVar2 = 1 - *(uint *)(param_1 + 0x4c);
      if (1 < *(uint *)(param_1 + 0x4c)) {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        uVar6 = *(uint *)(param_1 + 0x40);
        iVar2 = 1 - uVar6;
        if (1 < uVar6) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x44) + -0xd4;
        }
        else {
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          iVar7 = (uint)*(byte *)(iVar2 + 0x98) + *(int *)(iVar2 + 0x50);
          iVar1 = UnsignedSaturate(iVar7,7);
          UnsignedDoesSaturate(iVar7,7);
          if (iVar1 <= iVar4) {
            FUN_003102dc(iVar2,0);
            goto LAB_0030d0d8;
          }
        }
        piVar12 = (int *)0x0;
        goto LAB_0030d15c;
      }
      piVar12 = (int *)(*(int *)(param_1 + 0x50) + -0xd4);
      FUN_0030c964(param_1 + 0x4c);
LAB_0030d0d8:
    } while (piVar12 == (int *)0x0);
    (**(code **)(*piVar12 + 0xc))(piVar12);
    FUN_0030b774(piVar12,local_5c,local_60);
    piVar8 = *(int **)(param_1 + 0x44);
    if (piVar8 != (int *)(param_1 + 0x44)) {
      do {
        iVar2 = UnsignedSaturate(piVar8[-0x21] + (uint)*(byte *)(piVar8 + -0xf),7);
        UnsignedDoesSaturate(piVar8[-0x21] + (uint)*(byte *)(piVar8 + -0xf),7);
        if (iVar4 < iVar2) break;
        piVar8 = (int *)*piVar8;
      } while (piVar8 != (int *)(param_1 + 0x44));
    }
    FUN_0030cab0((uint *)(param_1 + 0x40),piVar8,piVar12 + 0x35);
LAB_0030d15c:
    if (piVar12 == (int *)0x0) {
      piVar12 = (int *)0x0;
      piVar8 = piVar12;
    }
    else {
      piVar12[0x27] = local_2c;
      piVar8 = piVar12;
      if (local_28 != 0) {
        FUN_0030b728(piVar12,local_28);
      }
    }
  }
  if (piVar8 == (int *)0x0) {
    return 0xd;
  }
  iVar2 = FUN_00402814(local_68,piVar8);
  if (iVar2 != 0) {
    FUN_004042b8(piVar8,(int)local_36);
    iVar2 = FUN_00488358(*(undefined4 *)(param_1 + 4),local_2c);
    if (iVar2 == 1) {
      FUN_0030b6dc(local_68,piVar14);
      local_84 = 0;
      puVar5 = &local_84;
      iVar2 = 2;
      local_80[4] = 0;
      local_6c = 0;
      do {
        puVar5[1] = 0xffffffff;
        iVar2 = iVar2 + -1;
        puVar5 = puVar5 + 2;
        *puVar5 = 0xffffffff;
      } while (iVar2 != 0);
      iVar2 = FUN_0048c0b4(*(undefined4 *)(param_1 + 4),local_2c,&local_84);
      if (iVar2 == 0) {
        (**(code **)(*piVar14 + 0x10))(piVar14);
        return 3;
      }
      if (puVar9 != (uint *)0x0) {
        if (puVar9[2] != 0xffffffff) {
          local_80[0] = puVar9[2];
        }
        if (puVar9[3] != 0xffffffff) {
          local_80[1] = puVar9[3];
        }
        if (puVar9[4] != 0xffffffff) {
          local_80[2] = puVar9[4];
        }
        if (puVar9[5] != 0xffffffff) {
          local_80[3] = puVar9[5];
        }
      }
      uVar6 = FUN_00403cc8(param_1,piVar14,&local_4c,&local_84,local_50,local_54,puVar9);
      if ((uVar6 & 0xff) != 0) {
        (**(code **)(*piVar14 + 0x10))(piVar14);
        return uVar6;
      }
    }
    else if (iVar2 == 2) {
      local_6c = 0;
      local_6a = 0;
      uVar6 = 0;
      iVar2 = FUN_0040e198(*(undefined4 *)(param_1 + 4),local_2c,&local_6c);
      uVar13 = local_54;
      if (iVar2 == 0) {
        (**(code **)(*piVar11 + 0x10))(piVar11);
        return 3;
      }
      FUN_004047d8(piVar11,param_1 + 0x80,local_6a,local_6c);
      if (local_50 == 0) {
        uVar10 = 1;
      }
      else if ((local_50 == 1) || (local_50 != 2)) {
        uVar10 = 0;
        uVar13 = 0;
      }
      else {
        uVar10 = 0;
      }
      iVar2 = FUN_0030b634(*(undefined4 *)(param_1 + 4),local_4c,piVar11 + 0x837,0x200);
      if (iVar2 == 0) {
        uVar6 = 10;
      }
      else {
        FUN_00404838(piVar11,uVar10,uVar13,iVar2);
        fVar15 = (float)VectorSignedToFloat(local_3c,(byte)(in_fpscr >> 0x15) & 3);
        FUN_0030b7e8(fVar15 * DAT_0030d534,piVar11);
        FUN_0030b790(piVar11,local_38);
        FUN_0030c49c(piVar11,local_37);
      }
      if (uVar6 != 0) {
        (**(code **)(*piVar11 + 0x10))(piVar11);
        return uVar6;
      }
    }
    else {
      if (iVar2 != 3) {
        (**(code **)(*piVar8 + 0x10))(piVar8);
        return 3;
      }
      FUN_0030b6dc(local_68,piVar12);
      local_80[4] = 0;
      local_6c = 0;
      iVar2 = FUN_0048bedc(*(undefined4 *)(param_1 + 4),local_2c,local_80 + 3);
      if (iVar2 == 0) {
        (**(code **)(*piVar12 + 0x10))(piVar12);
        return 3;
      }
      uVar6 = FUN_00403a94(param_1,piVar12,&local_4c,local_80 + 3,local_50,local_54);
      if ((uVar6 & 0xff) != 0) {
        (**(code **)(*piVar12 + 0x10))(piVar12);
        return uVar6;
      }
    }
    if ((local_64 == 0) || (iVar2 = FUN_00405414(local_64,piVar8), iVar2 != 0)) {
      if (param_5 != 0) {
        piVar8[5] = param_5;
      }
      if (param_6 != 0) {
        FUN_00404394(piVar8,local_58);
      }
      FUN_004027c8(local_30,piVar8);
      return 0;
    }
  }
  (**(code **)(*piVar8 + 0x10))(piVar8);
  return 0xff;
}
