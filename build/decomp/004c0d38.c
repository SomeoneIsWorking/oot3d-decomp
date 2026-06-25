// OoT3D decomp @ 004c0d38  name=FUN_004c0d38  size=1860

undefined4 FUN_004c0d38(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  undefined uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  int iStack_2c;
  byte bStack_28;
  byte bStack_27;
  
  bVar1 = *(byte *)(param_3 + 1);
  if (bVar1 == 0x15) {
    *(int *)(param_1 + 700) = param_3[2];
    return 1;
  }
  if (bVar1 < 0x16) {
    if (bVar1 == 2) {
      uVar2 = *(undefined *)((int)param_3 + 5);
      iVar4 = 0;
      if ((*(int *)(param_1 + 0x3c0) < 0x10) && (iVar6 = FUN_002baf9c(param_1,0x20), iVar6 != 0)) {
        iVar9 = *(int *)(param_1 + 0x19c);
        iVar11 = *(int *)(param_1 + 0x104);
        iVar6 = *(int *)(param_1 + 0x100);
        iVar12 = *(int *)(param_1 + 0x1a0);
        if (*(int *)(param_1 + 700) != 0) {
          iVar4 = 0x20;
        }
        fVar16 = *(float *)(param_1 + 0x110);
        fVar17 = *(float *)(param_1 + 0x1a4);
        *(undefined *)(param_1 + *(int *)(param_1 + 0x3c0) * 0x10 + 0x2c0) = uVar2;
        *(int *)(param_1 + *(int *)(param_1 + 0x3c0) * 0x10 + 0x2c4) = iVar6 + iVar9 + iVar4;
        *(int *)(param_1 + *(int *)(param_1 + 0x3c0) * 0x10 + 0x2c8) = iVar11 + iVar12;
        *(float *)(param_1 + *(int *)(param_1 + 0x3c0) * 0x10 + 0x2cc) = fVar16 + fVar17;
        *(int *)(param_1 + 0x3c0) = *(int *)(param_1 + 0x3c0) + 1;
        *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + *(int *)(param_1 + 0xe0) + 0x10;
        return 1;
      }
      return 0;
    }
    if (bVar1 < 3) {
      if (bVar1 != 0) {
        if (bVar1 == 1) {
          iVar4 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x10));
          iVar4 = iVar4 + *(int *)(param_1 + 0xdc);
          uVar5 = (uint)*(byte *)(param_1 + 0x18);
          bVar15 = uVar5 != 0;
          if (bVar15) {
            uVar5 = *(uint *)(param_1 + 0x14);
          }
          if (bVar15 && uVar5 != 0) {
            iVar6 = FUN_002da7c8();
            iVar4 = iVar6 + iVar4 + *(int *)(param_1 + 0xe8);
          }
          *(undefined4 *)(param_1 + 0x19c) = 0;
          *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + iVar4;
          return 1;
        }
        return 1;
      }
      pbVar13 = (byte *)param_3[2];
      if (*(char *)((int)param_3 + 5) == '\0') {
        iVar6 = 0;
        iVar4 = (**(code **)(*param_3 + 0x14))(param_3);
        if (0 < iVar4) {
          do {
            uVar3 = *(undefined2 *)(pbVar13 + iVar6 * 2);
            iVar4 = FUN_002baf9c(param_1,uVar3);
            if (iVar4 == 0) {
              return 0;
            }
            uVar14 = *(undefined4 *)(param_1 + 0x10);
            iVar4 = FUN_002d2674(uVar14,uVar3,&iStack_2c);
            if (iVar4 == 0) {
              uVar7 = FUN_002d2664(uVar14);
              iVar4 = FUN_002d2674(uVar14,uVar7,&iStack_2c);
              if (iVar4 != 0) goto joined_r0x004c3ca0;
LAB_004c3cb4:
              uVar5 = 0;
            }
            else {
joined_r0x004c3ca0:
              iVar4 = iStack_2c;
              if (iStack_2c != 0) {
                iVar4 = 1;
              }
              if (iVar4 == 0) goto LAB_004c3cb4;
              uVar5 = (uint)bStack_27;
            }
            iVar6 = iVar6 + 1;
            *(uint *)(param_1 + 0x19c) =
                 uVar5 + *(int *)(param_1 + 0x19c) + *(int *)(param_1 + 0xe0);
            iVar4 = (**(code **)(*param_3 + 0x14))(param_3);
          } while (iVar6 < iVar4);
        }
      }
      else {
        iVar6 = 0;
        iVar4 = (**(code **)(*param_3 + 0x14))(param_3);
        if (0 < iVar4) {
          do {
            if (pbVar13 == (byte *)0x0) {
LAB_004c3dcc:
              iVar4 = 0;
              uVar5 = 0;
            }
            else {
              bVar1 = *pbVar13;
              if (bVar1 < 0x80) {
                uVar5 = (uint)*pbVar13;
                iVar4 = 1;
              }
              else if ((bVar1 & 0xe0) == 0xc0) {
                iVar4 = 2;
                uVar5 = pbVar13[1] & 0x3f | (*pbVar13 & 0x1f) << 6;
              }
              else if ((bVar1 & 0xf0) == 0xe0) {
                iVar4 = 3;
                uVar5 = ((uint)*pbVar13 << 0x1c) >> 0x10 | (pbVar13[1] & 0x3f) << 6 |
                        pbVar13[2] & 0x3f;
              }
              else {
                if ((bVar1 & 0xf8) != 0xf0) goto LAB_004c3dcc;
                iVar4 = 4;
                uVar5 = ((uint)*pbVar13 << 0x1d) >> 0xb | (pbVar13[1] & 0x3f) << 0xc |
                        (pbVar13[2] & 0x3f) << 6 | pbVar13[3] & 0x3f;
              }
            }
            pbVar13 = pbVar13 + iVar4;
            if (1 < *(byte *)((int)param_3 + 5)) {
              uVar5 = 0;
            }
            iVar4 = FUN_002baf9c(param_1,uVar5);
            if (iVar4 == 0) {
              return 0;
            }
            uVar14 = *(undefined4 *)(param_1 + 0x10);
            iVar4 = FUN_002d2674(uVar14,uVar5,&iStack_2c);
            if (iVar4 == 0) {
              uVar7 = FUN_002d2664(uVar14);
              iVar4 = FUN_002d2674(uVar14,uVar7,&iStack_2c);
              if (iVar4 != 0) goto joined_r0x004c3e68;
LAB_004c3e7c:
              uVar5 = 0;
            }
            else {
joined_r0x004c3e68:
              iVar4 = iStack_2c;
              if (iStack_2c != 0) {
                iVar4 = 1;
              }
              if (iVar4 == 0) goto LAB_004c3e7c;
              uVar5 = (uint)bStack_27;
            }
            iVar6 = iVar6 + 1;
            *(uint *)(param_1 + 0x19c) =
                 uVar5 + *(int *)(param_1 + 0x19c) + *(int *)(param_1 + 0xe0);
            iVar4 = (**(code **)(*param_3 + 0x14))(param_3);
          } while (iVar6 < iVar4);
        }
      }
      return 1;
    }
    if (bVar1 != 4) {
      if (bVar1 == 0x10) {
        *(int *)(param_1 + 0x3c4) = param_3[2];
        return 1;
      }
      return 1;
    }
    iVar4 = param_3[2] + *(int *)(param_1 + 0x19c);
  }
  else {
    if (bVar1 == 0x16) {
      *(undefined *)(param_1 + 0x2b8) = *(undefined *)((int)param_3 + 5);
      return 1;
    }
    if (bVar1 != 0x17) {
      if (bVar1 != 0x18) {
        if (bVar1 != 0x19) {
          return 1;
        }
        uVar5 = (uint)*(byte *)(param_1 + 0x18);
        bVar15 = uVar5 != 0;
        if (bVar15) {
          uVar5 = *(uint *)(param_1 + 0x14);
        }
        if (!bVar15 || uVar5 == 0) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0x2b0) = 0;
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        return 1;
      }
      bVar15 = *(char *)(param_1 + 0x18) != '\0';
      iVar4 = param_2;
      if (bVar15) {
        iVar4 = *(int *)(param_1 + 0x14);
      }
      if (!bVar15 || iVar4 == 0) {
        return 1;
      }
      if ((uint)param_3[3] < 0x21) {
        iVar4 = FUN_002b7e30(param_1,iVar4,*(undefined4 *)(param_1 + 0xe4),param_3[2]);
        iVar6 = *(int *)(param_1 + 0xe4);
        uVar5 = param_2 + 1;
        iVar9 = 0;
        if (uVar5 < *(uint *)(param_1 + 0xf4)) {
          while (piVar8 = *(int **)(*(int *)(param_1 + 0xf0) + uVar5 * 8),
                *(char *)(piVar8 + 1) != '\x19') {
            iVar11 = (**(code **)(*piVar8 + 0xc))();
            if ((iVar11 != 0) ||
               (*(char *)(*(int *)(*(int *)(param_1 + 0xf0) + uVar5 * 8) + 4) == '\x18'))
            goto LAB_004c3fa8;
            iVar11 = uVar5 * 8;
            uVar5 = uVar5 + 1;
            iVar9 = iVar9 + *(int *)(*(int *)(param_1 + 0xf0) + iVar11 + 4);
            if (*(uint *)(param_1 + 0xf4) <= uVar5) break;
          }
        }
        if (uVar5 < *(uint *)(param_1 + 0xf4)) {
          iVar9 = iVar9 - *(int *)(param_1 + 0xe0);
        }
        else {
LAB_004c3fa8:
          iVar9 = -1;
        }
        uVar5 = param_2 + 1;
        iVar11 = 0;
        if (uVar5 < *(uint *)(param_1 + 0xf4)) {
          while (piVar8 = *(int **)(*(int *)(param_1 + 0xf0) + uVar5 * 8),
                *(char *)(piVar8 + 1) != '\x19') {
            iVar12 = (**(code **)(*piVar8 + 0xc))();
            if ((iVar12 != 0) ||
               (piVar8 = *(int **)(*(int *)(param_1 + 0xf0) + uVar5 * 8),
               *(char *)(piVar8 + 1) == '\x18')) goto LAB_004c4028;
            iVar12 = (**(code **)(*piVar8 + 0x14))();
            iVar11 = iVar11 + iVar12;
            uVar5 = uVar5 + 1;
            if (*(uint *)(param_1 + 0xf4) <= uVar5) break;
          }
        }
        if (*(uint *)(param_1 + 0xf4) <= uVar5) {
LAB_004c4028:
          iVar11 = -1;
        }
        *(int *)(param_1 + 0x2ac) = iVar11;
        if (-1 < iVar9 && -1 < iVar11) {
          iVar4 = iVar9 / 2 - (iVar4 - iVar6) / 2;
          uVar5 = 0;
          if (param_3[3] != 0) {
            do {
              iVar9 = param_1 + uVar5 * 8;
              uVar10 = (uint)*(ushort *)(param_3[2] + uVar5 * 2);
              *(uint *)(iVar9 + 0x1ac) = uVar10;
              uVar14 = *(undefined4 *)(param_1 + 0x14);
              iVar6 = FUN_002d2674(uVar14,uVar10,&iStack_2c);
              if (iVar6 == 0) {
                uVar7 = FUN_002d2664(uVar14);
                iVar6 = FUN_002d2674(uVar14,uVar7,&iStack_2c);
                if (iVar6 == 0) {
                  return 0;
                }
              }
              iVar6 = iStack_2c;
              if (iStack_2c != 0) {
                iVar6 = 1;
              }
              if (iVar6 == 0) {
                return 0;
              }
              uVar5 = uVar5 + 1;
              *(uint *)(iVar9 + 0x1b0) = (iVar4 - (uint)bStack_28) + *(int *)(param_1 + 0x19c);
              iVar4 = iVar4 + (uint)bStack_27;
            } while (uVar5 < (uint)param_3[3]);
          }
          *(int **)(param_1 + 0x2b0) = param_3;
          *(undefined4 *)(param_1 + 0x2b4) = 0;
          return 1;
        }
      }
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x108) / 2 -
            *(int *)(param_1 + *(int *)(param_1 + 0x198) * 4 + 0x118) / 2;
  }
  *(int *)(param_1 + 0x19c) = iVar4;
  return 1;
}

