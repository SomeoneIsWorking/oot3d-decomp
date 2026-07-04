// OoT3D decomp @ 0031b124  name=FUN_0031b124  size=2148

void FUN_0031b124(int *param_1,int param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  
  param_1[6] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = 0;
  param_1[2] = param_2;
  param_1[3] = *(int *)(param_2 + 0xc) + param_2;
  param_1[4] = *(int *)(param_2 + 0x10) + param_2;
  param_1[5] = *(int *)(param_2 + 0x14) + param_2;
  *(undefined1 *)(param_1 + 0x12) = param_4;
  piVar4 = param_1 + 7;
  iVar6 = 5;
  param_1[7] = -1;
  do {
    piVar4[1] = -1;
    iVar6 = iVar6 + -1;
    piVar4 = piVar4 + 2;
    *piVar4 = -1;
    iVar12 = UNK_0031b988;
  } while (iVar6 != 0);
  uVar11 = 0;
  if (*(short *)(param_1[2] + 8) != 0) {
    do {
      uVar10 = 0;
      do {
        iVar6 = FUN_00303414(*(undefined4 *)(iVar12 + uVar10 * 8),
                             *param_1 + *(int *)(param_1[3] + uVar11 * 0x10 + 8));
        if (iVar6 == 0) {
          param_1[uVar10 + 7] = uVar11;
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 0xb);
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ushort *)(param_1[2] + 8));
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if ((param_1[7] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[7] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x13] = iVar6;
    uVar11 = 0;
    if (param_1[7] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[7] * 0x10);
    }
    if (iVar6 != 0) {
      do {
        *(undefined4 *)(param_1[0x13] + uVar11 * 4) = 0;
        uVar11 = uVar11 + 1;
        if (param_1[7] == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1[3] + param_1[7] * 0x10);
        }
      } while (uVar11 < uVar10);
    }
  }
  if ((param_1[8] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[8] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x14] = iVar6;
    puVar2 = UNK_0031b98c;
    uVar11 = 0;
    if (param_1[8] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[8] * 0x10);
    }
    if (iVar6 != 0) {
      do {
        pcVar3 = (char *)(*param_1 +
                         *(int *)(param_1[5] +
                                 *(int *)(*(int *)(param_1[3] + param_1[8] * 0x10 + 4) + *param_1 +
                                         uVar11 * 4) * 4));
        cVar1 = *pcVar3;
        bVar13 = cVar1 == 'c';
        if (bVar13) {
          cVar1 = pcVar3[1];
        }
        bVar14 = bVar13 && cVar1 == 's';
        if (bVar13 && cVar1 == 's') {
          bVar14 = pcVar3[2] == 'a';
        }
        bVar13 = false;
        if (bVar14) {
          bVar13 = pcVar3[3] == 'b';
        }
        if (bVar13) {
          piVar4 = (int *)(**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,4,UNK_0031b990,0x99);
          if (piVar4 != (int *)0x0) {
            *piVar4 = *param_1 +
                      *(int *)(param_1[5] +
                              *(int *)(*(int *)(param_1[3] + param_1[8] * 0x10 + 4) + *param_1 +
                                      uVar11 * 4) * 4);
          }
          *(int **)(param_1[0x14] + uVar11 * 4) = piVar4;
        }
        uVar11 = uVar11 + 1;
        if (param_1[8] == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1[3] + param_1[8] * 0x10);
        }
      } while (uVar11 < uVar10);
    }
  }
  uVar11 = 0;
  if (param_1[9] == -1) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1[3] + param_1[9] * 0x10);
  }
  if (iVar6 != 0) {
    do {
      iVar6 = param_1[9];
      if (iVar6 == -1) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)(param_1[3] + iVar6 * 0x10);
      }
      if (uVar11 < uVar10) {
        iVar6 = *param_1 +
                *(int *)(param_1[5] +
                        *(int *)(*(int *)(param_1[3] + iVar6 * 0x10 + 4) + *param_1 + uVar11 * 4) *
                        4);
      }
      else {
        iVar6 = 0;
      }
      uVar11 = uVar11 + 1;
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 2) + iVar6;
      if (param_1[9] == -1) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)(param_1[3] + param_1[9] * 0x10);
      }
    } while (uVar11 < uVar10);
  }
  if ((param_1[10] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[10] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x15] = iVar6;
    uVar11 = 0;
    if (param_1[10] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[10] * 0x10);
    }
    if (iVar6 != 0) {
      do {
        pcVar3 = (char *)(*param_1 +
                         *(int *)(param_1[5] +
                                 *(int *)(*(int *)(param_1[3] + param_1[10] * 0x10 + 4) + *param_1 +
                                         uVar11 * 4) * 4));
        cVar1 = *pcVar3;
        bVar13 = cVar1 == 'c';
        if (bVar13) {
          cVar1 = pcVar3[1];
        }
        bVar14 = bVar13 && cVar1 == 't';
        if (bVar13 && cVar1 == 't') {
          bVar14 = pcVar3[2] == 'x';
        }
        bVar13 = false;
        if (bVar14) {
          bVar13 = pcVar3[3] == 'b';
        }
        if (bVar13) {
          *(undefined4 *)(param_1[0x15] + uVar11 * 4) = 0;
        }
        uVar11 = uVar11 + 1;
        if (param_1[10] == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1[3] + param_1[10] * 0x10);
        }
      } while (uVar11 < uVar10);
    }
  }
  if ((param_1[0xb] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[0xb] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x17] = iVar6;
    uVar11 = 0;
    if (param_1[0xb] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[0xb] * 0x10);
    }
    if (iVar6 != 0) {
      do {
        iVar6 = *param_1 +
                *(int *)(param_1[5] +
                        *(int *)(*(int *)(param_1[3] + param_1[0xb] * 0x10 + 4) + *param_1 +
                                uVar11 * 4) * 4);
        iVar12 = iVar6 + 0x10;
        iVar6 = iVar12 + *(int *)(iVar6 + 0x14);
        *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + iVar12;
        *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + iVar12;
        *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + iVar12;
        *(int *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + iVar12;
        *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + iVar12;
        uVar10 = 0;
        if (*(short *)(iVar6 + 0x12) != 0) {
          do {
            iVar8 = *(int *)(iVar6 + 0x24) + uVar10 * 8;
            iVar9 = *(int *)(iVar8 + 4);
            uVar10 = uVar10 + 1 & 0xffff;
            if (iVar9 != 0) {
              *(int *)(iVar8 + 4) = iVar9 + iVar12;
            }
          } while (uVar10 < *(ushort *)(iVar6 + 0x12));
        }
        *(int *)(param_1[0x17] + uVar11 * 4) = iVar6;
        uVar11 = uVar11 + 1;
        if (param_1[0xb] == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1[3] + param_1[0xb] * 0x10);
        }
      } while (uVar11 < uVar10);
    }
  }
  if ((param_1[0xc] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[0xc] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x16] = iVar6;
    puVar2 = UNK_0031b994;
    uVar11 = 0;
    if (param_1[0xc] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[0xc] * 0x10);
    }
    if (iVar6 != 0) {
      do {
        iVar6 = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,0x1c,UNK_0031b990,0xe4);
        uVar5 = 0;
        if (iVar6 != 0) {
          uVar5 = FUN_004c0854(iVar6,*param_1 +
                                     *(int *)(param_1[5] +
                                             *(int *)(*(int *)(param_1[3] + param_1[0xc] * 0x10 + 4)
                                                      + *param_1 + uVar11 * 4) * 4));
        }
        *(undefined4 *)(param_1[0x16] + uVar11 * 4) = uVar5;
        FUN_004c066c();
        uVar11 = uVar11 + 1;
        if (param_1[0xc] == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1[3] + param_1[0xc] * 0x10);
        }
      } while (uVar11 < uVar10);
    }
  }
  if ((param_1[0xd] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[0xd] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x18] = iVar6;
    if (param_1[0xd] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[0xd] * 0x10);
    }
    uVar11 = 0;
    if (iVar6 != 0) {
      do {
        uVar10 = uVar11 + 1;
        *(int *)(param_1[0x18] + uVar11 * 4) =
             *param_1 +
             *(int *)(param_1[5] +
                     *(int *)(*(int *)(param_1[3] + param_1[0xd] * 0x10 + 4) + *param_1 + uVar11 * 4
                             ) * 4);
        if (param_1[0xd] == -1) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(param_1[3] + param_1[0xd] * 0x10);
        }
        uVar11 = uVar10;
      } while (uVar10 < uVar7);
    }
  }
  if ((param_1[0xe] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[0xe] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x19] = iVar6;
    if (param_1[0xe] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[0xe] * 0x10);
    }
    uVar11 = 0;
    if (iVar6 != 0) {
      do {
        uVar10 = uVar11 + 1;
        *(int *)(param_1[0x19] + uVar11 * 4) =
             *param_1 +
             *(int *)(param_1[5] +
                     *(int *)(*(int *)(param_1[3] + param_1[0xe] * 0x10 + 4) + *param_1 + uVar11 * 4
                             ) * 4);
        if (param_1[0xe] == -1) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(param_1[3] + param_1[0xe] * 0x10);
        }
        uVar11 = uVar10;
      } while (uVar10 < uVar7);
    }
  }
  if ((param_1[0xf] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[0xf] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x1a] = iVar6;
    uVar11 = 0;
    if (param_1[0xf] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[0xf] * 0x10);
    }
    if (iVar6 != 0) {
      do {
        iVar6 = FUN_0035010c(8);
        uVar5 = 0;
        if (iVar6 != 0) {
          uVar5 = FUN_004c0f38(iVar6,*param_1 +
                                     *(int *)(param_1[5] +
                                             *(int *)(*(int *)(param_1[3] + param_1[0xf] * 0x10 + 4)
                                                      + *param_1 + uVar11 * 4) * 4));
        }
        *(undefined4 *)(param_1[0x1a] + uVar11 * 4) = uVar5;
        uVar11 = uVar11 + 1;
        if (param_1[0xf] == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1[3] + param_1[0xf] * 0x10);
        }
      } while (uVar11 < uVar10);
    }
  }
  if ((param_1[0x10] != -1) && (iVar6 = *(int *)(param_1[3] + param_1[0x10] * 0x10), iVar6 != 0)) {
    iVar6 = FUN_0035010c(iVar6 << 2);
    param_1[0x1b] = iVar6;
    puVar2 = UNK_0031b998;
    uVar11 = 0;
    if (param_1[0x10] == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1[3] + param_1[0x10] * 0x10);
    }
    if (iVar6 != 0) {
      do {
        iVar6 = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,0xc,UNK_0031b990,0x108);
        uVar5 = 0;
        if (iVar6 != 0) {
          uVar5 = FUN_004c0618(iVar6,*param_1 +
                                     *(int *)(param_1[5] +
                                             *(int *)(*(int *)(param_1[3] + param_1[0x10] * 0x10 + 4
                                                              ) + *param_1 + uVar11 * 4) * 4));
        }
        *(undefined4 *)(param_1[0x1b] + uVar11 * 4) = uVar5;
        FUN_004c05dc();
        uVar11 = uVar11 + 1;
        if (param_1[0x10] == -1) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(param_1[3] + param_1[0x10] * 0x10);
        }
      } while (uVar11 < uVar10);
    }
  }
  return;
}

