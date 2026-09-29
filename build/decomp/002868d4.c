// OoT3D decomp @ 002868d4  name=FUN_002868d4  size=1952

void FUN_002868d4(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  float local_38;
  undefined1 auStack_34 [4];
  int local_30;
  int local_2c;
  int local_28;

  uVar5 = (uint)*(ushort *)(param_1 + 0x1c);
  uVar11 = uVar5 & 0x3f;
  uVar1 = (uVar5 << 0x12) >> 0x1e;
  local_3c = 0xffffffff;
  uVar5 = (uVar5 << 0x16) >> 0x1c;
  local_40 = 0;
  uVar9 = uVar5;
  if (uVar5 == 10) {
    uVar9 = 0x18;
  }
  iVar6 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2,
                       param_2 + 0xa98,&local_38,auStack_34);
  local_28 = param_2 + 0x100;
  local_2c = param_2 + 0x4c00;
  if ((iVar6 == 0) || ((int)(local_38 - *(float *)(param_1 + 0x2c)) <= DAT_00286e58)) {
    iVar6 = *(int *)(DAT_00286e5c + param_2);
    uVar10 = 0;
    local_44 = uVar5 * 0x4b + 0x96;
    if ((*(ushort *)(param_1 + 0x1c) & 0x400) != 0) {
      *(undefined2 *)(param_1 + 0x27c) = 0xffff;
    }
    local_30 = param_2 + 0x5fcc;
    if (uVar9 != 0) {
      iVar7 = FUN_0036e864(param_2,uVar11);
      sVar2 = *(short *)(param_1 + 0x27c);
      if (iVar7 == 0) {
        if (sVar2 < 0) {
          *(undefined2 *)(param_1 + 0x27c) = 0x1e;
        }
      }
      else if (sVar2 == 0) {
        *(undefined2 *)(param_1 + 0x27c) = 0xffff;
        if (uVar1 == 0) {
          if (((int)*(short *)(param_1 + 0x1c) & 0x8000U) == 0) {
            uVar4 = *(ushort *)(local_28 + 4);
            bVar12 = uVar4 != 1;
            if (!bVar12) {
              uVar4 = (ushort)*(byte *)(local_2c + 0x30);
            }
            if (((bVar12 || uVar4 != 0) || (*(char *)(DAT_00286e60 + 0xe) == '\0')) ||
               ((int)*(short *)(param_1 + 0x1c) != 0x3c3)) {
              local_50 = 0.0;
              FUN_0036a2dc(param_2,param_1,0);
              if ((*(ushort *)(param_1 + 0x1c) & 0x4000) == 0) {
                FUN_00372244(local_30,0x1e,DAT_00286e68);
              }
            }
            else {
              local_50 = 0.0;
              FUN_0036a2dc(param_2,param_1,0,DAT_00286e64);
              FUN_00372244(local_30,0x32,DAT_00286e68);
            }
            *(undefined1 *)(param_1 + 0x27f) = 0;
          }
          else {
            local_50 = 0.0;
            FUN_0036a2dc(param_2,param_1,0);
            if ((*(ushort *)(param_1 + 0x1c) & 0x4000) == 0) {
              uVar3 = 0x17;
            }
            else {
              uVar3 = 0;
            }
            *(undefined1 *)(param_1 + 0x27f) = uVar3;
          }
        }
      }
      else if (0 < sVar2) {
        *(undefined2 *)(param_1 + 0x27c) = 0xffff;
      }
    }
    if ((*(byte *)(param_1 + 0x20d) & 2) == 0) {
      if (*(char *)(iVar6 + 0x1a9) == '\x06') {
        fVar13 = DAT_00286e74;
        fVar14 = DAT_00286e78;
        fVar15 = DAT_00286e78;
        if (*(int *)(param_1 + 0x94) < DAT_00286e70) {
          FUN_003fb408(iVar6,&local_50);
          fVar13 = local_50 - *(float *)(param_1 + 0x28);
          fVar14 = local_48 - *(float *)(param_1 + 0x30);
          fVar15 = local_4c - *(float *)(param_1 + 0x2c);
        }
        if ((int)(fVar13 * fVar13 + (fVar15 - DAT_00286e7c) * (fVar15 - DAT_00286e7c) +
                 fVar14 * fVar14) < DAT_00286e80) {
          iVar7 = -1;
          goto LAB_00286bf8;
        }
      }
    }
    else {
      uVar10 = **(uint **)(param_1 + 0x238);
      if ((DAT_00286e6c & uVar10) != 0) {
        iVar7 = 1;
LAB_00286bf8:
        fVar14 = DAT_00286e98;
        fVar13 = DAT_00286e94;
        if (*(short *)(param_1 + 0x27c) == 0) {
          if (uVar1 != 0) {
            if (iVar7 < 1) {
              if ((iVar7 < 0) && (*(short *)(iVar6 + 0x2248) != 0)) {
                fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00286e84 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                if ((int)*(short *)(iVar6 + 0x2248) < (int)(DAT_00286e8c / fVar13 + DAT_00286e88)) {
                  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00286e84 + 0x110),
                                                      (byte)(in_fpscr >> 0x15) & 3);
                  *(short *)(iVar6 + 0x2248) = (short)(int)(DAT_00286e8c / fVar13 + DAT_00286e88);
                }
                goto LAB_00286dc0;
              }
            }
            else if ((uVar10 & 0x20800) != 0) {
LAB_00286dc0:
              if (uVar9 == 0) {
                *(undefined2 *)(param_1 + 0x27c) = 0xffff;
                if (uVar1 != 2) {
                  local_50 = 0.0;
                  if ((*(ushort *)(param_1 + 0x1c) & 0x8000) == 0) {
                    FUN_0036a2dc(param_2,param_1,0);
                    if ((*(ushort *)(param_1 + 0x1c) & 0x4000) == 0) {
                      FUN_00372244(local_30,0x1e,DAT_00286e68);
                    }
                    *(undefined1 *)(param_1 + 0x27f) = 0;
                    FUN_00375c10(param_2,uVar11);
                  }
                  else {
                    FUN_0036a2dc(param_2,param_1,0);
                    if ((*(ushort *)(param_1 + 0x1c) & 0x4000) == 0) {
                      uVar3 = 0x17;
                    }
                    else {
                      uVar3 = 0;
                    }
                    *(undefined1 *)(param_1 + 0x27f) = uVar3;
                  }
                }
              }
              else {
                iVar6 = *(int *)(DAT_002870ec + uVar11 * 4) + 1;
                *(int *)(DAT_002870ec + uVar11 * 4) = iVar6;
                if (iVar6 < (int)uVar9) {
                  *(short *)(param_1 + 0x27c) = (short)local_44 + 0xf;
                }
                else {
                  local_50 = 0.0;
                  if ((*(ushort *)(param_1 + 0x1c) & 0x8000) == 0) {
                    FUN_0036a2dc(param_2,param_1,0);
                    if ((*(ushort *)(param_1 + 0x1c) & 0x4000) == 0) {
                      FUN_00372244(local_30,0x1e,DAT_00286e68);
                    }
                    *(undefined1 *)(param_1 + 0x27f) = 0;
                    FUN_00375c10(param_2,uVar11);
                  }
                  else {
                    FUN_0036a2dc(param_2,param_1,0);
                    if ((*(ushort *)(param_1 + 0x1c) & 0x4000) == 0) {
                      uVar3 = 0x17;
                    }
                    else {
                      uVar3 = 0;
                    }
                    *(undefined1 *)(param_1 + 0x27f) = uVar3;
                  }
                  *(undefined2 *)(param_1 + 0x27c) = 0xffff;
                }
              }
              local_50 = DAT_00286e98;
              local_4c = DAT_00286e94;
              FUN_0037547c(DAT_00286e9c,param_1 + 0x28,4,DAT_00286e98);
            }
          }
        }
        else {
          if (iVar7 < 0) {
            iVar7 = (int)*(short *)(*DAT_00286e84 + 0x110);
            if (*(short *)(iVar6 + 0x2248) == 0) {
              fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
              *(short *)(iVar6 + 0x2248) = (short)(int)(DAT_00286e90 / fVar15 + DAT_00286e88);
              local_50 = fVar14;
              local_4c = fVar13;
              FUN_0037547c(DAT_00286e9c,param_1 + 0x28,4,fVar14);
            }
            else {
              fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
              if ((int)*(short *)(iVar6 + 0x2248) < (int)(DAT_00286e8c / fVar13 + DAT_00286e88)) {
                fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
                *(short *)(iVar6 + 0x2248) = (short)(int)(DAT_00286e8c / fVar13 + DAT_00286e88);
              }
            }
          }
          else if ((uVar10 & 0x20) == 0) {
            if ((((uVar10 & 0x800) != 0) &&
                (psVar8 = *(short **)(param_1 + 0x204), *(int *)(psVar8 + 0x9e) != 0)) &&
               (*psVar8 == 0x16)) {
              *(undefined1 *)((int)psVar8 + 0x231) = 1;
            }
          }
          else {
            psVar8 = *(short **)(param_1 + 0x204);
            if ((*(int *)(psVar8 + 0x9e) != 0) && (*psVar8 == 0x16)) {
              psVar8[0xe] = 0;
              psVar8[0x126] = 0x800;
              psVar8[0x127] = 0;
            }
          }
          if (((-1 < *(short *)(param_1 + 0x27c)) && (*(short *)(param_1 + 0x27c) < local_44)) &&
             (uVar1 != 0)) {
            *(short *)(param_1 + 0x27c) = (short)local_44;
          }
        }
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x27c) = 0;
    iVar6 = FUN_0036e864(param_2,uVar11);
    if ((iVar6 != 0) && (uVar1 == 1)) {
      if ((*(short *)(local_28 + 4) != 0x58) ||
         (*(char *)(local_2c + 0x30) == *(char *)(param_1 + 3))) {
        FUN_0036beac(param_2,uVar11);
      }
      if (uVar9 != 0) {
        *(undefined2 *)(param_1 + 0x27c) = 1;
      }
    }
  }
  FUN_0037632c(param_1,param_1 + 0x1a4);
  iVar6 = param_2 + 0x5c78;
  FUN_003762a4(param_2,iVar6,param_1 + 0x1a4);
  FUN_00376168(param_2,iVar6,param_1 + 0x1a4);
  FUN_0037632c(param_1,param_1 + 0x1fc);
  FUN_00376168(param_2,iVar6,param_1 + 0x1fc);
  if (0 < *(short *)(param_1 + 0x27c)) {
    sVar2 = *(short *)(param_1 + 0x27c) + -1;
    *(short *)(param_1 + 0x27c) = sVar2;
    if (sVar2 != 0) goto LAB_00286ff8;
    if (uVar1 == 0) goto LAB_00287060;
    *(int *)(DAT_002870ec + uVar11 * 4) = *(int *)(DAT_002870ec + uVar11 * 4) + -1;
  }
  if (*(short *)(param_1 + 0x27c) == 0) {
LAB_00287060:
    local_50 = (float)(int)(short)local_3c;
    local_4c = 0.0;
    FUN_0036e140(param_1 + 600,local_40);
    *(char *)(param_1 + 0x27e) = *(char *)(param_1 + 0x27e) + '\x01';
    uVar4 = *(ushort *)(param_1 + 0x1c);
    bVar12 = (uVar4 & 0x8000) != 0;
    if (bVar12) {
      uVar4 = (ushort)*(byte *)(param_1 + 0x27f);
    }
    if ((bVar12 && uVar4 != 0) &&
       (*(char *)(param_1 + 0x27f) = (char)(uVar4 - 1), (uVar4 - 1 & 0xff) == 1)) {
      local_50 = DAT_00286e98;
      local_4c = DAT_00286e94;
      FUN_0037547c(DAT_00286e68,0,4,DAT_00286e98);
      FUN_00375c10(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    }
    return;
  }
LAB_00286ff8:
  if ((uint)(int)*(short *)(param_1 + 0x27c) < 0x1e) {
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x27c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    local_3c = (int)(fVar13 * DAT_002870f0 * DAT_002870f4);
  }
  else {
    local_3c = 200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
